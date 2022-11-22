//
// Created by Mat Plat on 21/11/2022.
//
#include "header.h"
//DA = angle haut gauche
//AA = angle haut droit
//C0 = angle bas gauche
//D9 = angle bas droit
//C5 = croix
//B3 = trait vertical
//C4 = trait horizontal
//B4 = T penché a droite
//C1 = T a l'envers
//C2 = T
//C3 = T penché a gauche

void AnsiAffichage(){
    printf("%c",0xDA);
    printf("%c\n",0xAA);
    printf("%c",0xC0);
    printf("%c",0xD9);

}