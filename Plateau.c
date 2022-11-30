//
// Created by Lorenzo on 27/11/2022.
//

#include "Plateau.h"
#include "AnsiAffichage.h"
#include "Game.h"

void placement(t_game b)
{

}

void affecterBateau(t_bateau * boat, t_game * b)
{
    int X, Y;
    int TEST;
    TEST=0;
    for(int l=0;l<10;l++)
    {
        boat[l].position.x=CASEALEATOIRE;
        boat[l].position.y=CASEALEATOIRE;
        X=((boat[l].position.x)*2)+1; //Calcul pour afficher sur lignes
        Y=((boat[l].position.y)*3)+1; //Calcul pour afficher sur colonnes
        for(int k=0;k<TAILLEBATEAUTEST;k++)
        {
            (b->board[X][TESTHORIZONTAL]!=0)? TEST=1 : TEST;
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<TAILLEBATEAU;j++)
        {
            b->board[X][AFFICHAGEHORIZONTAL]= getSymbolFromBateau(boat[i]);
            b->board[X][H_CASENUMERO]=NUMEROBATEAU;
        }
    }
}

char getSymbolFromBateau(t_bateau boat){    //Retourne le caractere correspondant au bateau
    switch(boat.type_bateau){
        case 1:
            return SYMBOLE_PORTEAVION;
        case 2:
            return SYMBOLE_CROISEUR;
        case 3:
            return SYMBOLE_DESTROYEUR;
        case 4:
            return SYMBOLE_SOUSMARIN;
    }
}
