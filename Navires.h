//
// Created by Lorenzo on 21/11/2022.
//
#ifndef BATTLESHIP_NAVIRES_H
#define BATTLESHIP_NAVIRES_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "AnsiAffichage.h"

//Nombre de navires
#define nbC 2
#define nbD 3
#define nbSM 4

#define MAX 14  //Position MAX
#define MIN 0   //Position MIN

typedef struct PorteAvion{  //7 CASES
    char symbole;
    int taille;
    int pos_X;
    int pos_Y;
}t_porteAv;

typedef struct Croiseur{    //5 CASES
    char symbole;
    int taille;
    int pos_X;
    int pos_Y;
}t_croiseur;

typedef struct Destroyeur{  //3 CASES
    char symbole;
    int taille;
    int pos_X;
    int pos_Y;
}t_destroy;

typedef struct SousMarin{   //1 CASE
    char symbole;
    int taille;
    int pos_X;
    int pos_Y;
}t_sousMarin;

void initialisationFlotte(t_game * b);
t_porteAv SaisirPa(t_porteAv * pA);
t_croiseur SaisirC(t_porteAv * C);
t_destroy SaisirD(t_porteAv * D);
t_sousMarin SaisirSm(t_porteAv * Sm);

void SaisirFlotteC(t_croiseur * qt2);
void SaisirFlotteD(t_destroy * qt3);
void SaisirFlotteSm(t_sousMarin * qt4);



#endif //BATTLESHIP_NAVIRES_H

