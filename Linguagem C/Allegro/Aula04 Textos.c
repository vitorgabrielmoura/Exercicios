#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

#define LARGURA_TELA 640
#define ALTURA_TELA 480

void error_msg(char *texto){
    al_show_native_message_box(NULL, "ERRO", "Ocorreu o seguinte erro:", texto, NULL, ALLEGRO_MESSAGEBOX_ERROR);
}

int main(void){
    char nome[50];

    if (!al_init()){
        error_msg("Falha ao iniciarlizar o allegro");
        return -1;
    }

    ALLEGRO_DISPLAY *janela = al_create_display(LARGURA_TELA, ALTURA_TELA);
    if (! janela){
        error_msg("Falha ao criar a janela");
        return -1;
    }

    al_init_font_addon();
    al_init_ttf_addon();

    ALLEGRO_FONT *fonte = al_load_font("resources/rainbow.ttf", 48, 0);
    if (! fonte){
        error_msg("Falha ao carregar a fonte");
        return -1;
    }

    printf("Digite seu nome: ");
    gets(nome);

    al_clear_to_color(al_map_rgb(0,0,0));

    al_draw_text(fonte, al_map_rgb(255, 0, 0), LARGURA_TELA / 2, 0, ALLEGRO_ALIGN_CENTER, nome);
    al_draw_text(fonte, al_map_rgba(255, 0, 0, 0.5), 0, ALTURA_TELA /2, ALLEGRO_ALIGN_LEFT, "Esquerda");
    al_draw_text(fonte, al_map_rgba(255, 0, 0, 0.5), 600, ALTURA_TELA / 2, ALLEGRO_ALIGN_RIGHT, "Direita");

    al_flip_display();

    al_rest(5);
    al_destroy_font(fonte);
    al_destroy_display(janela);

    return 0;
}

