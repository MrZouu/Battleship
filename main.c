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
    t_game b;
    init(&b);
    initialisationFlotte(&b);
    printf("\n\nCreation du jeu en cours...\nLes grilles ont ete generees aleatoirement !\n");
    AnsiAffichage(b);
    do{
        gameMenu(b);
    }while(1);      //Faire tant que tous les bateaux d'un joueur sont détruits



}