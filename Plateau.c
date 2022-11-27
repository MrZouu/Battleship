//
// Created by Lorenzo on 27/11/2022.
//

#include "Plateau.h"


void placement(t_game b)
{

}

void affecterC(t_croiseur C)
{
    //Affichage Caracteristiques meuble
    printf("Symbole: %c\n",C.symbole);
    printf("Taille: %d\n",C.taille);
    printf("posX: %d\n",C.pos_X);
    printf("posY: %d\n",C.pos_Y);
}

void FlotteC(t_croiseur * qt2)
{
    for(int i=0;i<nbC;i++)
    {
        printf("Croiseur [%d]:\n",i); //numéro meuble
        affecterC(qt2[i]);   //Appel afficher M en boucle
    }
}

void affecterPa(t_porteAv pA)
{
    //Affichage Caracteristiques meuble
    printf("Symbole: %c\n",pA.symbole);
    printf("Taille: %d\n",pA.taille);
    printf("posX: %d\n",pA.pos_X);
    printf("posY: %d\n",pA.pos_Y);
}