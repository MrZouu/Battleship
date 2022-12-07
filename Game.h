//
// Created by Lorenzo on 29/11/2022.
//
#ifndef NAVIRES_H_GAME_H
#define NAVIRES_H_GAME_H
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include "Plateau.h"

#define MAX 14  //Position MAX
#define MIN 0   //Position MIN
#define TIR_DANS_VIDE 0x9D
#define TIR_TOUCHE 0xDB

#define esc 27

int gameMenu(t_game *joueur1, t_game *joueur2, t_game *PlateauCache, int *flotte1, int *flotte2);

void modVisible(t_game * b, t_game * b1);

void sauvegarde(t_game *joueur1, t_game *PlateauCache, int *tab, int *tab2);

void charge();

int aide();


#endif //NAVIRES_H_GAME_H
