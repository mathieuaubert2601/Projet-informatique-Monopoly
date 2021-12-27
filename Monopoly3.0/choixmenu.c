#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "header.h"


int choixmenu(int choixmenu)//va traiter les choix du menu de la valeur deja blindée
{
    int a;
    switch(choixmenu)
    {
    case 1:
        {
            //prog reprendre partie
            break;
        }
    case 2:
        {
            //lancement partie choix du nombre de joueurs
            int pos[4];
            joueur_t joueur1, joueur2, joueur3, joueur4, tab_Joueur[4] = {joueur1, joueur2, joueur3, joueur4};
            int nombreJoueur;

            creer_nouveau_joueur(tab_Joueur, &nombreJoueur);

            for (int i=0;i<nombreJoueur;i++)
                {
                    pos[i]=0;
                }
            plateau(pos,nombreJoueur);
            break;
        }
    case 3:
        {
            //sauvegarder partie
            break;
        }
    case 4:
        {
            credits();//credits

            break;
        }
    case 5:
        {
            printf("Vous avez bien appuye sur quitter.\n");
            printf("Sauvegarde en cours");
            //prog sauvegarder
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".\n");
            Sleep(1000);
            printf("Partie sauvegardee, au revoir Padawan.\n");
            Sleep(2000);
            return(0);
        }
    case 6:
        {
            regle_jeu();
            break;
        }

    }

}
