#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_font.h>

#define LARGURA_TELA 640
#define ALTURA_TELA 480

void error_msg(char *texto){
    al_show_native_message_box(NULL, "ERRO", "Ocorreu o seguinte erro:", texto, NULL, ALLEGRO_MESSAGEBOX_ERROR);
}

int main(void){
    ALLEGRO_DISPLAY *janela = NULL;
    ALLEGRO_EVENT_QUEUE *fila_eventos = NULL;
    ALLEGRO_FONT *fonte = NULL;

    if (!al_init()){
        error_msg("Falha ao iniciarlizar o allegro");
        return -1;
    }

	janela = al_create_display(LARGURA_TELA, ALTURA_TELA);
	//caso al_create_display retorne NULL, encerra programa
	if (!janela){
		error_msg("Falha ao criar janela");
		return -1;
	}
    al_set_window_title(janela, "Titulo");

    al_init_font_addon();
    if (! al_init_ttf_addon()){
        error_msg("Falha ao inicialiar as fontes");
        al_destroy_display(janela);
        return -1;
    }

    fonte = al_load_font("rainbow.ttf", 100, 0);
    if (! fonte){
        error_msg("Falha ao inicialiar a fonte rainbow");
        return -1;
    }

	// torna o teclado disponivel pra uso
    if (! al_install_keyboard()){
        error_msg("Falha ao inicializar o teclado");
        return -1;
    }

    // cria fila de eventos
    fila_eventos = al_create_event_queue();
    if (! fila_eventos){
        error_msg("Falha ao criar fila de eventos");
        al_destroy_display(janela);
        return -1;
    }

    // registra eventos da janela e do teclado em fila_eventos
    al_register_event_source(fila_eventos, al_get_display_event_source(janela));
    al_register_event_source(fila_eventos, al_get_keyboard_event_source());

    int sair = 0;
    int tecla = 0;
    al_clear_to_color(al_map_rgb(0,0,0));

    while(! sair){

                ALLEGRO_EVENT evento;
                al_wait_for_event(fila_eventos, &evento);

                // se uma tecla foi solta
                if (evento.type == ALLEGRO_EVENT_KEY_UP){
                    tecla = 5;
                }
                //se o evento foi de pressionar tecla
                else if (evento.type = ALLEGRO_EVENT_KEY_DOWN){ // key down n é pra baxio necessariamente, mas alguma coisa foi pressionada
                    switch(evento.keyboard.keycode){
                    case ALLEGRO_KEY_UP: tecla = 1; break;
                    case ALLEGRO_KEY_DOWN: tecla = 2; break;
                    case ALLEGRO_KEY_LEFT: tecla = 3; break;
                    case ALLEGRO_KEY_RIGHT: tecla = 4; break;
                    case ALLEGRO_KEY_ESCAPE: sair = 1; break;
                    }
                }
                else if (evento.type == ALLEGRO_EVENT_DISPLAY_CLOSE){
                    sair = 1;
                }

        if (tecla){
            al_clear_to_color(al_map_rgb(0,0,0));
            switch(tecla){
            case 1:
                al_draw_text(fonte, al_map_rgb(0,255,0), LARGURA_TELA /2, ALTURA_TELA /2, ALLEGRO_ALIGN_CENTER, "CIMA");break;
            case 2:
                al_draw_text(fonte, al_map_rgb(255,0,255), LARGURA_TELA /2, ALTURA_TELA /2, ALLEGRO_ALIGN_CENTER, "BAIXO");break;
            case 3:
                al_draw_text(fonte, al_map_rgb(255,0,0), LARGURA_TELA /2, ALTURA_TELA /2, ALLEGRO_ALIGN_CENTER, "ESQUERDA");break;
            case 4:
                al_draw_text(fonte, al_map_rgb(0,0,255), LARGURA_TELA /2, ALTURA_TELA /2, ALLEGRO_ALIGN_CENTER, "DIREITA");break;
            }
            tecla = 0;
        }
        al_flip_display();
    }

    al_destroy_display(janela);
    al_destroy_event_queue(fila_eventos);

    return 0;
}

