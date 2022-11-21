//
// Created by Lorenzo on 21/11/2022.
//
#include <stdio.h>
#include <stdlib.h>

#ifndef BATTLESHIP_HEADER_H
#define BATTLESHIP_HEADER_H

typedef struct bateau{
    int quantite; //selon type
    int symbole; // P/C/D/S
    int taille;
    int position;
}t_bateau;
#endif //BATTLESHIP_HEADER_H
