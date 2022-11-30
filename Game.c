//
// Created by Lorenzo on 29/11/2022.
//
#include "Game.h"
#include "AnsiAffichage.h"
#include "Navires.h"

void attaque(t_game * b) {
    int x, y, X, Y;
    printf("\nEntrez votre case de tir (Ligne,Colonne) :\n");
    scanf("%d %d", &x, &y);
    X = ((x) * 2) + 1; //Calcul pour afficher sur lignes
    Y = ((y) * 3) + 1; //Calcul pour afficher sur colonnes
    if (b->board[X][Y] == 0) {
        printf("Plouf\n");
        b->board[X][Y]=TIRE_DANS_VIDE;
    }
    if ((b->board[X][Y] == SYMBOLE_PORTEAVION) || (b->board[X][Y] == SYMBOLE_SOUSMARIN) ||
        (b->board[X][Y] == SYMBOLE_CROISEUR) || (b->board[X][Y] == SYMBOLE_DESTROYEUR)) {
        printf("Touche\n");
        b->board[X][Y]=TIRE_TOUCHE;
    }
}

void modVisible(){
    char ch;
    ch = getch();

    if(ch == 'V' || ch == 'V'){
        printf("Key appuye !");
    }
    MessageBoxA(NULL, "Salut",  NULL, 0);
}

void gameMenu(t_game b){
    //init(&b);
    //initialisationFlotte(&b);
    char ch;

    printf("Veuillez selectionner une touche pour jouer :\n\t- T : Tirer\n\t- E : Eclairer\n\t- D : Deplacer\n\t- V : Visible\n");

    ch = getch();
    if(ch == 'T' || ch == 't'){        // T key -- Tirer
        AnsiAffichage(b);
        attaque(&b);
    } if (ch == 'E' || ch == 'e'){     // E key -- Eclairer

    } if (ch =='D' || ch == 'd'){     // D key -- Deplacer
    } if (ch == 'V' || ch == 'v'){     // V key -- Visible
        modVisible();
    }
    fflush(stdin);
//    do {
//
//    } while (nbBateau >= 0); // Faire tant que tout les bateaux d'un joueur ne sont pas détruits
}

/*
    void keyPressed() {


        if (key == CODED){
            if (keyCode == LEFT)   x  = x - 1;
            if (keyCode == RIGHT)  x = x + 1;
            if (keyCode == UP)     y = y - 1;
            if (keyCode == DOWN)   y = y + 1;
        }
        printf("%d\n");
}*/


/// int tourDeJeu --> ++ quand les 2 joueurs ont joué

// void game()
// switch:
//  -Tirer()        // Touche T
//  -Eclairer()     // Touche E
//  -Déplacer()     // Touche D
//  -Tricher()      // Touche V
// Break
// tourdeJeu++




