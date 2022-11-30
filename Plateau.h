//
// Created by Lorenzo on 27/11/2022.
//

#ifndef BATTLESHIP_PLATEAU_H
#define BATTLESHIP_PLATEAU_H

#include "Navires.h"
#include "AnsiAffichage.h"

#define SYMBOLE_PORTEAVION 'P'
#define SYMBOLE_SOUSMARIN 'S'
#define SYMBOLE_DESTROYEUR 'D'
#define SYMBOLE_CROISEUR 'C'

#define NUMEROBATEAU i+48

#define TESTHORIZONTAL Y+(k*3)
#define AFFICHAGEHORIZONTAL Y+(j*3)
#define H_CASENUMERO Y+(j*3)+1


void affecterBateau(t_bateau * boat, t_game *b);

char getSymbolFromBateau(t_bateau boat);

#endif //BATTLESHIP_PLATEAU_H
