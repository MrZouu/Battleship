//
// Created by Lorenzo on 21/11/2022.
//

#include "Navires.h"
#include "AnsiAffichage.h"
#include "Plateau.h"
#include "Game.h"
int main()
{
    srand(time(NULL));
    t_game b;
    init(&b);
    initialisationFlotte(&b);
    AnsiAffichage(b);
    return 0;
}