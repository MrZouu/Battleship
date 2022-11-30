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


#define TIRE_DANS_VIDE 0x9D
#define TIRE_TOUCHE 0xDB
#define T_KEY 0x54
#define E_KEY 0x53
#define D_KEY 0x44
#define V_KEY 0x56



void gameMenu(t_game b);
void attaque(t_game * b);
void modVisible();
//void keyPressed();

#endif //NAVIRES_H_GAME_H
