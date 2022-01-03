#include "header.h"

void choisirQuiCommence(joueur_t ordreJoueur[],joueur_t tabJoueur[], int nbrJoueur)
{
    ///Déclaration des variables
    int quiCommence = rand()%nbrJoueur + 1;

    if(nbrJoueur == 2)
    {
        if(quiCommence == 1)
        {
            memcpy ( &ordreJoueur[0], &tabJoueur[0], sizeof(joueur_t) );
            memcpy ( &ordreJoueur[1], &tabJoueur[1], sizeof(joueur_t) );

            printf("La personne qui jouera apres %s est %s\n",ordreJoueur[0].nomJoueur, ordreJoueur[1].nomJoueur);
            printf("Veuillez vous placer dans l'ordre dans le sens horaire \n");
        }
        if(quiCommence == 2)
        {
            memcpy ( &ordreJoueur[0], &tabJoueur[1], sizeof(joueur_t) );
            memcpy ( &ordreJoueur[1], &tabJoueur[0], sizeof(joueur_t) );
            printf("La personne qui jouera apres %s est %s\n",ordreJoueur[0].nomJoueur, ordreJoueur[1].nomJoueur);
            printf("Veuillez vous placer dans l'ordre dans le sens horaire \n");
        }
    }
    if(nbrJoueur == 3)
    {
        if(quiCommence == 1)
        {
            ordreJoueur[0] = tabJoueur[0];
            ordreJoueur[1] = tabJoueur[1];
            ordreJoueur[2] = tabJoueur[2];

            printf("La personne qui jouera apres %s est %s puis %s \n",ordreJoueur[0].nomJoueur, ordreJoueur[1].nomJoueur, ordreJoueur[2].nomJoueur);
            printf("Veuillez vous placer dans l'ordre dans le sens horaire \n");
        }
        if(quiCommence == 2)
        {
            ordreJoueur[0] = tabJoueur[1];
            ordreJoueur[1] = tabJoueur[2];
            ordreJoueur[2] = tabJoueur[0];
            printf("La personne qui jouera apres %s est %s puis %s \n",ordreJoueur[0].nomJoueur, ordreJoueur[1].nomJoueur, ordreJoueur[2].nomJoueur);
            printf("Veuillez vous placer dans l'ordre dans le sens horaire \n");
        }
        if(quiCommence == 3)
        {
            ordreJoueur[0] = tabJoueur[2];
            ordreJoueur[1] = tabJoueur[0];
            ordreJoueur[2] = tabJoueur[1];
            printf("La personne qui jouera apres %s est %s puis %s \n",ordreJoueur[0].nomJoueur, ordreJoueur[1].nomJoueur, ordreJoueur[2].nomJoueur);
            printf("Veuillez vous placer dans l'ordre dans le sens horaire \n");
        }

    }
    if(nbrJoueur == 4)
    {
        if(quiCommence == 1)
        {
            ordreJoueur[0] = tabJoueur[0];
            ordreJoueur[1] = tabJoueur[1];
            ordreJoueur[2] = tabJoueur[2];
            ordreJoueur[3] = tabJoueur[3];

            printf("La personne qui jouera apres %s est %s puis %s et enfin %s\n",ordreJoueur[0].nomJoueur, ordreJoueur[1].nomJoueur, ordreJoueur[2].nomJoueur, ordreJoueur[3].nomJoueur);
            printf("Veuillez vous placer dans l'ordre dans le sens horaire \n");
        }
        if(quiCommence == 2)
        {
            ordreJoueur[0] = tabJoueur[1];
            ordreJoueur[1] = tabJoueur[2];
            ordreJoueur[2] = tabJoueur[3];
            ordreJoueur[3] = tabJoueur[0];
            printf("La personne qui jouera apres %s est %s puis %s et enfin %s\n",ordreJoueur[0].nomJoueur, ordreJoueur[1].nomJoueur, ordreJoueur[2].nomJoueur, ordreJoueur[3].nomJoueur);
            printf("Veuillez vous placer dans l'ordre dans le sens horaire \n");
        }
        if(quiCommence == 3)
        {
            ordreJoueur[0] = tabJoueur[2];
            ordreJoueur[1] = tabJoueur[3];
            ordreJoueur[2] = tabJoueur[0];
            ordreJoueur[3] = tabJoueur[1];
            printf("La personne qui jouera apres %s est %s puis %s et enfin %s\n",ordreJoueur[0].nomJoueur, ordreJoueur[1].nomJoueur, ordreJoueur[2].nomJoueur, ordreJoueur[3].nomJoueur);
            printf("Veuillez vous placer dans l'ordre dans le sens horaire \n");
        }
        if(quiCommence == 4)
        {
            ordreJoueur[0] = tabJoueur[3];
            ordreJoueur[1] = tabJoueur[0];
            ordreJoueur[2] = tabJoueur[1];
            ordreJoueur[3] = tabJoueur[2];
            printf("La personne qui jouera apres %s est %s puis %s et enfin %s\n",ordreJoueur[0].nomJoueur, ordreJoueur[1].nomJoueur, ordreJoueur[2].nomJoueur, ordreJoueur[3].nomJoueur);
            printf("Veuillez vous placer dans l'ordre dans le sens horaire \n");

        }

    }

    Sleep(1000);
    printf("Appuyer sur Entrer pour continuer ");
    getchar();
    system("cls");



}
