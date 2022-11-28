//
// Created by Lorenzo on 27/11/2022.
//
#include "Navires.h"
#include "Plateau.h"
#include "AnsiAffichage.h"

//Définir caractéristiques navire, position aléatoire, initialisation
//Navires a poser sur lignes impaires et colonnes pas multiples de 3
void initialisationFlotte(t_game * b)
{
    t_porteAv qt1;
    t_croiseur qt2[nbC];
    t_destroy qt3[nbD];
    t_sousMarin qt4[nbSM];
    //Initialiser jeu
    SaisirPa(&qt1);
    SaisirC(&qt2);
    SaisirD(&qt3);
    SaisirSm(&qt4);
    afficherCroiseur(qt2);
    affecterPorteAv(&qt1,b);
    affecterCroiseur(qt2,b);
    affecterDestroyer(qt3,b);
    affecterSousMarin(qt4,b);
}

void SaisirPa(t_porteAv * pA)
{
    pA->symbole='P';
    pA->taille=7;
    pA->pos_X=rand() % (MAX +1 -MIN)+MIN; ;
    pA->pos_Y=rand() % (MAX +1 -MIN)+MIN; ;
}

void SaisirC(t_porteAv * C)
{
    for(int i=0;i<nbC;i++)  //Saisie du tableau de structure
    {
        C[i].symbole='C';
        C[i].taille=5;
        C[i].pos_X=rand() % (MAX +1 -MIN)+MIN; //max +1 - min;
        C[i].pos_Y=rand() % (MAX +1 -MIN)+MIN; //max +1 - min;
    }
}

void SaisirD(t_porteAv * D)
{
    for(int i=0;i<nbD;i++)  //Saisie du tableau de structure
    {
        D[i].symbole='D';
        D[i].taille=3;
        D[i].pos_X=rand() % (MAX +1 -MIN)+MIN;
        D[i].pos_Y=rand() % (MAX +1 -MIN)+MIN;
    }

}

void SaisirSm(t_porteAv * Sm)
{
    for(int i=0;i<nbSM;i++)  //Saisie du tableau de structure
    {
        Sm[i].symbole='S';
        Sm[i].taille=1;
        Sm[i].pos_X=rand() % (MAX +1 -MIN)+MIN;
        Sm[i].pos_Y=rand() % (MAX +1 -MIN)+MIN;
    }
}
///------------------------AFFICHAGE TEST---------------------------///


void afficherCroiseur(t_croiseur * qt2)
{
    for(int i=0;i<nbC;i++)  //Saisie du tableau de structure
    {
        printf("Symbole: %c\n",qt2[i].symbole);
        printf("Taille: %d\n",qt2[i].taille);
        printf("posX: %d\n",qt2[i].pos_X);
        printf("posY: %d\n",qt2[i].pos_Y);
    }
}