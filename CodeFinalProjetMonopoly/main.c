#include "header.h"

int main()
{
///déclaration des variables
    int choixDuMenuPrincipal,nombreDeJoueur, nbr,deNumeroUn, deNumeroDeux,sommeDesLance,positionDesJoueurs[4];
    joueur_t joueur1, joueur2, joueur3, joueur4, tableauDeJoueur[4] = {joueur1, joueur2, joueur3, joueur4};
    joueur_t ordreDePassageDesJoueurs[4];
    joueur1.numeroJoueur = 1;
    joueur2.numeroJoueur = 2;
    joueur3.numeroJoueur = 3;
    joueur4.numeroJoueur = 4;
    joueur1.doubleOuNon = 0;
    joueur2.doubleOuNon = 0;
    joueur3.doubleOuNon = 0;
    joueur4.doubleOuNon = 0;


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

    if(choixDuMenuPrincipal == 2)
    {
        ///Mise en place de l'ordre des joueurs
        srand(time(NULL));
        choisirQuiCommence(ordreDePassageDesJoueurs,tableauDeJoueur,nombreDeJoueur);

        ///Lancement de la partie
        for (int i=0;i<nombreDeJoueur;i++)
        {
            positionDesJoueurs[i]=0;
        }
        plateau(positionDesJoueurs,nombreDeJoueur);

        ///Lancement des tours
        for(int t=0 ;t<=nombreDeJoueur ;t++)
        {
            if(t==(nombreDeJoueur))
            {
                t=0;
            }
            gotoligcol(5,115);
            printf("C'est a %s de jouer !",ordreDePassageDesJoueurs[t].nomJoueur,ordreDePassageDesJoueurs[t].doubleOuNon);

            //Lancement des dés
            lanceDesGlobal(&deNumeroUn,&deNumeroDeux,&sommeDesLance,ordreDePassageDesJoueurs[t]);
            Sleep(1000);

            gotoligcol(21,115);
            printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
            fflush(stdin);
            getchar();

            //On efface toutes les données des dés
            for(int l=5 ; l<22 ;l++)
            {
                for(int c = 115 ; c<160 ; c++)
                {
                    gotoligcol(l,c);
                    printf(" ");
                }
            }
            plateau(positionDesJoueurs,nombreDeJoueur);
        }
    }




    return 0;
}
