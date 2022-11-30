//
// Created by Mat Plat on 21/11/2022.
//
#include "AnsiAffichage.h"

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

void init(t_game * b){
    for(int i=0;i<=LIGNES;i++) //Initialisation tableau à 0;
    {
        for(int j=0;j<=COLONNES;j++)
        {
            b->board[i][j]=0;
        }
    }
    ///-------------LIGNE HAUTE---------------///
    b->board[0][0]=ANGLE_HAUT_GAUCHE;  //angle haut GAUCHE
    for(int j=1;j<COLONNES;j++)
    {
        if(j%3==0)
        {
            b->board[0][j]=T_NORMAL;
        }
        else
            b->board[0][j]=TRAIT_HORIZONTAL;
    }
    b->board[0][45]=ANGLE_HAUT_DROIT;
    ///-------------GRILLE---------------///
    for(int i=1;i<LIGNES;i++)
    {
        for(int j=0;j<COLONNES;j++)
        {
            if(j%3==0) {    //Pour trait vertical sur toute la surface
                b->board[i][j]=TRAIT_VERTICAL;
                if(i%2==0) {    //Pour croix dans grille
                    b->board[i][j]=CROIX;
                }
            }
            if(j==0 && i%2==0)
            {
                b->board[i][j]=T_PENCHE_GAUCHE;
            }
            if(j==45 && i%2==0)
            {
                b->board[i][j]=T_PENCHE_DROITE;
            }
            if(j%3!=0 && i%2==0)
            {
                b->board[i][j]=TRAIT_HORIZONTAL;
            }
        }
    }
    ///-------------LIGNE BASSE---------------///
    b->board[30][0]=ANGLE_BAS_GAUCHE; //angle bas GAUCHE
    for(int j=1;j<COLONNES;j++)
    {
        if(j%3==0)
        {
            b->board[30][j]=T_INVERSE;    //T à l'envers
        }
        else
            b->board[30][j]=TRAIT_HORIZONTAL;    //Trait horizontal
    }
    b->board[30][45]=ANGLE_BAS_DROIT; //angle bas DROIT
}



void AnsiAffichage(t_game b){
    int num=0;  //Numéros sur ligne
    char lettre = 'A'; //Lettres sur colonne
    printf("    ");
    for (int i=0; i<15; i++)
    {
        (num<10)? printf ("%d  ", num) : printf ("%d ", num);//Operateur ternaire Affichage des numéros au dessus des colonnes
        num++;
    }
    printf("\n");
    for(int i=0;i<LIGNES;i++)
    {
        (i%2!=0) ? printf(" %c ",lettre), lettre++:printf("   "); //Operateur ternaire affichage lettres
        for(int j=0;j<COLONNES;j++)
        {
            printf("%c",b.board[i][j]);
        }
        printf("\n");
    }
}
