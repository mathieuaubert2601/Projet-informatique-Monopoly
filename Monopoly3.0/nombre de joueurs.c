#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "header.h"

void creer_nouveau_joueur(joueur_t tab_joueur[], int* nombre_joueur)
{
    ///Déclaration des variables
    int choix = 0, blindage1 = 0 ;
    char nom_utilisateur[50];

    ///Demande du nombre de joueur
    do
    {
        printf("Combien de joueur ?\n");
        fflush(stdin);
        scanf("%d", &choix);
    }while(choix<=1 || choix >4);

    ///On définit le nombre de joueur
    *nombre_joueur = choix;

    ///Demande de saisie du nom d'utilisateur :

    for(int i=0; i<choix; i++)
    {
    //Blindage pour les espaces
        do{
            printf("Entrez un nom d'utilisateur pour le joueur %d (sans espace) :\n",i+1);
            fflush(stdin);
            fgets(nom_utilisateur, 50, stdin);
        }while(strchr(nom_utilisateur, ' ') != NULL);

        strcpy(tab_joueur[i].nomJoueur , nom_utilisateur);
    }
}
