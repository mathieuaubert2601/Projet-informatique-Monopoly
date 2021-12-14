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
        if(tabJoueur[i].nomJoueur == quiCommence)
        {
            ordreJoueur[0] = tabJoueur[i];
        }
    }
    srand(time(NULL));
    do
    {
        int aLaGauche;
        printf("Qui est le joueur à la gauche de joueur %d :\n-%s : 1\n-%s : 2",quiCommence);
        fflush(stdin);
        scanf("%d",&aLaGauche);
    }while(aLaGauche == quiCommence);

}

int main()
{

    joueur_t joueur1 = {"Mathieu",1};
    joueur_t joueur2 = {"Thibault",2};
    joueur_t joueur3 = {"Adrien",3};
    joueur_t joueur4 = {"Philippe",4};
    int nombreJoueur = 4;

    joueur_t tableau_Joueur[4] = {joueur1, joueur2, joueur3, joueur4};
    return 0;
}
