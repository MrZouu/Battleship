//
// Created by Lorenzo on 27/11/2022.
//
#include "Navires.h"
#include "Plateau.h"
#include "AnsiAffichage.h"

//Définir caractéristiques navire, position aléatoire, initialisation
//Navires a poser sur lignes impaires et colonnes pas multiples de 3
void initialisationFlotte(t_game * b,int *tab)
{
    t_bateau boat[10];
    SaisieBateaux(boat);
    pointDeVie(tab);
    affecterBateau(boat,b);
}

void initialisationFlotteIA(t_game * b, t_game * b1)
{
    t_bateau boat[10];
    affecterBateauIA(b,b1);
}

void SaisieBateaux(t_bateau * boat)
{
    for(int i=0;i<10;i++)
    {
        if(i==0)
        {
            boat[i].type_bateau=nbPa;
            boat[i].orientation=rand()&1;
            TAILLEBATEAU=7;
        }
        if(i>=1&&i<=2)
        {
            boat[i].type_bateau=nbC;
            boat[i].orientation=rand()&1;
            TAILLEBATEAU=5;

        }
        if(i>=3&&i<=5)
        {
            boat[i].type_bateau=nbD;
            boat[i].orientation=rand()&1;
            TAILLEBATEAU=3;

        }
        if(i>=6&&i<=9)
        {
            boat[i].type_bateau=nbSM;
            boat[i].orientation=rand()&1;
            TAILLEBATEAU=1;
        }
    }
}

void pointDeVie(int *tab)
{
    for(int i=0;i<10;i++)
    {
        if(i==0)
        {
            tab[i]=7;
        }
        if(i>=1&&i<=2)
        {
            tab[i]=5;
        }
        if(i>=3&&i<=5)
        {
            tab[i]=3;
        }
        if(i>=6&&i<=9)
        {
            tab[i]=1;
        }
    }
}