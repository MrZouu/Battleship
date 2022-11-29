//
// Created by Lorenzo on 23/11/2022.
//

#ifndef BATTLESHIP_ANSIAFFICHAGE_H
#define BATTLESHIP_ANSIAFFICHAGE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Navires.h"

#define LIGNES 31
#define COLONNES 46

#define SYMBOLE_PORTEAVION 'P'
#define SYMBOLE_SOUSMARIN 'S'
#define SYMBOLE_DESTROYEUR 'D'
#define SYMBOLE_CROISEUR 'C'

typedef struct game{
    char board[LIGNES][COLONNES];
}t_game;
/*
typedef struct plateau{
    int grille[LIGNES][COLONNES];
    int grilleAdverse[LIGNES][COLONNES];
}t_plateau;

void init(t_game * b);
void AnsiAffichage(t_game b);





#endif //BATTLESHIP_ANSIAFFICHAGE_H
