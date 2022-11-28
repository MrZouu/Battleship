//
// Created by Mat Plat on 21/11/2022.
//
#include "AnsiAffichage.h"
#include "Navires.h"
//DA = angle haut gauche
//BF = angle haut droit
//C0 = angle bas gauche
//D9 = angle bas droit
//C5 = croix
//B3 = trait vertical
//C4 = trait horizontal
//B4 = T penché a droite
//C1 = T a l'envers
//C2 = T
//C3 = T penché a gauche

void init(t_game * b){
    for(int i=0;i<=LIGNES;i++) //Initialisation tableau à 0;
    {
        for(int j=0;j<=COLONNES;j++)
        {
            b->board[i][j]=0;
        }
    }
    ///-------------LIGNE HAUTE---------------///
    b->board[0][0]=0xDA;  //angle haut GAUCHE
    for(int j=1;j<COLONNES;j++)
    {
        if(j%3==0)
        {
            b->board[0][j]=0xC2;    //T
        }
        else
            b->board[0][j]=0xC4;    //Trait horizontal
    }
    b->board[0][45]=0xBF; //angle haut DROIT
    ///-------------GRILLE---------------///
    for(int i=1;i<LIGNES;i++)
    {
        for(int j=0;j<COLONNES;j++)
        {
            if(j%3==0) {    //Pour trait vertical sur toute la surface
                b->board[i][j]=0xB3; //trait vertical
                    if(i%2==0) {    //Pour croix dans grille
                      b->board[i][j]=0xC5; //Croix
                    }
            }
            if(j==0 && i%2==0)
            {
                b->board[i][j]=0xC3; //T Penché à GAUCHE
            }
            if(j==45 && i%2==0)
            {
                b->board[i][j]=0xB4; //T Penché à DROITE
            }
            if(j%3!=0 && i%2==0)
            {
                b->board[i][j]=0xC4; //Trait horizontal
            }
        }
    }
    ///-------------LIGNE BASSE---------------///
    b->board[30][0]=0xC0; //angle bas GAUCHE
    for(int j=1;j<COLONNES;j++)
    {
        if(j%3==0)
        {
            b->board[30][j]=0xC1;    //T à l'envers
        }
        else
            b->board[30][j]=0xC4;    //Trait horizontal
    }
    b->board[30][45]=0xD9; //angle bas DROIT

    initialisationFlotte(b);
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
