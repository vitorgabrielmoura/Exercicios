#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>

#define LARGURA_TELA 640
#define ALTURA_TELA 480

void error_msg(char *texto){
    al_show_native_message_box(NULL, "ERRO", "Ocorreu o seguinte erro:", texto, NULL, ALLEGRO_MESSAGEBOX_ERROR);
}

int main(void){
    ALLEGRO_DISPLAY *janela = NULL;;
    ALLEGRO_EVENT_QUEUE *fila_eventos = NULL;

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

	// cria a fila q vai receber todos os eventos
    fila_eventos = al_create_event_queue();
    if (! fila_eventos){
        error_msg("Falha ao criar fila de eventos");
        al_destroy_display(janela);
        return -1;
    }

    // registra eventos da janela em fila_eventos
    al_register_event_source(fila_eventos, al_get_display_event_source(janela));

    al_clear_to_color(al_map_rgb(0,0,0));
    al_flip_display();

    /* O while abaixo é onde futuramente ficará toda lógica dos jogos criados.
    Todo jogo se baseia em atualizar a tela em um intervalo de tempo predeterminado
    (idealmente 60 vezes por segundo, ou 60 fps), além de capturar entrada do usuário (por teclado, mouse,
    ou outros) e executar a lógica específica do jogo. Este processo acontece repetidamente até que o jogo
    termine. */
    while (1){
        // declara variavel q recebe o evento --> ela é uma struct,
        //cujo campo type indica o tipo de evento que foi disparado.
        ALLEGRO_EVENT evento;
        //espero por um evento d fila, e guarda em evento
        al_wait_for_event(fila_eventos, &evento);

        // se teve eventos e foi um evento de fechr janela, da um break
        if (evento.type == ALLEGRO_EVENT_DISPLAY_CLOSE){
            int resp = al_show_native_message_box(janela, "Fechar", "Deseja sair do programa?",
                                                  "", NULL, ALLEGRO_MESSAGEBOX_YES_NO);
            if (resp){
                break;
            }
        }
    }

    al_destroy_display(janela);
    al_destroy_event_queue(fila_eventos);

    return 0;
}



