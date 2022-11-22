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



typedef struct PorteAvion{
    int symbole;        //Pas obliger vu que c'est une structure unique
    int numero;     //Numero du bateau ??
    int taille;
    int postion;
}t_PorteAv;

typedef struct Croiseur{
    int symbole;        //Pas obliger vu que c'est une structure unique
    int numero;     //Numero du bateau ??
    int taille;
    int postion;
}t_Croiseur;

typedef struct Destroyeur{
    int symbole;        //Pas obliger vu que c'est une structure unique
    int numero;     //Numero du bateau ??
    int taille;
    int postion;
}t_Destroy;

typedef struct SousMarin{
    int symbole;        //Pas obliger vu que c'est une structure unique
    int numero;     //Numero du bateau ??
    int taille;
    int postion;
}t_SousMarin;


#endif //BATTLESHIP_HEADER_H
