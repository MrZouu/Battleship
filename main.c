//
// Created by Lorenzo on 21/11/2022.
//
#include "Navires.h"
#include "AnsiAffichage.h"
#include "Game.h"

int main()
{
    srand(time(NULL));
    ROUGEFONCE
    //TEXTE sur https://gist.github.com/mtancoigne/a51fe0686d51c05c6cd6ec5f42c856fc
    printf(" ____        _        _ _ _                               _      \n");
    printf("| __ )  __ _| |_ __ _(_) | | ___   _ __   __ ___   ____ _| | ___ \n");
    printf("|  _ \\ / _` | __/ _` | | | |/ _ \\ | '_ \\ / _` \\ \\ / / _` | |/ _ \\\n");
    printf("| |_) | (_| | || (_| | | | |  __/ | | | | (_| |\\ V / (_| | |  __/\n");
    printf("|____/ \\____|\\__\\____|_|_|_|\\___| |_| |_|\\____| \\_/ \\____|_|\\___|\n\n");

    t_game joueur1, joueur2, PlateauCache;
    int flotte1[9],flotte2[9]; //Points de vie des joueurs
    char choix;
    do{
        BLANC
        printf("\nFaites un choix:\n1. Jouer une partie contre une IA\n2. Charger une partie\n3. Aide\n4. Quitter\n\n>");
        scanf("%c",&choix);
        fflush(stdin);
        switch(choix)
        {
            case '1':
                VERTFONCE
                printf("\n\nCreation du jeu en cours...\nLes grilles ont ete generees aleatoirement !\n\n");
                init(&joueur1);
                initialisationFlotte(&joueur1,flotte1);
                init(&PlateauCache);
                init(&joueur2);
                initialisationFlotte(&PlateauCache,flotte2);
                initialisationFlotteIA(&PlateauCache, &joueur2);
                BLANC
                gameMenu(&joueur1,&joueur2, &PlateauCache, flotte1,flotte2);
                break;
            case '2':
                charge();
                break;
            case '3':
                aide();
                break;
        }
    }while(choix!='4');
    return 0;
}