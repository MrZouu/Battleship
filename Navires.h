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
    int pos_X; ///Lignes
    int pos_Y; ///Colonnes
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
void SaisirPa(t_porteAv * pA);
void SaisirC(t_porteAv * C);
void SaisirD(t_porteAv * D);
void SaisirSm(t_porteAv * Sm);

void afficherCroiseur(t_croiseur * qt2);

#endif //BATTLESHIP_NAVIRES_H

