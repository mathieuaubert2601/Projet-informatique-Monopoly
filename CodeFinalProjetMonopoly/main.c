#include "header.h"

int main()
{
    ///déclaration des variables
    int nombreDeJoueur,choixDuMenuPrincipal;
    joueur_t joueur1, joueur2, joueur3, joueur4, tableauDeJoueur[4] = {joueur1, joueur2, joueur3, joueur4};
    ///Ouverture de la console en plein écran
    pleinEcran();

    ///Introduction du début du jeu
    intro();

    ///Affichage et saisie dans le menu
    choixDuMenuPrincipal = menu(); //Affichage du menu
    choixmenu(choixDuMenuPrincipal, tableauDeJoueur, &nombreDeJoueur);


    return 0;
}
