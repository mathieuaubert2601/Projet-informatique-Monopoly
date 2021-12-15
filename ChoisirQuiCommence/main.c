#include <stdio.h>
#include <stdlib.h>
#include <time.h>

///Structure joueur
typedef struct joueur
{
    char nomJoueur[50] ;
/*  possessions[24];
	int  position;
	int  argent ;
	int tourPrison ;*/
	int numeroJoueur ;
/*	int libertePrison ;
	int nbProprietefam1;
	int nbProprietefam2;
	int nbProprietefam3;
	int nbProprietefam4;
	int doubleOuNon;*/

}joueur_t;

void choisirQuiCommence(joueur_t ordreJoueur[],joueur_t tabJoueur[], int nbrJoueur)
{
    ///Déclaration des variables
    int quiCommence = rand()%nbrJoueur + 1;


    for(int i = 0; i<nbrJoueur ; i++)
    {
        if(tabJoueur[i].numeroJoueur == quiCommence)
        {
            ordreJoueur[0] = tabJoueur[i];
        }
    }
    if(nbrJoueur == 2)
        {
            if(quiCommence == 1)
            {

                ordreJoueur[1] = tabJoueur[1];

                printf("La personne qui jouera apres %s est %s \n",ordreJoueur[0].nomJoueur , ordreJoueur[1].nomJoueur);
            }
            if(quiCommence == 2)
            {
                ordreJoueur[1] = tabJoueur[0];
                printf("La personne qui jouera apres %s est %s \n",ordreJoueur[0].nomJoueur, ordreJoueur[1].nomJoueur);
            }
        }
    if(nbrJoueur == 3)
    {
            if(quiCommence == 1)
            {

                ordreJoueur[1] = tabJoueur[1];
                ordreJoueur[2] = tabJoueur[2];

                printf("La personne qui jouera apres %s est %s puis %s \n",ordreJoueur[0].nomJoueur , ordreJoueur[1].nomJoueur, ordreJoueur[2].nomJoueur);
            }
            if(quiCommence == 2)
            {
                ordreJoueur[1] = tabJoueur[2];
                ordreJoueur[2] = tabJoueur[0];
                printf("La personne qui jouera apres %s est %s puis %s \n",ordreJoueur[0].nomJoueur , ordreJoueur[1].nomJoueur, ordreJoueur[2].nomJoueur);
            }
            if(quiCommence == 3)
            {
                ordreJoueur[1] = tabJoueur[0];
                ordreJoueur[2] = tabJoueur[1];
                printf("La personne qui jouera apres %s est %s puis %s \n",ordreJoueur[0].nomJoueur , ordreJoueur[1].nomJoueur, ordreJoueur[2].nomJoueur);
            }

    }
    if(nbrJoueur == 4)
    {
            if(quiCommence == 1)
            {

                ordreJoueur[1] = tabJoueur[1];
                ordreJoueur[2] = tabJoueur[2];
                ordreJoueur[3] = tabJoueur[3];

                printf("La personne qui jouera apres %s est %s puis %s et enfin %s\n",ordreJoueur[0].nomJoueur , ordreJoueur[1].nomJoueur, ordreJoueur[2].nomJoueur, ordreJoueur[3].nomJoueur);
                printf("Veuillez vous placer dans l'ordre dans le sens horaire \n");
            }
            if(quiCommence == 2)
            {
                ordreJoueur[1] = tabJoueur[2];
                ordreJoueur[2] = tabJoueur[3];
                ordreJoueur[3] = tabJoueur[0];
                printf("La personne qui jouera apres %s est %s puis %s et enfin %s\n",ordreJoueur[0].nomJoueur , ordreJoueur[1].nomJoueur, ordreJoueur[2].nomJoueur, ordreJoueur[3].nomJoueur);
                printf("Veuillez vous placer dans l'ordre dans le sens horaire \n");
            }
            if(quiCommence == 3)
            {
                ordreJoueur[1] = tabJoueur[3];
                ordreJoueur[2] = tabJoueur[0];
                ordreJoueur[3] = tabJoueur[1];
                printf("La personne qui jouera apres %s est %s puis %s et enfin %s\n",ordreJoueur[0].nomJoueur , ordreJoueur[1].nomJoueur, ordreJoueur[2].nomJoueur, ordreJoueur[3].nomJoueur);
                printf("Veuillez vous placer dans l'ordre dans le sens horaire \n");
            }
            if(quiCommence == 4)
            {
                ordreJoueur[1] = tabJoueur[0];
                ordreJoueur[2] = tabJoueur[1];
                ordreJoueur[3] = tabJoueur[2];
                printf("La personne qui jouera apres %s est %s puis %s et enfin %s\n",ordreJoueur[0].nomJoueur , ordreJoueur[1].nomJoueur, ordreJoueur[2].nomJoueur, ordreJoueur[3].nomJoueur);
                printf("Veuillez vous placer dans l'ordre dans le sens horaire \n");

            }

    }

}

int main()
{

    srand(time(NULL));
    joueur_t joueur1 = {"Mathieu",1};
    joueur_t joueur2 = {"Thibault",2};
    joueur_t joueur3 = {"Adrien",3};
    joueur_t joueur4 = {"Philippe",4};
    int nombreJoueur = 4;

    joueur_t tableau_Joueur[4] = {joueur1, joueur2, joueur3, joueur4};
    joueur_t ordreJeux[4];

    choisirQuiCommence(ordreJeux, tableau_Joueur, nombreJoueur);

    return 0;
}
