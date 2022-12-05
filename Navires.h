//
// Created by Lorenzo on 21/11/2022.
//
#ifndef BATTLESHIP_NAVIRES_H
#define BATTLESHIP_NAVIRES_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "AnsiAffichage.h"

//Nombre de navires
#define nbC 2
#define nbD 3
#define nbSM 4

#define MAX 14  //Position MAX
#define MIN 0   //Position MIN


void initialisationFlotte(t_game * b);
void saisieBateaux(t_bateau * boat);



typedef enum typeBat{
    PORTEAVION = 0,
    SOUSMARIN,
    DESTROYEUR,
    CROISEUR
}e_type;

typedef struct coordonnees{
    int x;
    int y;
}t_coord;

typedef struct bateaux{
    e_type type_bateau;           //Type du bateau
//  e_allignement allgnement;     //Allignement du bateau sur la grille
    t_coord position;             //Coordonnées d'un bateau
    int size;                     //Taille d'un bateau
}t_bateau;

/*typedef struct celluleTab{
    t_coord pos;        //Positon d'une cellule dans un bateau
    t_bateau * bat;     //Quel bateau est à cet emplacement ?
    bool visible;       //Est ce que la cellule/case est visible ?
};*/





#endif //BATTLESHIP_NAVIRES_H

