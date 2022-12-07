//
// Created by Lorenzo on 27/11/2022.
//

#ifndef BATTLESHIP_PLATEAU_H
#define BATTLESHIP_PLATEAU_H

#include "Navires.h"
#include "AnsiAffichage.h"

#define SYMBOLE_PORTEAVION 'P'
#define SYMBOLE_SOUSMARIN 'S'
#define SYMBOLE_DESTROYER 'D'
#define SYMBOLE_CROISEUR 'C'
#define SYMBOLE_INVISIBLE '  '

#define NUMEROBATEAU i+48 //valeur ascii pour numero

#define TESTHORIZONTAL Y+(k*3)
#define TESTVERTICAL X+(k*2)
#define AFFICHAGEHORIZONTAL Y+(j*3)
#define AFFICHAGEVERTICAL X+(j*2)
#define H_CASENUMERO Y+(j*3)+1
#define V_CASENUMERO Y+1


void affecterBateau(t_bateau *boat, t_game *b);

char getSymbolFromBateau(t_bateau boat);

void affecterBateauIA(t_game *b, t_game * b1);

#endif //BATTLESHIP_PLATEAU_H
