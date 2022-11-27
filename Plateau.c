//
// Created by Lorenzo on 27/11/2022.
//

#include "Plateau.h"
#include "AnsiAffichage.h"

void placement(t_game b)
{

}

void affecterC(t_croiseur C)
{

    //Affichage Caracteristiques meuble
    printf("Symbole: %c\n",C.symbole);
    printf("Taille: %d\n",C.taille);

}

void FlotteC(t_croiseur * qt2)
{
    for(int i=0;i<nbC;i++)
    {
        printf("Croiseur [%d]:\n",i); //numéro meuble
        affecterC(qt2[i]);   //Appel afficher M en boucle
    }
}

void affecterPa(t_game * b)
{
    /*t_porteAv pA;
    printf("%d\n",pA.pos_X);*/
    //b->board[pA.pos_X][pA.pos_Y]='P';
    /*printf("Symbole: %c\n",pA.symbole);
    printf("Taille: %d\n",pA.taille);
    printf("posX: %d\n",pA.pos_X);
    printf("posY: %d\n",pA.pos_Y);*/
}