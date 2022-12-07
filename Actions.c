//
// Created by Lorenzo on 03/12/2022.
//

#include "Actions.h"
#include "Game.h"
#include "AnsiAffichage.h"
#include "Navires.h"


//Toutes les attaques que pourront faire les différents joueurs
void attaqueIA(t_game * b,int *tab) {
    ROUGEFONCE
    printf("Attaque de l'IA\n>");
    BLANC
    int X, Y;
    char Cnum;
    int num;
    X = ((CASEALEATOIRE) * 2) + 1; //Calcul pour afficher sur lignes
    Y = ((CASEALEATOIRE) * 3) + 1; //Calcul pour afficher sur colonnes
    if (b->board[X][Y] == 0) {
        BLEUFLUO
        printf("Plouf\n");
        BLANC
        b->board[X][Y]=TIR_DANS_VIDE;
        b->board[X][Y+1]=TIR_DANS_VIDE;
    }
    if((b->board[X][Y]) == SYMBOLE_PORTEAVION)
    {
        Cnum = b->board[X][Y+1];
        num =Cnum-48; //Reconvertir en entier
        tab[num]-=1; //Enlever point de vie
        b->board[X][Y]=TIR_TOUCHE;
        b->board[X][Y+1]=TIR_TOUCHE;
        if(tab[num]==0) //Si la valeur est vide ( toutes les cases touchées )
        {
            ROUGEFLUO
            printf("Porte-Avion %d coule\n", num);
            BLANC
        }
    }
    if((b->board[X][Y]) == SYMBOLE_CROISEUR)
    {
        Cnum = b->board[X][Y+1];
        num =Cnum-48; //Reconvertir en entier
        tab[num]-=1; //Enlever point de vie
        b->board[X][Y]=TIR_TOUCHE;
        b->board[X][Y+1]=TIR_TOUCHE;
        if(tab[num]==0) //Si la valeur est vide ( toutes les cases touchées )
        {
            ROUGEFLUO
            printf("Croiseur %d coule\n", num);
            BLANC
        }
    }
    if((b->board[X][Y]) == SYMBOLE_DESTROYER)
    {
        Cnum = b->board[X][Y+1];
        num =Cnum-48; //Reconvertir en entier
        tab[num]-=1; //Enlever point de vie
        b->board[X][Y]=TIR_TOUCHE;
        b->board[X][Y+1]=TIR_TOUCHE;
        if(tab[num]==0) //Si la valeur est vide ( toutes les cases touchées )
        {
            ROUGEFLUO
            printf("Destroyer %d coule\n", num);
            BLANC
        }
    }
    if((b->board[X][Y]) == SYMBOLE_SOUSMARIN)
    {
        Cnum = b->board[X][Y+1];
        num =Cnum-48; //Reconvertir en entier
        tab[num]-=1; //Enlever point de vie
        b->board[X][Y]=TIR_TOUCHE;
        b->board[X][Y+1]=TIR_TOUCHE;
        ROUGEFLUO
        printf("Sous marin %d coule\n", num);
        BLANC
    }
}

void attaqueJoueur(t_game * b,t_game *b1,int *tab2) {
    int x, y, X, Y;
    char lettre, Cnum;
    int num=0;
    BLEUFLUO
    printf("\nEntrez votre case de tir (Lettre,Chiffre) :\n>");
    BLANC
    scanf("%c %d", &lettre, &y);
    fflush(stdin);
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
    if(lettre == 'H'|| lettre == 'h'){
        x = 7;
    }
    if(lettre == 'I'|| lettre == 'i'){
        x = 8;
    }
    if(lettre == 'J'|| lettre == 'j'){
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

    X = ((x) * 2)+1; //Calcul pour afficher sur lignes
    Y = ((y) * 3)+1; //Calcul pour afficher sur colonnes

    if ((b->board[X][Y])==0) {
        BLEUFLUO
        printf("Plouf\n");
        BLANC
        b->board[X][Y]=TIR_DANS_VIDE;
        b->board[X][Y+1]=TIR_DANS_VIDE;
    }
    if((b->board[X][Y]) == SYMBOLE_PORTEAVION)
    {
        Cnum = b->board[X][Y+1];
        num =Cnum-48; //Reconvertir en entier
        tab2[num]-=1; //Enlever point de vie
        b->board[X][Y]=TIR_TOUCHE;
        b->board[X][Y+1]=TIR_TOUCHE;
        b1->board[X][Y]=0; //Remise a 0 plateaucache
        b1->board[X][Y+1]=0;
        if(tab2[num]==0) //Si la valeur est vide ( toutes les cases touchées )
        {
            ROUGEFLUO
            printf(">Porte-Avion %d coule\n", num);
            BLANC
        }
    }
    if((b->board[X][Y]) == SYMBOLE_CROISEUR)
    {
        Cnum = b->board[X][Y+1];
        num =Cnum-48; //Reconvertir en entier
        tab2[num]-=1; //Enlever point de vie
        b->board[X][Y]=TIR_TOUCHE;
        b->board[X][Y+1]=TIR_TOUCHE;
        if(tab2[num]==0) //Si la valeur est vide ( toutes les cases touchées )
        {
            ROUGEFLUO
            printf(">Croiseur %d coule\n", num);
            BLANC
        }
    }
    if((b->board[X][Y]) == SYMBOLE_DESTROYER)
    {
        Cnum = b->board[X][Y+1];
        num =Cnum-48; //Reconvertir en entier
        tab2[num]-=1; //Enlever point de vie
        b->board[X][Y]=TIR_TOUCHE;
        b->board[X][Y+1]=TIR_TOUCHE;
        if(tab2[num]==0) //Si la valeur est vide ( toutes les cases touchées )
        {
            ROUGEFLUO
            printf(">Destroyer %d coule\n", num);
            BLANC
        }
    }
    if((b->board[X][Y]) == SYMBOLE_SOUSMARIN)
    {
        Cnum = b->board[X][Y+1];
        num =Cnum-48; //Reconvertir en entier
        tab2[num]=0; //Enlever point de vie
        b->board[X][Y]=TIR_TOUCHE;
        b->board[X][Y+1]=TIR_TOUCHE;
        b1->board[X][Y]=0; //Remise a 0 plateaucache
        b1->board[X][Y+1]=0;
        ROUGEFLUO
        printf(">Sous marin %d coule\n", num);
        BLANC
    }
}

void eclairer(t_game * b, t_game * b1) {
    int x, y, X, Y;
    char lettre;
    BLEUFLUO
    printf("\nEntrez votre case de tir (Lettre,Numero) :\n>");
    BLANC
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
    if(lettre == 'J'|| lettre == 'j'){
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
            if (b->board[X][Y] == SYMBOLE_PORTEAVION){
                b1->board[X][Y]=SYMBOLE_PORTEAVION;
            }
            if(b->board[X][Y] == SYMBOLE_SOUSMARIN){
                b1->board[X][Y]=SYMBOLE_SOUSMARIN;
            }
            if(b->board[X][Y] == SYMBOLE_CROISEUR){
                b1->board[X][Y]=SYMBOLE_CROISEUR;
            }
            if(b->board[X][Y] == SYMBOLE_DESTROYER){
                b1->board[X][Y]=SYMBOLE_DESTROYER;
            }
            if(b->board[X][Y+1] == '0'){
                b1->board[X][Y+1]='0';
            }
            if(b->board[X][Y+1] == '1'){
                b1->board[X][Y+1]='1';
            }
            if(b->board[X][Y+1] == '2'){
                b1->board[X][Y+1]='2';
            }
            if(b->board[X][Y+1] == '3'){
                b1->board[X][Y+1]='3';
            }
            if(b->board[X][Y+1] == '4'){
                b1->board[X][Y+1]='4';
            }
            if(b->board[X][Y+1] == '5'){
                b1->board[X][Y+1]='5';
            }
            if(b->board[X][Y+1] == '6'){
                b1->board[X][Y+1]='6';
            }
            if(b->board[X][Y+1] == '7'){
                b1->board[X][Y+1]='7';
            }
            if(b->board[X][Y+1] == '8'){
                b1->board[X][Y+1]='8';
            }
            if(b->board[X][Y+1] == '9'){
                b1->board[X][Y+1]='9';
            }

        }
    }
}

void Cacher_eclairer(t_game * b, t_game * b1) { //CAST LE CHAR EN INT
    int x,y,X,Y;
    x=0;
    y=0;
    for(int i = 0; i<15; i++){
        X = ((x) * 2) + 1;
        x++;
        for(int j = 1; j<16; j++) {
            Y = (y * 3) + 1;
            y++;
            if(j==15){
                y = y - 15;
            }
            if (b1->board[X][Y] == SYMBOLE_PORTEAVION){
                b1->board[X][Y]=SYMBOLE_INVISIBLE;
            }
            if(b1->board[X][Y] == SYMBOLE_SOUSMARIN){
                b1->board[X][Y]=SYMBOLE_INVISIBLE;
            }
            if(b1->board[X][Y] == SYMBOLE_CROISEUR){
                b1->board[X][Y]=SYMBOLE_INVISIBLE;
            }
            if(b1->board[X][Y] == SYMBOLE_DESTROYER){
                b1->board[X][Y]=SYMBOLE_INVISIBLE;
            }
            if(b->board[X][Y+1] == '0'){
                b1->board[X][Y+1]=SYMBOLE_INVISIBLE;
            }
            if(b->board[X][Y+1] == '1'){
                b1->board[X][Y+1]=SYMBOLE_INVISIBLE;
            }
            if(b->board[X][Y+1] == '2'){
                b1->board[X][Y+1]=SYMBOLE_INVISIBLE;
            }
            if(b->board[X][Y+1] == '3'){
                b1->board[X][Y+1]=SYMBOLE_INVISIBLE;
            }
            if(b->board[X][Y+1] == '4'){
                b1->board[X][Y+1]=SYMBOLE_INVISIBLE;
            }
            if(b->board[X][Y+1] == '5'){
                b1->board[X][Y+1]=SYMBOLE_INVISIBLE;
            }
            if(b->board[X][Y+1] == '6'){
                b1->board[X][Y+1]=SYMBOLE_INVISIBLE;
            }
            if(b->board[X][Y+1] == '7'){
                b1->board[X][Y+1]=SYMBOLE_INVISIBLE;
            }
            if(b->board[X][Y+1] == '8'){
                b1->board[X][Y+1]=SYMBOLE_INVISIBLE;
            }
            if(b->board[X][Y+1] == '9'){
                b1->board[X][Y+1]=SYMBOLE_INVISIBLE;
            }
        }
    }
}