//
// Created by Lorenzo on 29/11/2022.
//

#include "Game.h"

void attaque(t_game * b) {
    int x, y, X, Y;
    printf("Entrez votre case de tire (x,y) :");
    scanf("%d %d", &x, &y);
    X = ((x) * 2) + 1; //Calcul pour afficher sur lignes
    Y = ((y) * 3) + 1; //Calcul pour afficher sur colonnes
    if (b->board[X][Y] == 0) {
        printf("Coule");
    }
    if ((b->board[X][Y] == SYMBOLE_PORTEAVION) || (b->board[X][Y] == SYMBOLE_SOUSMARIN) ||
        (b->board[X][Y] == SYMBOLE_CROISEUR) || (b->board[X][Y] == SYMBOLE_DESTROYEUR)) {
        printf("Touche");
    }
}



void modVisible(){
    if(GetAsyncKeyState(VK_SPACE)){
        printf("Key appuye !");
    }
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
// Break
// tourdeJeu++
// Log dans un fichier text
