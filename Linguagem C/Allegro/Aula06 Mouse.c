#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>

#define LARGURA_TELA 640
#define ALTURA_TELA 480

void error_msg(char *texto){
    al_show_native_message_box(NULL, "ERRO", "Ocorreu o seguinte erro:", texto, NULL, ALLEGRO_MESSAGEBOX_ERROR);
}

int main(void){
    ALLEGRO_DISPLAY *janela = NULL;
    ALLEGRO_EVENT_QUEUE *fila_eventos = NULL;
    ALLEGRO_BITMAP *botao_sair = NULL, *area_central = 0;

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

    // torna apto o uso do mouse na aplicação
    if (! al_install_mouse()){
        error_msg("Falha ao inicializar o mouse");
        al_destroy_display(janela);
        return -1;
    }

    // torna o cursor padrão do sistema para ser usado
    if (! al_set_system_mouse_cursor(janela, ALLEGRO_SYSTEM_MOUSE_CURSOR_DEFAULT)){
        error_msg("Erro ao atribuir o ponteiro do mouse");
        al_destroy_display(janela);
        return -1;
    }

    // aloca o retangulo central da tela e o botaozinho
    area_central = al_create_bitmap(LARGURA_TELA / 2, ALTURA_TELA / 2);
    botao_sair = al_create_bitmap(100, 50);

    //
    fila_eventos = al_create_event_queue();
    if (! fila_eventos){
        error_msg("Falha ao criar fila de eventos");
        al_destroy_display(janela);
        return -1;
    }

    // registra eventos dO MOUSE em fila_eventos
    al_register_event_source(fila_eventos, al_get_mouse_event_source());
    int sair = 0;
    while(sair == 0){
        // flag indicando se o mouse está sobre o retangulo central
        int na_area_central = 0;
        // verificamos se há eventos na fila
        ALLEGRO_EVENT evento;
        al_wait_for_event(fila_eventos, &evento);
        
        // se o evento for o click do mouse
        if (evento.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP){
                if (evento.mouse.x >= LARGURA_TELA - al_get_bitmap_width(botao_sair) - 10 &&
                evento.mouse.x <= LARGURA_TELA - 10 && evento.mouse.y <= ALTURA_TELA - 10 &&
                evento.mouse.y >= ALTURA_TELA - al_get_bitmap_height(botao_sair) - 10){
                    sair = 1;
        		}
    	}

        //se o evento foi de movimentação do mouse
        else if (evento.type = ALLEGRO_EVENT_MOUSE_AXES){
            //verifica se ele está sobre a regiãoc entral
            if (evento.mouse.x >= LARGURA_TELA / 2 - al_get_bitmap_width(area_central) /2 &&
                evento.mouse.x <= LARGURA_TELA / 2 + al_get_bitmap_width(area_central) /2 &&
                evento.mouse.y >= ALTURA_TELA / 2 - al_get_bitmap_width(area_central) /2 &&
                evento.mouse.y <= ALTURA_TELA / 2 + al_get_bitmap_width(area_central) /2 ){
                    na_area_central = 1;
                }
        }
    
        al_clear_to_color(al_map_rgb(0,0,0));

        // colore o bitmap correspondente ao retangulo central com a cor da flag
        al_set_target_bitmap(area_central);
        if (! na_area_central){
            al_clear_to_color(al_map_rgb(255,255,255));
        }
        else{
            al_clear_to_color(al_map_rgb(0,255,0));
        }

        // Colore o bitmap do botão de sair
        al_set_target_bitmap(botao_sair);
        al_clear_to_color(al_map_rgb(255, 0, 0));

        // Desenhamos os retângulos na tela
        al_set_target_bitmap(al_get_backbuffer(janela));
        al_draw_bitmap(area_central, LARGURA_TELA / 2 - al_get_bitmap_width(area_central) / 2,
        ALTURA_TELA / 2 - al_get_bitmap_height(area_central) / 2, 0);
        al_draw_bitmap(botao_sair, LARGURA_TELA - al_get_bitmap_width(botao_sair) - 10,
        ALTURA_TELA - al_get_bitmap_height(botao_sair) - 10, 0);

        al_flip_display();
    }

    al_destroy_display(janela);
    al_destroy_event_queue(fila_eventos);
    al_destroy_bitmap(botao_sair);
    al_destroy_bitmap(area_central);

    return 0;
}

