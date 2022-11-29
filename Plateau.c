//
// Created by Lorenzo on 27/11/2022.
//

#include "Plateau.h"
#include "AnsiAffichage.h"

void placement(t_game b)
{

}

void affecterPorteAv(t_porteAv * qt1, t_game * b)
{
    int X, Y;
        X=((qt1->pos_X)*2)+1; //Calcul pour afficher sur lignes
        Y=((qt1->pos_Y)*3)+1; //Calcul pour afficher sur colonnes
        b->board[X][Y]='P';
        for(int i=0;i<(qt1->taille);i+=2) //Affichage sur plusieures cases ( ici 7 ) vertical
        {
            b->board[X+i][Y]='P';
        }
}

void affecterCroiseur(t_croiseur * qt2, t_game * b)
{
    int X, Y;
    for(int i=0;i<nbC;i++)  //Saisie du tableau de structure
    {
        X=((qt2[i].pos_X)*2)+1; //Calcul pour afficher sur lignes
        Y=((qt2[i].pos_Y)*3)+1; //Calcul pour afficher sur colonnes
        b->board[X][Y]='C';
        for(int j=0;j<(qt2[i].taille);j+=2) //Affichage sur plusieures cases ( ici 5 ) vertical
        {
            b->board[X+j][Y]='C';
        }
    }
}

void affecterDestroyer(t_destroy * qt3, t_game * b)
{
    int X, Y;
    for(int i=0;i<nbD;i++)  //Saisie du tableau de structure
    {
        X=((qt3[i].pos_X)*2)+1; //Calcul pour afficher sur lignes
        Y=((qt3[i].pos_Y)*3)+1; //Calcul pour afficher sur colonnes
        b->board[X][Y]='D';
        for(int j=0;j<(qt3[i].taille);j+=2) //Affichage sur plusieures cases ( ici 3 ) vertical
        {
            b->board[X+j][Y]='D';
        }
    }
}

void affecterSousMarin(t_sousMarin * qt4, t_game * b)
{
    int X, Y;
    for(int i=0;i<nbSM;i++)  //Saisie du tableau de structure
    {
        X=((qt4[i].pos_X)*2)+1; //Calcul pour afficher sur lignes
        Y=((qt4[i].pos_Y)*3)+1; //Calcul pour afficher sur colonnes
        b->board[X][Y]='S';
    }
}

//Ceci est un test dans le plateau de jeu