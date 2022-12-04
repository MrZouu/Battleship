//
// Created by Lorenzo on 29/11/2022.
//
#include "Game.h"
#include "AnsiAffichage.h"
#include "Navires.h"
#include "Actions.h"

int gameMenu(t_game *joueur1, t_game *joueur2, t_game *PlateauCache, int *flotte1, int *flotte2){
    int nbNav=10,nbNavIA=10; //Verification victoire
    char ch;
    int nbUtilisation=4;
    ///Initialisation sans sauvegarde
    AnsiAffichage(joueur1);
    do{
        BLEUFLUO
        printf("Veuillez selectionner une touche pour jouer :"
                   "\n\t- T : Tirer\n\t- E : Eclairer (%d restant)\n\t- D : Deplacer\n\t- S : Sauvegarder\n\t- V : Visible\n\n\t- Echap : Quitter\n>",nbUtilisation);
        BLANC
        ch = getch();
        fflush(stdin);

        if (ch == 'T' || ch == 't') {        // T key -- Tirer
            //system("cls");
            AnsiAffichage(joueur1);
            AnsiAffichage(joueur2);
            attaqueJoueur(joueur2,PlateauCache,flotte2);
            attaqueIA(joueur1,flotte1);
            AnsiAffichage(joueur1);
            AnsiAffichage(joueur2);
        }
        if (ch == 'E' || ch == 'e') {     // E key -- Eclairer
            //system("cls");
            if(nbUtilisation>0)
            {
                AnsiAffichage(joueur2);
                eclairer(PlateauCache, joueur2); //on eclaire
                system("cls");
                AnsiAffichage(joueur2);
                printf("Vous venez de poser une fusee eclairante...\n\n");
                Sleep(3000); //On affiche 3s ce qui est apparu
                system("cls");
                Cacher_eclairer(PlateauCache, joueur2); //on cache
                nbUtilisation-=1;
            }else{
                JAUNE
                printf("\nVous ne pouvez plus utiliser de fusees eclairantes\n\n");
                BLANC
            }

        }
        if (ch == 'D' || ch == 'd') {     // D key -- Deplacer
            MessageBoxA(NULL, "Fonction deplacement", NULL, 0);
            fflush(stdin);
        }
        if (ch == 'S' || ch == 's') {     // S key -- Sauvegarde
            sauvegarde(joueur1,PlateauCache,flotte1,flotte2);
        }
        if (ch == 'V' || ch == 'v') {     // V key -- Visible
            modVisible(PlateauCache, joueur2);
            AnsiAffichage(joueur2);
        }

        for(int i=0;i<=9;i++)
        {   //Si une case est a 0, un navire a coulé, on enleve un bateau a notre total de bateaux
            if(flotte1[i]==0)
            {
                nbNav-=1;
            }
            if(flotte2[i]==0)
            {
                nbNavIA-=1;
            }
        }
        VERTCACAOIE
        printf("\nVous avez : %d Navires\nVotre adversaire a : %d Navires\n",nbNav,nbNavIA);
        BLANC
        if(nbNavIA==0)
        {   //Quand mon ennemi ne possede plus de bateaux
            MessageBoxA(NULL, "Felicitations ! Vous gagnez la bataille navale\n", NULL, 0);
            return 0;
        }
        if(nbNav==0)
        {   //Quand je n'ai plus de bateaux
            MessageBoxA(NULL, "Votre adversaire gagne la bataille navale...\n", NULL, 0);
            return 0;
        }
        nbNavIA=10;
        nbNav=10;
    }while(ch!=esc); //Echap pour sortir
    printf("Vous quittez la partie\n");
}

void modVisible(t_game * b, t_game * b1) {
    int X, Y;
    for(int i = 0; i<14; i++){
        X = ((i) * 2)+1;
        for(int j = 0; j<14; j++) {
            Y = ((j)* 3)+1;

            if(b->board[X][Y] == SYMBOLE_PORTEAVION){
                b1->board[X][Y]=SYMBOLE_PORTEAVION;
                b1->board[X][Y+1]=(b->board[X][Y+1]);
            }
            if(b->board[X][Y] == SYMBOLE_SOUSMARIN){
                b1->board[X][Y]=SYMBOLE_SOUSMARIN;
                b1->board[X][Y+1]=(b->board[X][Y+1]);
            }
            if(b->board[X][Y] == SYMBOLE_CROISEUR){
                b1->board[X][Y]=SYMBOLE_CROISEUR;
                b1->board[X][Y+1]=(b->board[X][Y+1]);
            }
            if(b->board[X][Y] == SYMBOLE_DESTROYER){
                b1->board[X][Y]=SYMBOLE_DESTROYER;
                b1->board[X][Y+1]=(b->board[X][Y+1]);
            }
        }
    }
}

void sauvegarde(t_game *joueur1, t_game *PlateauCache, int *tab, int *tab2)
{
    FILE* pf = fopen("sauvegarde.txt", "w");
    if (pf == NULL) {
        printf("Erreur d'ouverture de fichier.");
    }
    JAUNE
    printf("\n\nPartie sauvegardee !\n\n");
    BLANC
    for (int i = 0; i<15;i++)   //Tableau allié
    {
        for (int j = 0; j<15; j++){
            fprintf(pf,"%c",joueur1->board[(i*2)+1][(j*3)+1]);
            fprintf(pf,"%c",joueur1->board[(i*2)+1][(j*3)+2]);
        }
        fprintf(pf,"\n");
    }
    fprintf(pf,"\n");
    for (int i = 0; i < 15; i++)    //Tableau ennemi
    {
        for (int j = 0; j < 15; j++){
            fprintf(pf,"%c",PlateauCache->board[(i*2)+1][(j*3)+1]);
            fprintf(pf,"%c",PlateauCache->board[(i*2)+1][(j*3)+2]);
        }
        fprintf(pf,"\n");
    }
    for(int i=0;i<10;i++)   //Vies
    {
        fprintf(pf,"%d\n",tab[i]);
    }
    fprintf(pf,"\n");
    for(int i=0;i<10;i++) //Vies ennemi
    {
        fprintf(pf,"%d\n",tab2[i]);
    }
    fclose(pf);
}

void charge(){
    FILE *fichier;
    t_game joueur1, joueur2, PlateauCache;
    int flotte1[9],flotte2[9]; //Points de vie des joueurs
    init(&joueur1);
    init(&PlateauCache);
    init(&joueur2);
    JAUNE
    printf("\n\nChargement de la partie sauvegardee !\n\n");
    BLANC
    fichier=fopen("sauvegarde.txt","r");
    if(fichier==NULL){
        printf("\n Erreur ouverture \n ");
    }
    for (int i = 0; i<15;i++)   //Tableau allié
    {
        for (int j = 0; j<15; j++){
            joueur1.board[(i*2)+1][(j*3)+1] = fgetc(fichier);
            joueur1.board[(i*2)+1][(j*3)+2] = fgetc(fichier);
        }
        fprintf(fichier,"\n");
    }
    fprintf(fichier,"\n");
    for (int i = 0; i<15;i++)   //Tableau Ennemi
    {
        for (int j = 0; j<15; j++){
            PlateauCache.board[(i*2)+1][(j*3)+1] = fgetc(fichier);
            PlateauCache.board[(i*2)+1][(j*3)+2] = fgetc(fichier);
        }
        fprintf(fichier,"\n");
    }
    for(int i=0;i<10;i++) //Vies ennemi
    {
        fscanf(fichier,"%d\n",&flotte1[i]);
    }
    for(int j=0;j<10;j++) //Vies ennemi
    {
        fscanf(fichier,"%d\n",&flotte2[j]);
    }
    TURQUOISE
    for(int i=0;i<10;i++) //Vies ennemi
    {
        printf("%d",flotte1[i]);
    }
    printf("\n");
    for(int j=0;j<10;j++) //Vies ennemi
    {
        printf("%d",flotte2[j]);
    }
    BLANC
    printf("\n");
    fclose(fichier);
    gameMenu(&joueur1,&joueur2, &PlateauCache, flotte1,flotte2);
}

int aide(){
    int Aide;
    VERTFONCE
    printf("\n\tMenu aide\n\n");
    do {
        VERTFONCE
        printf("1- Caracteristiques du jeu\n2- Caracteristiques des navires\n3- Les actions d'un navire par tour de jeu et par joueur\n4- Quitter le menu aide\n");
        printf("\n>");
        BLANC
        scanf("%d", &Aide);

        switch (Aide) {
            case 1 :
                VIOLET2
                printf("\n1- Caracteristiques du jeu\n\n");
                VIOLET
                printf("Le joueur et l'ordinateur disposent chacun de deux grilles de 15*15 cases :\n"
                       "- Une grille numero 1 pour positionner et visualiser ses navires\n"
                       "- Une grille numero 2 pour visualiser les degats causes a l'adversaire\n"
                       "- Chaque joueur possede une flotte de 10 navires : 1 Porte-Avion, 2 croiseurs, 3 destroyers et 4 sous-marins\n\n");

                break;
            case 2 :
                VIOLET2
                printf("\n2- Caracteristiques des navires\n\n");
                VIOLET
                printf(("Le positionnement des navires :\n\n"
                        "En debut de jeu les navires sont positionnes aleatoirement et bien repartis dans la grille Numero 1 de chaque\n"
                        "joueur, humain et ordinateur.\n\n"
                        "La grille Numero 2 montre les coups joues et les degats infliges a l'adversaire, elle est donc vide au depart.\n"
                        "Les navires peuvent etre positionnes verticalement ou horizontalement sur la grille. Mais attention,\n"
                        "deux navires ne peuvent occuper la meme case.\n"
                        "C'est le joueur humain qui commence la partie.\n\n"));

                break;
            case 3:
                VIOLET2
                printf("\n3- Les actions d'un navire par tour de jeu et par joueur\n\n");
                VIOLET
                printf("1) Tirer. Le joueur tire en choisissant les coordonnees d'une case valide de l'adversaire.\n\n"
                       "2) Eclairer. Chaque joueur dispose de 4 fusees eclairantes. Le tir d une de ces fusees devoile un carre\n"
                       "de 4*4 cases dans la grille adverse a partir du coin haut et gauche dont on choisit les coordonnees.\n\n"
                       "3) Deplacer un de ses propres navires (grille 1) d une seule case sauf s'il est coule (un navire touche\n"
                       "peut se deplacer) en choisissant n importe laquelle des cases occupees par le navire concerne. Un\n"
                       "navire ne peut pas se deplacer en diagonale. Il ne peut se deplacer que dans sa direction logique,\n"
                       "horizontale ou verticale, et d'une seule case a la fois, et le joueur precisera le point cardinal de\n"
                       "deplacement.\n\n");
                break;
            case 4 :
                VIOLET2
                printf("Vous quittez le menu aide\n\n");
                return 0;
        }
    }while (1);
}