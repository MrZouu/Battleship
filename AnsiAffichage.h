//
// Created by Lorenzo on 23/11/2022.
//

#ifndef BATTLESHIP_ANSIAFFICHAGE_H
#define BATTLESHIP_ANSIAFFICHAGE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define LIGNES 31
#define COLONNES 46
//Valeurs ANSI pour le tableau
#define ANGLE_HAUT_GAUCHE 0xDA
#define ANGLE_HAUT_DROIT 0xBF
#define ANGLE_BAS_GAUCHE 0xC0
#define ANGLE_BAS_DROIT 0xD9
#define CROIX 0xC5
#define TRAIT_VERTICAL 0xB3
#define TRAIT_HORIZONTAL 0xC4
#define T_PENCHE_DROITE 0xB4
#define T_INVERSE 0xC1
#define T_NORMAL 0xC2
#define T_PENCHE_GAUCHE 0xC3
//Definition des couleurs pour le texte
#define BLEUFONCE Color(1,0);
#define VERTFONCE Color(2,0);
#define TURQUOISE Color(3,0);
#define ROUGEFONCE Color(4,0);
#define VIOLET Color(5,0);
#define VERTCACAOIE Color(6,0);
#define GRISCLAIR Color(7,0);
#define GRISFONCE Color(8,0);
#define BLEUFLUO Color(9,0);
#define VERTFLUO Color(10,0);
#define TURQUOISE Color(11,0);
#define ROUGEFLUO Color(12,0);
#define VIOLET2 Color(13,0);
#define JAUNE Color(14,0);
#define BLANC Color(15,0);


typedef struct game{
    char board[LIGNES][COLONNES];
}t_game;

void init(t_game * b);

void AnsiAffichage(t_game *b);

void Color(int couleurDuTexte,int couleurDeFond);


#endif //BATTLESHIP_ANSIAFFICHAGE_H
