#include "header.h"

int main()
{
    ///déclaration des variables
    int choixDuMenuPrincipal,nombreDeJoueur, nbr,positionDesJoueurs[4];
    joueur_t joueur1, joueur2, joueur3, joueur4, tableauDeJoueur[4] = {joueur1, joueur2, joueur3, joueur4};
    joueur_t ordreDePassageDesJoueurs[4];
    joueur1.numeroJoueur = 1;
    joueur2.numeroJoueur = 2;
    joueur3.numeroJoueur = 3;
    joueur4.numeroJoueur = 4;

    char* retourAlaLigneTmp = NULL;

    ///Ouverture de la console en plein écran
    pleinEcran();

    ///Introduction du début du jeu
    //intro();

    ///Affichage et saisie dans le menu
    choixDuMenuPrincipal = menu(); //Affichage du menu
    nbr = choixmenu(choixDuMenuPrincipal, tableauDeJoueur);

    ///Actualisation du nombre de joueur
    nombreDeJoueur = nbr;

    ///Suppression du retour chariot à la fin des noms
    for(int i=0 ; i<nombreDeJoueur ; i++)
    {
         int j=0;
         while(tableauDeJoueur[i].nomJoueur[j] != '\n')
         {
             j++;
         }
         tableauDeJoueur[i].nomJoueur[j] = '\0';
    }

    ///Si l'utilisateur demande de Lancer une nouvelle partie
    ///Mise en place de l'ordre des joueurs
    srand(time(NULL));
    choisirQuiCommence(ordreDePassageDesJoueurs,tableauDeJoueur,nombreDeJoueur);

    ///Lancement de la partie
    for (int i=0;i<nombreDeJoueur;i++)
    {
        positionDesJoueurs[i]=0;
    }
    plateau(positionDesJoueurs,nombreDeJoueur);



    return 0;
}
