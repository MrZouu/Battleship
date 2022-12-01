//
// Created by Lorenzo on 21/11/2022.
//
#include "Navires.h"
#include "AnsiAffichage.h"
#include "Plateau.h"
#include "Game.h"

int main()
{
    srand(time(NULL));
    t_game joueur1, joueur2;
    init(&joueur1);
    initialisationFlotte(&joueur1);
    init(&joueur2);
    initialisationFlotte(&joueur2);
    printf("\n\nCreation du jeu en cours...\nLes grilles ont ete generee aleatoirement !\n");
    do{
        AnsiAffichage(joueur1);
        //attaqueJoueur(&joueur1);
        //AnsiAffichage(joueur2);
        //attaqueIA(&joueur2);
        eclairer(&joueur1);
    }while(1);
   // gameMenu();
         //Faire tant que tous les bateaux d'un joueur sont détruits

}