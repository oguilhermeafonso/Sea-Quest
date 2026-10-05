#include <stdio.h>
#include <stdbool.h>

#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

//#define LARGURA 800
//#define ALTURA 600
//#define FPS 60

const int SCREEN_W = 960;
const int SCREEN_H = 540;

int main() {

    ALLEGRO_DISPLAY *display = NULL;


    //INICIALIZAR
    if(!al_init()) (
        fprintf(stderr, "Falha ao inicializar o Allegro!\n");
        return -1;
    )

    //VOU CRIAR UMA TELA COM DIMENSOES DE SCREEN_W x SCREEN_H pixels
    display = al_create_display(SCREENW, SCREEN_H);
    if (!display) {
        fprintf(stderr, "Falha para criar a tela!\n");
        return -1;
    }

    al_clear_to_color(al_map_rgb(0 , 255, 0));
    //ATUALIZA A TELA (QUANDO HOUVER ALGO PARA MOSTRAR)
    al_flip_display();
    al_rest(5);


    return 0;
}