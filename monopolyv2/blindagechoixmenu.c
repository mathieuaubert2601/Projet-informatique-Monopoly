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
            plateau();
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

    }

}
