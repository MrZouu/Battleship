//
// Created by Lorenzo on 27/11/2022.
//
#include "Navires.h"

void miseTest()
{
    t_porteAv qt1;
    t_croiseur qt2[nbC];
    t_destroy qt3[nbD];
    t_sousMarin qt4[nbSM];
    SaisirC(&qt2);
    afficherTableM(qt2);
}

t_porteAv SaisirPa(t_porteAv * pA)
{   //Caracteristiques meuble
    pA->symbole='P';
    pA->taille=7;
    pA->pos_X=rand();
    pA->pos_Y=rand();
}

void SaisirTable(t_croiseur * qt2){
    for(int i=0;i<nbC;i++)  //Saisie du tableau de structure
    {
        SaisirC(&qt2[i]); //Appel de la fonction saisie qui retourne BoMeuble
    }
}

t_croiseur SaisirC(t_porteAv * C)
{   //Caracteristiques meuble
    C->symbole='C';
    C->taille=5;
    C->pos_X=rand();
    C->pos_Y=rand();
}

t_destroy SaisirD(t_porteAv * D)
{   //Caracteristiques meuble
    D->symbole='D';
    D->taille=3;
    D->pos_X=rand();
    D->pos_Y=rand();
}

t_sousMarin SaisirSm(t_porteAv * Sm)
{   //Caracteristiques meuble
    Sm->symbole='S';
    Sm->taille=1;
    Sm->pos_X=rand();
    Sm->pos_Y=rand();
}
///---------------------///

void afficherM(t_croiseur C)
{
    //Affichage Caracteristiques meuble
    printf("Symbole: %c\n",C.symbole);
    printf("Taille: %d\n",C.taille);
    printf("posX: %d\n",C.pos_X);
    printf("posY: %d\n",C.pos_Y);
}

void afficherTableM(t_croiseur * qt2)
{
    for(int i=0;i<nbC;i++)
    {
        printf("Croiseur [%d]:\n",i); //numéro meuble
        afficherM(qt2[i]);   //Appel afficher M en boucle
    }
}

