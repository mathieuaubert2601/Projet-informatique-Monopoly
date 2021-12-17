#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///Structure Joueur
typedef struct joueur
{
   char nomJoueur[20] ;
	int possessions[24];
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
//////////////////////////////////////////////////////////
///Sous programme pour sauvegarder le nombre de joueur ///
//////////////////////////////////////////////////////////
void sauvegardeNombreJoueur(int nombre_De_joueur)
{
    ///Ouverture et test d'ouverture du fichier
    FILE* nombreDeJoueur = fopen("fichiersSauvegarde/joueurA.bin", "wb+");
    if (nombreDeJoueur == NULL)
    {
        printf("Erreur d'ouverture de fichier.");
        return 1;
    }

    fwrite(&nombre_De_joueur, sizeof(int),1,nombreDeJoueur);

    ///Fermeture du fichier
    fclose(nombreDeJoueur);
    nombreDeJoueur = NULL;
}

//////////////////////////////////////////////////////////
/////Sous programme pour charger le nombre de joueur /////
//////////////////////////////////////////////////////////

void chargerNombreJoueur(int* nombre_De_joueur)
{
    ///Ouverture et test d'ouverture du fichier
    FILE* nombreDeJoueur = fopen("fichiersSauvegarde/joueurA.bin", "rb");
    if (nombreDeJoueur == NULL)
    {
        printf("Erreur d'ouverture de fichier.");
        return 1;
    }

    ///Char
    fread(nombre_De_joueur, sizeof(int),1,nombreDeJoueur);


    ///Fermeture du fichier
    fclose(nombreDeJoueur);
    nombreDeJoueur = NULL;


}


void sauvegardeJoueur(joueur_t joueurA)
{
    ///Ouverture et test d'ouverture du fichier
    FILE* donneJoueur = fopen("fichiersSauvegarde/joueurA.bin", "wb+");
    if (donneJoueur == NULL)
    {
        printf("Erreur d'ouverture de fichier.");
        return 1;
    }

    fwrite(&joueurA, sizeof(joueur_t),1,donneJoueur);

    ///Fermeture du fichier
    fclose(donneJoueur);
    donneJoueur = NULL;
}

void chargerJoueur(joueur_t* joueurAcharger)
{
    ///Ouverture et test d'ouverture du fichier
    FILE* donneJoueur = fopen("fichiersSauvegarde/joueurA.bin", "rb");
    if (donneJoueur == NULL)
    {
        printf("Erreur d'ouverture de fichier.");
        return 1;
    }

    ///Char
    fread(joueurAcharger, sizeof(joueur_t),1,donneJoueur);

    ///Fermeture du fichier
    fclose(donneJoueur);
    donneJoueur = NULL;


}


int main()
{
    joueur_t joueur1;
    strcpy(joueur1.nomJoueur,"Mathieu");
    for (int i = 0; i<24; i++)
    {
        joueur1.possessions[i] = 1;
    }
    joueur1.position = 5;
    joueur1.argent = 1500;
    joueur1.tourPrison = 0;
    joueur1.numeroJoueur = 3;
    joueur1.libertePrison = 2;
    joueur1.nbProprietefam1 = 2;
    joueur1.nbProprietefam2 = 6;
    joueur1.nbProprietefam3= 7;
    joueur1.nbProprietefam4 = 8;
    joueur1.doubleOuNon = 19;

    int nmrJoueur;

    joueur_t joueur2;

    chargerNombreJoueur(&nmrJoueur);
    printf("%d",nmrJoueur);


    return 0;
}
