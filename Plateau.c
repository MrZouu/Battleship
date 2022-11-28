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
}

void affecterCroiseur(t_croiseur * qt2, t_game * b)
{
    int X, Y;
    for(int i=0;i<nbC;i++)  //Saisie du tableau de structure
    {
        X=((qt2[i].pos_X)*2)+1; //Calcul pour afficher sur lignes
        Y=((qt2[i].pos_Y)*3)+1; //Calcul pour afficher sur colonnes
        b->board[X][Y]='C';
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