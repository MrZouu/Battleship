//
// Created by Lorenzo on 27/11/2022.
//

#include "Plateau.h"
#include "AnsiAffichage.h"

void placement(t_game b)
{

}

void affecterBateau(t_bateau * boat, t_game * b)
{
    int X, Y;
    for(int i=0;i<10;i++)
    {
        X=((boat[i].position.x)*2)+1; //Calcul pour afficher sur lignes
        Y=((boat[i].position.y)*3)+1; //Calcul pour afficher sur colonnes
        b->board[X][Y]= getSymbolFromBateau(boat[i]);
    }

}

char getSymbolFromBateau(t_bateau boat){    //Retourne le caractere correspondant au bateau

    switch(boat.type_bateau){
        case 1:
            return SYMBOLE_PORTEAVION;

        case 2:
            return SYMBOLE_SOUSMARIN;

        case 3:
            return SYMBOLE_DESTROYEUR;

        case 4:
            return SYMBOLE_CROISEUR;
    }
}
