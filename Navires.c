//
// Created by Lorenzo on 27/11/2022.
//
#include "Navires.h"
#include "Plateau.h"
#include "AnsiAffichage.h"

//Définir caractéristiques navire, position aléatoire, initialisation
//Navires a poser sur lignes impaires et colonnes pas multiples de 3
void initialisationFlotte(t_game * b)
{
    t_bateau nav[10];
    SaisieBateaux(&nav);
    //AfficherBateaux(nav);
    affecterBateau(nav,b);
}


void SaisieBateaux(t_bateau * boat)
{
        for(int i=0;i<10;i++)
        {
            if(i==0)
            {
                boat[i].type_bateau=nbPa;
                boat[i].orientation=rand()&1;
                boat[i].size=7;
                boat[i].position.x=rand() % (MAX +1 -MIN)+MIN;
                boat[i].position.y=rand() % (MAX +1 -MIN)+MIN;
            }
            if(i>=1&&i<=2)
            {
                boat[i].type_bateau=nbC;
                boat[i].orientation=rand()&1;
                boat[i].size=5;
                boat[i].position.x=rand() % (MAX +1 -MIN)+MIN;
                boat[i].position.y=rand() % (MAX +1 -MIN)+MIN;
            }
            if(i>=3&&i<=5)
            {
                boat[i].type_bateau=nbD;
                boat[i].orientation=rand()&1;
                boat[i].size=3;
                boat[i].position.x=rand() % (MAX +1 -MIN)+MIN;
                boat[i].position.y=rand() % (MAX +1 -MIN)+MIN;
            }
            if(i>=6&&i<=9)
            {
                boat[i].type_bateau=nbSM;
                boat[i].orientation=rand()&1;
                boat[i].size=1;
                boat[i].position.x=rand() % (MAX +1 -MIN)+MIN;
                boat[i].position.y=rand() % (MAX +1 -MIN)+MIN;
            }
        }
}

void AfficherBateaux(t_bateau * boat)
{
    for(int i=0;i<10;i++)
    {
        printf("VAL [%d] %d\n", i, boat[i].type_bateau);
        printf("VAL [%d] %d\n", i, boat[i].orientation);
        printf("VAL [%d] %d\n", i, boat[i].position.x);
        printf("VAL [%d] %d\n", i, boat[i].position.y);
    }
}


