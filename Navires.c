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
    //Initialiser jeu
    SaisirPa(&qt1);
    SaisirFlotteC(&qt2);
    SaisirFlotteD(&qt3);
    SaisirFlotteSm(&qt4);
    afficherFlotte(qt2);
    afficherPa(qt1);
}

t_porteAv SaisirPa(t_porteAv * pA)
{
    pA->symbole='P';
    pA->taille=7;
    pA->pos_X=rand() % (MAX +1 -MIN)+MIN; ;
    pA->pos_Y=rand() % (MAX +1 -MIN)+MIN; ;
}

t_croiseur SaisirC(t_porteAv * C)
{   //Caracteristiques meuble
    C->symbole='C';
    C->taille=5;
    C->pos_X=rand() % (MAX +1 -MIN)+MIN; //max +1 - min;
    C->pos_Y=rand() % (MAX +1 -MIN)+MIN; //max +1 - min;
}

t_destroy SaisirD(t_porteAv * D)
{   //Caracteristiques meuble
    D->symbole='D';
    D->taille=3;
    D->pos_X=rand() % (MAX +1 -MIN)+MIN; ;
    D->pos_Y=rand() % (MAX +1 -MIN)+MIN; ;
}

t_sousMarin SaisirSm(t_porteAv * Sm)
{   //Caracteristiques meuble
    Sm->symbole='S';
    Sm->taille=1;
    Sm->pos_X=rand() % (MAX +1 -MIN)+MIN; ;
    Sm->pos_Y=rand() % (MAX +1 -MIN)+MIN; ;
}
///------------------------AFFICHAGE---------------------------///

void afficherC(t_croiseur C)
{
    //Affichage Caracteristiques meuble
    printf("Symbole: %c\n",C.symbole);
    printf("Taille: %d\n",C.taille);
    printf("posX: %d\n",C.pos_X);
    printf("posY: %d\n",C.pos_Y);
}

void afficherFlotte(t_croiseur * qt2)
{
    for(int i=0;i<nbC;i++)
    {
        printf("Croiseur [%d]:\n",i); //numéro meuble
        afficherC(qt2[i]);   //Appel afficher M en boucle
    }
}

void afficherPa(t_porteAv pA)
{
    //Affichage Caracteristiques meuble
    printf("Symbole: %c\n",pA.symbole);
    printf("Taille: %d\n",pA.taille);
    printf("posX: %d\n",pA.pos_X);
    printf("posY: %d\n",pA.pos_Y);
}

///-------------------------SAISIE----------------------------///

void SaisirFlotteC(t_croiseur * qt2){
    for(int i=0;i<nbC;i++)  //Saisie du tableau de structure
    {
        SaisirC(&qt2[i]); //Appel de la fonction saisie qui retourne
    }
}

void SaisirFlotteD(t_destroy * qt3){
    for(int i=0;i<nbD;i++)  //Saisie du tableau de structure
    {
        SaisirC(&qt3[i]); //Appel de la fonction saisie qui retourne
    }
}

void SaisirFlotteSm(t_sousMarin * qt4){
    for(int i=0;i<nbSM;i++)  //Saisie du tableau de structure
    {
        SaisirC(&qt4[i]); //Appel de la fonction saisie qui retourne
    }
}