//
// Created by Lorenzo on 27/11/2022.
//

#ifndef BATTLESHIP_PLATEAU_H
#define BATTLESHIP_PLATEAU_H

#include "Navires.h"
#include "AnsiAffichage.h"

#define SYMBOLE_PORTEAVION "P"
#define SYMBOLE_SOUSMARIN "S"
#define SYMBOLE_DESTROYEUR "D"
#define SYMBOLE_CROISEUR "C"


void affecterBateau(t_bateau * boat, t_game *b);

char getSymbolFromBateau(e_type type_bateau);

#endif //BATTLESHIP_PLATEAU_H
