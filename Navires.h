//
// Created by Lorenzo on 21/11/2022.
//
#ifndef BATTLESHIP_NAVIRES_H
#define BATTLESHIP_NAVIRES_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "AnsiAffichage.h"
#include "Navires.h"

//Nombre de navires
#define nbPa 1
#define nbC 2
#define nbD 3
#define nbSM 4

#define MAX 14  //Position MAX
#define MIN 0   //Position MIN

#define CASEALEATOIRE rand() % (MAX +1 -MIN)+MIN

#define TAILLEBATEAU boat[i].size


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
    t_coord position;             //Coordonnées d'un bateau
    int size;                     //Taille d'un bateau
    int orientation;           //0 horizontal 1 vertical
}t_bateau;

void initialisationFlotte(t_game * ,int *tab);
void initialisationFlotteIA(t_game * b, t_game * b1);
void SaisieBateaux(t_bateau * boat);
void pointDeVie(int *tab);

#endif //BATTLESHIP_NAVIRES_H

