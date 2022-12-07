//
// Created by Lorenzo on 27/11/2022.
//

#include "Plateau.h"
#include "AnsiAffichage.h"
#include "Game.h"

//Affectation des elements du tableau

void affecterBateau(t_bateau *boat, t_game * b)
{
    int X, Y, TEST,i=0;
    do
    {
        TEST=0;
        do {
            X = ((CASEALEATOIRE)*2)+1; //Calcul pour afficher sur lignes
        }while(((X-1)/2)>=14-TAILLEBATEAU);
        do{
            Y=((CASEALEATOIRE)*3)+1; //Calcul pour afficher sur colonnes
        }while(((Y-1)/3)>=14-TAILLEBATEAU);

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
            return SYMBOLE_DESTROYER;
        case 4:
            return SYMBOLE_SOUSMARIN;
    }
}

void affecterBateauIA(t_game * b, t_game * b1)
{
    int X, Y;
    for(int i = 0; i<14; i++){
        X = ((i) * 2) + 1;
        for(int j = 0; j<14; j++) {
            Y = ((j) * 3) + 1;
            if (b->board[X][Y] == 0) {
                b1->board[X][Y] = 0;
            }
            if ((b->board[X][Y]) == SYMBOLE_PORTEAVION){
                (b1->board[X][Y]) = SYMBOLE_INVISIBLE;
            }
            if((b->board[X][Y]) == SYMBOLE_SOUSMARIN){
                b1->board[X][Y] = SYMBOLE_INVISIBLE;
            }
            if((b->board[X][Y]) == SYMBOLE_CROISEUR){
                b1->board[X][Y] = SYMBOLE_INVISIBLE;
            }
            if((b->board[X][Y]) == SYMBOLE_DESTROYER){
                b1->board[X][Y] = SYMBOLE_INVISIBLE;
            }
        }
    }

}
