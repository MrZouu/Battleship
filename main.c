//
// Created by Lorenzo on 21/11/2022.
//

#include "Navires.h"
#include "AnsiAffichage.h"

int main()
{
    t_game b;
    init(&b);
    AnsiAffichage(b);
    initialisationFlotte();
    return 0;
}