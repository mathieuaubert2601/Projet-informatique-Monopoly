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

//////////////////////////////////////////////////////////
////////Sous programme pour saubegarder 2 de joueurs /////
//////////////////////////////////////////////////////////

void sauvegardeDeuxJoueur(joueur_t joueurA, joueur_t joueurB)
{
    ///Ouverture et test d'ouverture du fichier
    FILE* donneJoueur = fopen("fichiersSauvegarde/joueurA.bin", "wb+");
    if (donneJoueur == NULL)
    {
        printf("Erreur d'ouverture de fichier.");
        return 1;
    }

    fwrite(&joueurA, sizeof(joueur_t),1,donneJoueur);
    fwrite(&joueurB, sizeof(joueur_t),1,donneJoueur);

    ///Fermeture du fichier
    fclose(donneJoueur);
    donneJoueur = NULL;
}

//////////////////////////////////////////////////////////
////////Sous programme pour charger 2 de joueurs /////////
//////////////////////////////////////////////////////////
void chargerDeuxJoueur(joueur_t* joueurAchargerA, joueur_t* joueurAchargerB)
{
    ///Ouverture et test d'ouverture du fichier
    FILE* donneJoueur = fopen("fichiersSauvegarde/joueurA.bin", "rb");
    if (donneJoueur == NULL)
    {
        printf("Erreur d'ouverture de fichier.");
        return 1;
    }

    ///Charger
    fread(joueurAchargerA, sizeof(joueur_t),1,donneJoueur);
    fread(joueurAchargerB, sizeof(joueur_t),1,donneJoueur);

    ///Fermeture du fichier
    fclose(donneJoueur);
    donneJoueur = NULL;


}

//////////////////////////////////////////////////////////
////////Sous programme pour saubegarder 3 de joueurs /////
//////////////////////////////////////////////////////////

void sauvegardeTroisJoueur(joueur_t joueurA, joueur_t joueurB, joueur_t joueurC)
{
    ///Ouverture et test d'ouverture du fichier
    FILE* donneJoueur = fopen("fichiersSauvegarde/joueurA.bin", "wb+");
    if (donneJoueur == NULL)
    {
        printf("Erreur d'ouverture de fichier.");
        return 1;
    }

    fwrite(&joueurA, sizeof(joueur_t),1,donneJoueur);
    fwrite(&joueurB, sizeof(joueur_t),1,donneJoueur);
    fwrite(&joueurC, sizeof(joueur_t),1,donneJoueur);

    ///Fermeture du fichier
    fclose(donneJoueur);
    donneJoueur = NULL;
}

//////////////////////////////////////////////////////////
////////Sous programme pour charger 3 de joueurs /////////
//////////////////////////////////////////////////////////
void chargerTroisJoueur(joueur_t* joueurAchargerA, joueur_t* joueurAchargerB, joueur_t* joueurAchargerC)
{
    ///Ouverture et test d'ouverture du fichier
    FILE* donneJoueur = fopen("fichiersSauvegarde/joueurA.bin", "rb");
    if (donneJoueur == NULL)
    {
        printf("Erreur d'ouverture de fichier.");
        return 1;
    }

    ///Charger
    fread(joueurAchargerA, sizeof(joueur_t),1,donneJoueur);
    fread(joueurAchargerB, sizeof(joueur_t),1,donneJoueur);
    fread(joueurAchargerC, sizeof(joueur_t),1,donneJoueur);

    ///Fermeture du fichier
    fclose(donneJoueur);
    donneJoueur = NULL;


}

//////////////////////////////////////////////////////////
////////Sous programme pour saubegarder 4 de joueurs /////
//////////////////////////////////////////////////////////

void sauvegardeQuatreJoueur(joueur_t joueurA, joueur_t joueurB, joueur_t joueurC, joueur_t joueurD)
{
    ///Ouverture et test d'ouverture du fichier
    FILE* donneJoueur = fopen("fichiersSauvegarde/joueurA.bin", "wb+");
    if (donneJoueur == NULL)
    {
        printf("Erreur d'ouverture de fichier.");
        return 1;
    }

    fwrite(&joueurA, sizeof(joueur_t),1,donneJoueur);
    fwrite(&joueurB, sizeof(joueur_t),1,donneJoueur);
    fwrite(&joueurC, sizeof(joueur_t),1,donneJoueur);
    fwrite(&joueurD, sizeof(joueur_t),1,donneJoueur);

    ///Fermeture du fichier
    fclose(donneJoueur);
    donneJoueur = NULL;
}

//////////////////////////////////////////////////////////
////////Sous programme pour charger 4 de joueurs /////////
//////////////////////////////////////////////////////////
void chargerQuatreJoueur(joueur_t* joueurAchargerA, joueur_t* joueurAchargerB, joueur_t* joueurAchargerC, joueur_t* joueurAchargerD )
{
    ///Ouverture et test d'ouverture du fichier
    FILE* donneJoueur = fopen("fichiersSauvegarde/joueurA.bin", "rb");
    if (donneJoueur == NULL)
    {
        printf("Erreur d'ouverture de fichier.");
        return 1;
    }

    ///Charger
    fread(joueurAchargerA, sizeof(joueur_t),1,donneJoueur);
    fread(joueurAchargerB, sizeof(joueur_t),1,donneJoueur);
    fread(joueurAchargerC, sizeof(joueur_t),1,donneJoueur);
    fread(joueurAchargerD, sizeof(joueur_t),1,donneJoueur);

    ///Fermeture du fichier
    fclose(donneJoueur);
    donneJoueur = NULL;


}

//////////////////////////////////////////////////////////
/////////////Sous programme sauvegarde global ////////////
//////////////////////////////////////////////////////////
void sauvegardeGlobale(int nombreDeJoueurAjouer,joueur_t premierJoueur, joueur_t secondJoueur, joueur_t troisiemeJoueur, joueur_t quatriemeJoueur)
{
    if(nombreDeJoueurAjouer == 2)
    {
        sauvegardeDeuxJoueur(premierJoueur, secondJoueur);
    }
    if(nombreDeJoueurAjouer == 3)
    {
        sauvegardeTroisJoueur(premierJoueur, secondJoueur, troisiemeJoueur);
    }
    if(nombreDeJoueurAjouer == 4)
    {
        sauvegardeQuatreJoueur(premierJoueur, secondJoueur, troisiemeJoueur, quatriemeJoueur);
    }
}

//////////////////////////////////////////////////////////
/////////////Sous programme chargement global ////////////
//////////////////////////////////////////////////////////
void chargerGlobale(int nombreDeJoueurACharger,joueur_t* joueurAchargerE, joueur_t* joueurAchargerF, joueur_t* joueurAchargerG, joueur_t* joueurAchargerH)
{
    if(nombreDeJoueurACharger == 2)
    {
        chargerDeuxJoueur(&joueurAchargerE, &joueurAchargerF);
    }
    if(nombreDeJoueurACharger == 3)
    {
        chargerTroisJoueur(&joueurAchargerE, &joueurAchargerF, &joueurAchargerG);
    }
    if(nombreDeJoueurACharger == 4)
    {
        chargerQuatreJoueur(&joueurAchargerE, &joueurAchargerF, &joueurAchargerG, &joueurAchargerH);
    }
}

int main()
{
    joueur_t joueur1;
    joueur_t joueur2;
    joueur_t joueur3;
    joueur_t joueur4;

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

    strcpy(joueur2.nomJoueur,"Thibault");
    for (int i = 0; i<24; i++)
    {
        joueur2.possessions[i] = 2;
    }
    joueur2.position = 6;
    joueur2.argent = 1600;
    joueur2.tourPrison = 1;
    joueur2.numeroJoueur = 4;
    joueur2.libertePrison = 5;
    joueur2.nbProprietefam1 = 3;
    joueur2.nbProprietefam2 = 7;
    joueur2.nbProprietefam3= 8;
    joueur2.nbProprietefam4 = 9;
    joueur2.doubleOuNon = 20;

    strcpy(joueur3.nomJoueur,"Adrien");
    for (int i = 0; i<24; i++)
    {
        joueur3.possessions[i] = 3;
    }
    joueur3.position = 7;
    joueur3.argent = 2000;
    joueur3.tourPrison = 2;
    joueur3.numeroJoueur = 5;
    joueur3.libertePrison = 6;
    joueur3.nbProprietefam1 = 4;
    joueur3.nbProprietefam2 = 8;
    joueur3.nbProprietefam3= 9;
    joueur3.nbProprietefam4 = 10;
    joueur3.doubleOuNon = 21;

    strcpy(joueur4.nomJoueur,"Philippe");
    for (int i = 0; i<24; i++)
    {
        joueur4.possessions[i] = 4;
    }
    joueur4.position = 8;
    joueur4.argent = 2500;
    joueur4.tourPrison = 3;
    joueur4.numeroJoueur = 6;
    joueur4.libertePrison = 7;
    joueur4.nbProprietefam1 = 8;
    joueur4.nbProprietefam2 = 9;
    joueur4.nbProprietefam3= 10;
    joueur4.nbProprietefam4 = 11;
    joueur4.doubleOuNon = 22;

    int nmrJoueur = 2;

    joueur_t joueur5;
    joueur_t joueur6;
    joueur_t joueur7;
    joueur_t joueur8;

    sauvegardeQuatreJoueur(joueur1, joueur2, joueur3, joueur4);
    chargerQuatreJoueur(&joueur5, &joueur6, &joueur7, &joueur8);




    return 0;
}
