#include "header.h"

int main()
{
    ///d�claration des variables
    int choixDuMenuPrincipal,nombreDeJoueur, nbr ;
    joueur_t joueur1, joueur2, joueur3, joueur4,ordreDePassageDesJoueurs[4], tableauDeJoueur[4] = {joueur1, joueur2, joueur3, joueur4};
    ///Ouverture de la console en plein �cran
    pleinEcran();

    ///Introduction du d�but du jeu
    //intro();

    ///Affichage et saisie dans le menu
    choixDuMenuPrincipal = menu(); //Affichage du menu
    nbr = choixmenu(choixDuMenuPrincipal, tableauDeJoueur);

    ///Mise en place de l'ordre des joueurs
    choisirQuiCommence(ordreDePassageDesJoueurs,tableauDeJoueur,nombreDeJoueur);


    return 0;
}
