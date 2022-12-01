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
    int X, Y, TEST,i=0;
    do
    {
        TEST=0;
        boat[i].position.x=CASEALEATOIRE;
        boat[i].position.y=CASEALEATOIRE;
        X=((boat[i].position.x)*2)+1; //Calcul pour afficher sur lignes
        Y=((boat[i].position.y)*3)+1; //Calcul pour afficher sur colonnes
        if(boat[i].orientation==0)
        {
            for(int k=0;k<TAILLEBATEAU;k++) //TESTHORIZONTAL
                {
                    (b->board[X][TESTHORIZONTAL]!=0)? TEST=1 : TEST;
                }
        }
        else{
            for(int k=0;k<TAILLEBATEAU;k++) //TESTVERTICAL
                {
                    (b->board[TESTVERTICAL][Y]!=0)? TEST=1 : TEST;
                }
        }
        if(TEST==0)
        {
            if(boat[i].orientation==0)
            {
                for(int j=0;j<TAILLEBATEAU;j++)//AFFICHAGE HORIZONTAL
                {
                    b->board[X][AFFICHAGEHORIZONTAL]= getSymbolFromBateau(boat[i]);
                    b->board[X][H_CASENUMERO]=NUMEROBATEAU;
                }
            }
            else{
                for(int j=0;j<TAILLEBATEAU;j++)//AFFICHAGE VERTICAL
                {
                    b->board[AFFICHAGEVERTICAL][Y]= getSymbolFromBateau(boat[i]);
                    b->board[AFFICHAGEVERTICAL][V_CASENUMERO]=NUMEROBATEAU;
                }
            }
            i++;
        }
    }while(i<10);
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
