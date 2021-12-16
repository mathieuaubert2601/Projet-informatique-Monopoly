#include <stdio.h>
#include <stdlib.h>

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
void sauvegardeJoueur(joueur_t joueurA)
{


    FILE* donneJoueur = fopen("fichiersSauvegarde/joueurA.bin", "wb+");
    if (donneJoueur == NULL)
    {
        printf("Erreur d'ouverture de fichier.");
        return 1;
    }

    fwrite(&joueurA, sizeof(joueur_t),1,donneJoueur);

    fclose(donneJoueur);
    donneJoueur = NULL;
}

void chargerJoueur(joueur_t* joueurAcharger)
{
    FILE* donneJoueur = fopen("fichiersSauvegarde/joueurA.bin", "rb");
    if (donneJoueur == NULL)
    {
        printf("Erreur d'ouverture de fichier.");
        return 1;
    }
    fread(joueurAcharger, sizeof(joueur_t),1,donneJoueur);
    fclose(donneJoueur);
    donneJoueur = NULL;
    printf("Le nom est %s", joueurAcharger->nomJoueur);
}
int main()
{
    joueur_t joueur1 = {"Mathieu",0,0,0,0,0,0,0,0,0,0,0};
    joueur_t joueur2;

    sauvegardeJoueur(joueur1);
    chargerJoueur(&joueur2);






    return 0;
}
