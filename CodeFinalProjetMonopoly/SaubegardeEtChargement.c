#include "header.h"

//////////////////////////////////////////////////////////
///Sous programme pour saubegarder le tableau de case/////
//////////////////////////////////////////////////////////

void sauvegardeCasesMonopoly(caseMonop tableauCaseMonopoly[])
{
    ///Ouverture et test d'ouverture du fichier
    FILE* tabCaseMonopoly = fopen("fichiersSauvegarde/case.bin", "wb+");
    if (tabCaseMonopoly == NULL)
    {
        printf("Erreur d'ouverture de fichier.");
        return 1;
    }

    for(int i=0 ; i<28 ; i++)
    {
        fwrite(&tableauCaseMonopoly[i],sizeof(caseMonop),1,tabCaseMonopoly);
    }

    ///Fermeture du fichier
    fclose(tabCaseMonopoly);
    tabCaseMonopoly = NULL;
}

//////////////////////////////////////////////////////////
///Sous programme pour charger le tableau de case/////////
//////////////////////////////////////////////////////////

void chargerCasesMonopoly(caseMonop tableauCaseMonopolyAremplir[])
{
    ///Ouverture et test d'ouverture du fichier
    FILE* tabCaseMonopoly = fopen("fichiersSauvegarde/case.bin", "rb");
    if (tabCaseMonopoly == NULL)
    {
        printf("Erreur d'ouverture de fichier caseMonopoly.");
        return 1;
    }

    for(int i=0 ; i<28 ; i++)
    {
        fread(&tableauCaseMonopolyAremplir[i],sizeof(caseMonop),1,tabCaseMonopoly);
    }

    ///Fermeture du fichier
    fclose(tabCaseMonopoly);
    tabCaseMonopoly = NULL;
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////
///Sous programme pour sauvegarder verif une partie commencée//
///////////////////////////////////////////////////////////////
void SauvegardeVerifPartieCommencee()
{
    ///Déclaration des variables
    int saisie = 1;
    ///Ouverture et test d'ouverture du fichier
    FILE* partieCommencee = fopen("fichiersSauvegarde/partieCommencee.bin", "wb+");
    if (partieCommencee == NULL)
    {
        printf("Erreur d'ouverture de fichier PartieCommencee.");
        return 1;
    }

    fwrite(&saisie, sizeof(int),1,partieCommencee);

    ///Fermeture du fichier
    fclose(partieCommencee);
    partieCommencee = NULL;
}

///////////////////////////////////////////////////////////////////
///Sous programme pour sauvegarder verif une partie pas commencée//
///////////////////////////////////////////////////////////////////
void SauvegardeVerifPartiePasCommencee()
{
    ///Déclaration des variables
    int saisie = 0;
    ///Ouverture et test d'ouverture du fichier
    FILE* partieCommencee = fopen("fichiersSauvegarde/partieCommencee.bin", "wb+");
    if (partieCommencee == NULL)
    {
        printf("Erreur d'ouverture de fichier PartieCommencee.");
        return 1;
    }

    fwrite(&saisie, sizeof(int),1,partieCommencee);

    ///Fermeture du fichier
    fclose(partieCommencee);
    partieCommencee = NULL;
}

//////////////////////////////////////////////////////////
///Sous programme pour tester une partie commencée////////
//////////////////////////////////////////////////////////

int testPartieCommencee()
{
    int test;
    ///Ouverture et test d'ouverture du fichier
    FILE* partie_commencee = fopen("fichiersSauvegarde/partieCommencee.bin", "rb");
    if (partie_commencee == NULL)
    {
        printf("Erreur d'ouverture de fichier testPartiecommencee.");
        return 1;
    }

    ///Char
    fread(&test, sizeof(int),1,partie_commencee);


    ///Fermeture du fichier
    fclose(partie_commencee);
    partie_commencee = NULL;

    return test;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////
///Sous programme pour sauvegarder une partie chargee ////
//////////////////////////////////////////////////////////
void SauvegardeVerifPartieSauv()
{
    ///Déclaration des variables
    int saisie = 1;
    ///Ouverture et test d'ouverture du fichier
    FILE* partieChargee = fopen("fichiersSauvegarde/partieChargee.bin", "wb+");
    if (partieChargee == NULL)
    {
        printf("Erreur d'ouverture de fichier.");
        return 1;
    }

    fwrite(&saisie, sizeof(int),1,partieChargee);

    ///Fermeture du fichier
    fclose(partieChargee);
    partieChargee = NULL;
}

//////////////////////////////////////////////////////////
///Sous programme pour tester une partie chargée  ////////
//////////////////////////////////////////////////////////

int testPartieChargee()
{
    int test;
    ///Ouverture et test d'ouverture du fichier
    FILE* partie_chargee = fopen("fichiersSauvegarde/partieChargee.bin", "rb");
    if (partie_chargee == NULL)
    {
        printf("Erreur d'ouverture de fichier testPartieChargee.");
        return 1;
    }

    ///Char
    fread(&test, sizeof(int),1,partie_chargee);


    ///Fermeture du fichier
    fclose(partie_chargee);
    partie_chargee = NULL;

    return test;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////
///Sous programme pour sauvegarder le nombre de joueur ///
//////////////////////////////////////////////////////////
void sauvegardeNombreJoueur(int nombre_De_joueur)
{
    ///Ouverture et test d'ouverture du fichier
    FILE* nombreDeJoueur = fopen("fichiersSauvegarde/nombreJoueur.bin", "wb+");
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
///Sous programme pour charger le nombre de joueur ///////
//////////////////////////////////////////////////////////

void chargerNombreJoueur(int* nombre_De_joueur)
{
    ///Ouverture et test d'ouverture du fichier
    FILE* nombreDeJoueur = fopen("fichiersSauvegarde/nombreJoueur.bin", "rb");
    if (nombreDeJoueur == NULL)
    {
        printf("Erreur d'ouverture de fichier nombreJoueur.");
        return 1;
    }

    ///Char
    fread(nombre_De_joueur, sizeof(int),1,nombreDeJoueur);


    ///Fermeture du fichier
    fclose(nombreDeJoueur);
    nombreDeJoueur = NULL;


}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////
///Sous programme pour sauvegarder un tableau d'ordre/////
//////////////////////////////////////////////////////////

void sauvegarderOrdreJoueur(joueur_t tableauOrdre[])
{
    ///Ouverture et test d'ouverture du fichier
    FILE* OrdreJoueur = fopen("fichiersSauvegarde/Ordre.bin", "wb+");
    if (OrdreJoueur == NULL)
    {
        printf("Erreur d'ouverture de fichier.");
        return 1;
    }

    ///Sauvegarder l'ordre des joueurs
    fwrite(&tableauOrdre[0], sizeof(joueur_t),1,OrdreJoueur);
    fwrite(&tableauOrdre[1], sizeof(joueur_t),1,OrdreJoueur);
    fwrite(&tableauOrdre[2], sizeof(joueur_t),1,OrdreJoueur);
    fwrite(&tableauOrdre[3], sizeof(joueur_t),1,OrdreJoueur);

    ///Fermeture du fichier
    fclose(OrdreJoueur);
    OrdreJoueur = NULL;

}

//////////////////////////////////////////////////////////
///Sous programme pour charger un tableau d'ordre/////////
//////////////////////////////////////////////////////////

void chargerOrdreJoueur(joueur_t tableauOrdre[])
{
    ///Ouverture et test d'ouverture du fichier
    FILE* OrdreJoueur = fopen("fichiersSauvegarde/Ordre.bin", "rb");
    if (OrdreJoueur == NULL)
    {
        printf("Erreur d'ouverture de fichier.");
        return 1;
    }

    ///Sauvegarder l'ordre des joueurs
    fread(&tableauOrdre[0], sizeof(joueur_t),1,OrdreJoueur);
    fread(&tableauOrdre[1], sizeof(joueur_t),1,OrdreJoueur);
    fread(&tableauOrdre[2], sizeof(joueur_t),1,OrdreJoueur);
    fread(&tableauOrdre[3], sizeof(joueur_t),1,OrdreJoueur);

    ///Fermeture du fichier
    fclose(OrdreJoueur);
    OrdreJoueur = NULL;


}




