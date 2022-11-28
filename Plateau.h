//
// Created by Lorenzo on 27/11/2022.
//

#ifndef BATTLESHIP_PLATEAU_H
#define BATTLESHIP_PLATEAU_H

#include "Navires.h"
#include "AnsiAffichage.h"

void affecterPorteAv(t_porteAv * qt1, t_game * b);
void affecterCroiseur(t_croiseur * qt2, t_game * b);
void affecterDestroyer(t_destroy * qt3, t_game * b);
void affecterSousMarin(t_sousMarin * qt4, t_game * b);

#endif //BATTLESHIP_PLATEAU_H
