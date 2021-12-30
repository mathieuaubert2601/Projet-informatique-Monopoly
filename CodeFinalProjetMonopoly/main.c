#include "header.h"

int main()
{
    ///déclaration des variables
    int nombreDeJoueur,choixDuMenuPrincipal;

    ///Ouverture de la console en plein écran
    pleinEcran();

    ///Introduction du début du jeu
    //intro();

    ///Affichage et saisie dans le menu
    choixDuMenuPrincipal = menu(); //Affichage du menu
    choixmenu(choixDuMenuPrincipal);


    return 0;
}
