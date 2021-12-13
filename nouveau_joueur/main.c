#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct joueur
{
    char nomJoueur[50] ;
	possessions[24];
	int  position;
	int  argent ;
	int tourPrison ;
	int numeroJoueur ;
	int libertePrison ;
	int nbProprietefam1;
	int nbProprietefam2;
	int nbProprietefam3;
	int nbProprietefam4;
	int doubleOuNon;

}joueur_t;

void creer_nouveau_joueur(joueur_t tab_joueur[], int* nombre_joueur)
{
    ///Déclaration des variables
    int choix = 0, blindage1 = 0 ;
    char nom_utilisateur[50];

    ///Demande du nombre de joueur
    do
    {
        printf("Combien de joueur ?\n");
        fflush(stdin);
        scanf("%d", &choix);
    }while(choix<=1 || choix >4);

    ///On définit le nombre de joueur
    *nombre_joueur = choix;

    ///Demande de saisie du nom d'utilisateur :

    for(int i=0; i<choix; i++)
    {
    //Blindage pour les espaces
        do{
            printf("Entrez un nom d'utilisateur pour le joueur %d (sans espace) :\n",i+1);
            fflush(stdin);
            fgets(nom_utilisateur, 50, stdin);
        }while(strchr(nom_utilisateur, ' ') != NULL);

        strcpy(tab_joueur[i].nomJoueur , nom_utilisateur);
    }
}



int main()
{
    joueur_t joueur1, joueur2, joueur3, joueur4, tab_Joueur[4] = {joueur1, joueur2, joueur3, joueur4};
    int nombreJoueur;

    creer_nouveau_joueur(tab_Joueur, &nombreJoueur);

    return 0;
}
