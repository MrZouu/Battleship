//
// Created by Lorenzo on 21/11/2022.
//
#include <stdio.h>
#include <stdlib.h>

#define LIGNES 14
#define COLONNES 14

#ifndef BATTLESHIP_HEADER_H
#define BATTLESHIP_HEADER_H

typedef struct Plateau{
    int grille[LIGNES][COLONNES];
    int grilleAdverse[LIGNES][COLONNES];
}t_plateau;

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

void AnsiAffichage();

#endif //BATTLESHIP_HEADER_H
