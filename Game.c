//
// Created by Lorenzo on 29/11/2022.
//
#include "Game.h"
#include "AnsiAffichage.h"
#include "Navires.h"

void attaqueIA(t_game * b) {
    int x, y, X, Y;
    x = rand() % (MAX +1 -MIN)+MIN;
    y = rand() % (MAX +1 -MIN)+MIN;
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
void attaqueJoueur(t_game * b) {
    int x, y, X, Y;
    char lettre;
    printf("\nEntrez votre case de tire (x,y) :\n");
    scanf("%c %d", &lettre, &y);
    if(lettre == 'A'|| lettre == 'a'){
        x = 0;
    }
    if(lettre == 'B'|| lettre == 'b'){
        x = 1;
    }
    if(lettre == 'C'|| lettre == 'c'){
        x = 2;
    }
    if(lettre == 'D'|| lettre == 'd'){
        x = 3;
    }
    if(lettre == 'E'|| lettre == 'e'){
        x = 4;
    }
    if(lettre == 'F'|| lettre == 'f'){
        x = 5;
    }
    if(lettre == 'G'|| lettre == 'g'){
        x = 6;
    }
    if(lettre == 'H'|| lettre == 'j'){
        x = 7;
    }
    if(lettre == 'I'|| lettre == 'i'){
        x = 8;
    }
    if(lettre == 'J'|| lettre == 'J'){
        x = 9;
    }
    if(lettre == 'K'|| lettre == 'k'){
        x = 10;
    }
    if(lettre == 'L'|| lettre == 'l'){
        x = 11;
    }
    if(lettre == 'M'|| lettre == 'm'){
        x = 12;
    }
    if(lettre == 'N'|| lettre == 'n'){
        x = 13;
    }
    if(lettre == 'O'|| lettre == 'o'){
        x = 14;
    }

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
void eclairer(t_game * b) {
    int x, y, X, Y;
    char lettre;
    printf("\nEntrez votre case de tire (x,y) :\n");
    scanf("%c %d", &lettre, &y);
    if(lettre == 'A'|| lettre == 'a'){
        x = 0;
    }
    if(lettre == 'B'|| lettre == 'b'){
        x = 1;
    }
    if(lettre == 'C'|| lettre == 'c'){
        x = 2;
    }
    if(lettre == 'D'|| lettre == 'd'){
        x = 3;
    }
    if(lettre == 'E'|| lettre == 'e'){
        x = 4;
    }
    if(lettre == 'F'|| lettre == 'f'){
        x = 5;
    }
    if(lettre == 'G'|| lettre == 'g'){
        x = 6;
    }
    if(lettre == 'H'|| lettre == 'j'){
        x = 7;
    }
    if(lettre == 'I'|| lettre == 'i'){
        x = 8;
    }
    if(lettre == 'J'|| lettre == 'J'){
        x = 9;
    }
    if(lettre == 'K'|| lettre == 'k'){
        x = 10;
    }
    if(lettre == 'L'|| lettre == 'l'){
        x = 11;
    }
    if(lettre == 'M'|| lettre == 'm'){
        x = 12;
    }
    if(lettre == 'N'|| lettre == 'n'){
        x = 13;
    }
    if(lettre == 'O'|| lettre == 'o'){
        x = 14;
    }
    for(int i = 0; i<4; i++){
        X = ((x) * 2) + 1;
        x++;
            for(int j = 1; j<5; j++) {
                Y = ((y) * 3) + 1;
                y++;
                if(j==4){
                    y = y - 4;
                }
                if (b->board[X][Y] == 0) {
                    b->board[X][Y]=TIRE_DANS_VIDE;
                }
                if ((b->board[X][Y] == SYMBOLE_PORTEAVION) || (b->board[X][Y] == SYMBOLE_SOUSMARIN) ||
                    (b->board[X][Y] == SYMBOLE_CROISEUR) || (b->board[X][Y] == SYMBOLE_DESTROYEUR)) {
                    b->board[X][Y]=TIRE_TOUCHE;
                }
            }
    }

}


/// https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
void modVisible(){
//    if(GetAsyncKeyState(VK_SPACE)){
    if(GetAsyncKeyState(0x56)){     //0x56 = V
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
//  -Tricher()      // Touche V
// Break
// tourdeJeu++

int nbTour;
int touchePressed;
int nbBateau = 10; // Le nombre de bateau d'un joueur

void gameMenu(){
    t_game b;
    init(&b);
    initialisationFlotte(&b);
    char ch;

    printf("Veuillez selectionner une touche pour jouer :\n\t- T : Tirer\n\t- E : Eclairer\n\t- D : Deplacer\n\t- V : Visible\n");

    ch = getch();
    if(ch == 'T' || ch == 't'){        // T key -- Tirer
        AnsiAffichage(b);
        attaqueJoueur(&b);
    } if (ch == 'E' || ch == 'e'){     // E key -- Eclairer

    } if (ch =='D' || ch == 'd'){     // D key -- Deplacer
        MessageBoxA(NULL, "Salut",  NULL, 0);
    } if (ch == 'V' || ch == 'v'){     // V key -- Visible
        modVisible();
    }
    fflush(stdin);
//    do {
//
//    } while (nbBateau >= 0); // Faire tant que tout les bateaux d'un joueur ne sont pas détruits
}
