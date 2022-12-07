//
// Created by Mat Plat on 21/11/2022.
//
#include "AnsiAffichage.h"

//Affichage du plateau et couleur

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
                    b->board[i][j]=CROIX; //Croix
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

void AnsiAffichage(t_game *b){
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
            printf("%c",b->board[i][j]);
        }
        printf("\n");
    }
}

// fonction d'affichage de couleurs
void Color(int couleurDuTexte,int couleurDeFond)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}