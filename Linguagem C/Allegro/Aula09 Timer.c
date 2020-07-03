#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>

#define FPS 255
#define WIDTH 640
#define HEIGHT 480

ALLEGRO_DISPLAY *window = NULL;
ALLEGRO_EVENT_QUEUE *event_queue = NULL;
ALLEGRO_TIMER *timer;

void error_msg(char *text){
    al_show_native_message_box(NULL, "ERROR", "The following error ocurred:", text, NULL, ALLEGRO_MESSAGEBOX_ERROR);
}

int inicializate(){
    if (! al_init()){
        error_msg("Error while inicializating Allegro");
        return 0;
    }

    timer = al_create_timer(1.0 / FPS);
    if (! timer){
        error_msg("Error while creating timer");
        return 0;
    }

    window = al_create_display(WIDTH, HEIGHT);
    if(!window) {
        error_msg("Error creating window");
        al_destroy_timer(timer);
        return 0;
    }
    al_set_window_title(window, "Using timer");

    event_queue = al_create_event_queue();
    if(!event_queue) {
        error_msg("Error while creating event queue");
        al_destroy_timer(timer);
        al_destroy_display(window);
        return 0;
    }

    al_register_event_source(event_queue, al_get_display_event_source(window));
    al_register_event_source(event_queue, al_get_timer_event_source(timer));

    al_clear_to_color(al_map_rgb(0,0,0));
    al_flip_display();
    al_start_timer(timer);

    return 1;
}

int main(){
    int desenha = 1;
    int sair = 0;
    int cor[3] = {0,0,0};
    int i=0, inc=1;


    if (! inicializate()){
        return -1;
    }

    while (! sair){
        ALLEGRO_EVENT event;
        al_wait_for_event(event_queue, &event);

        if (event.type == ALLEGRO_EVENT_DISPLAY_CLOSE){
                sair = 1;
        }

        else if (event.type == ALLEGRO_EVENT_TIMER){
            cor[i] += inc;
            if (cor[i] >= 255)
                inc*= -1;
            if (cor[i] <= 0){
                i+=1;
                if ( i >= 3){
                    i = 0;
                }
                inc*= -1;
            }
            desenha = 1;
        }

        if (desenha && al_is_event_queue_empty(event_queue)){
            al_clear_to_color(al_map_rgb(cor[0], cor[1], cor[2]));
            al_flip_display();
            desenha = 0;
        }

    }


    return 0;
}

