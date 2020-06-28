#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>

int main(void){
    // Variável representando a janela principal
    ALLEGRO_DISPLAY *janela = NULL;

    // Inicializa o allegro
    al_init();

    // Criamos a nossa janela - dimensões de 640x480 px - esse create display sempre retorna um ponteiro
    janela = al_create_display(640, 480);

    // Preenchemos a janela de branco
    al_clear_to_color(al_map_rgba(255, 255, 255, 0.1));

    int r = al_show_native_message_box(janela, "Titulo", "Sou uma caixa de texto", "Mensagem exibida", NULL, ALLEGRO_MESSAGEBOX_OK_CANCEL);
    if (r == 1){
        printf("Voce clicou no Ok!");
    }
    else{
        printf("Voce clicou no cancelar...");
    }

    // Atualiza a tela - mostra a tela
    al_flip_display();

    // Segura a execução por 10 segundos
    al_rest(10.0);

    // Finaliza a janela
    al_destroy_display(janela);

    return 0;
}
