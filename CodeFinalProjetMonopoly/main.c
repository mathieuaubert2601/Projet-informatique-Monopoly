#include "header.h"

int main()
{
    ///d�claration des variables
    int nombreDeJoueur,choixDuMenuPrincipal;

    ///Ouverture de la console en plein �cran
    pleinEcran();

    ///Introduction du d�but du jeu
    //intro();

    ///Affichage et saisie dans le menu
    choixDuMenuPrincipal = menu(); //Affichage du menu
    choixmenu(choixDuMenuPrincipal);


    return 0;
}
