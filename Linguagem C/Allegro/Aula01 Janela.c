// Inclui a biblioteca principal do allegro
#include <allegro5/allegro.h>

int main(void){
    // Variável representando a janela principal
    ALLEGRO_DISPLAY *janela = NULL;

    // Inicializa o allegro
    al_init();

    // Preenchemos a janela de branco
    al_clear_to_color(al_map_rgba(255, 255, 255, 0.1));

    // Atualiza a tela - mostra a tela
    al_flip_display();

    // Segura a execução por 10 segundos
    al_rest(10.0);

    // Finaliza a janela
    al_destroy_display(janela);

    return 0;
}

