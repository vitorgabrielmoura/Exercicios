// Inclui a biblioteca principal do allegro
#include <allegro5/allegro.h>
#include <stdio.h>

// inclui a biblioteca para imagens do allegro
#include <allegro5/allegro_image.h>

int main(void){
    // Variável representando a janela principal
    ALLEGRO_DISPLAY *janela = NULL;

    // Inicializa o allegro
    al_init();

    // inicializa o adicionamento de imgs
    al_init_image_addon();

    // Criamos a nossa janela - dimensões de 640x480 px - esse create display sempre retorna um ponteiro
    janela = al_create_display(640, 480);

    // carrega a img
    ALLEGRO_BITMAP *imagem1 = al_load_bitmap("resources/allegro.png");

    // mostra a img, 1º parametro é a img, segundo e terceiro sao o x e y na tela e o 4 é espelhamento
    al_draw_bitmap(imagem1, 0, 0, 0);

    // Preenchemos a janela de branco
    al_clear_to_color(al_map_rgba(255, 255, 255, 0.1));

    // Atualiza a tela - mostra a tela
    al_flip_display();

    // Segura a execução por 10 segundos
    al_rest(10.0);

    // Finaliza a janela e a imagem
    al_destroy_display(janela);
    al_destroy_bitmap(imagem);

    return 0;
}
