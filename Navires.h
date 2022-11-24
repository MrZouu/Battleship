//
// Created by Lorenzo on 21/11/2022.
//
#ifndef BATTLESHIP_NAVIRES_H
#define BATTLESHIP_NAVIRES_H

#include <stdio.h>
#include <stdlib.h>

typedef struct bateau{
    int quantite; //selon type
    int symbole; // P/C/D/S
    int taille;
    int position;
}t_bateau;


typedef struct PorteAvion{
    int symbole;        //Pas obliger vu que c'est une structure unique
    int numero;     //Numero du bateau ??
    int taille;
    int position;
}t_PorteAv;

typedef struct Croiseur{
    int symbole;        //Pas obliger vu que c'est une structure unique
    int numero;     //Numero du bateau ??
    int taille;
    int position;
}t_Croiseur;

typedef struct Destroyeur{
    int symbole;        //Pas obliger vu que c'est une structure unique
    int numero;     //Numero du bateau ??
    int taille;
    int position;
}t_Destroy;

typedef struct SousMarin{
    int symbole;        //Pas obliger vu que c'est une structure unique
    int numero;     //Numero du bateau ??
    int taille;
    int position;
}t_SousMarin;


#endif //BATTLESHIP_NAVIRES_H

