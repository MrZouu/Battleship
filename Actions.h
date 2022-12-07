//
// Created by Lorenzo on 03/12/2022.
//

#ifndef BATTLESHIP_ACTIONS_H
#define BATTLESHIP_ACTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Plateau.h"

void attaqueIA(t_game * b,int *tab);
void attaqueJoueur(t_game * b,t_game *b1,int *tab2);
void eclairer(t_game * b, t_game * b1);
void Cacher_eclairer(t_game * b, t_game * b1);

#endif //BATTLESHIP_ACTIONS_H
