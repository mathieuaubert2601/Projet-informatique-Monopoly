#include "header.h"

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
/////Sous programme pour tester une partie chargée  //////
//////////////////////////////////////////////////////////

int testPartieChargee()
{
    int test;
    ///Ouverture et test d'ouverture du fichier
    FILE* partie_chargee = fopen("fichiersSauvegarde/partieChargee.bin", "rb");
    if (partie_chargee == NULL)
    {
        printf("Erreur d'ouverture de fichier.");
        return 1;
    }

    ///Char
    fread(&test, sizeof(int),1,partie_chargee);


    ///Fermeture du fichier
    fclose(partie_chargee);
    partie_chargee = NULL;

    return test;

}

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
/////Sous programme pour charger le nombre de joueur /////
//////////////////////////////////////////////////////////

void chargerNombreJoueur(int* nombre_De_joueur)
{
    ///Ouverture et test d'ouverture du fichier
    FILE* nombreDeJoueur = fopen("fichiersSauvegarde/nombreJoueur.bin", "rb");
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
    SauvegardeVerifPartieSauv();
}

//////////////////////////////////////////////////////////
/////////////Sous programme chargement global ////////////
//////////////////////////////////////////////////////////
void chargerGlobale(int nombreDeJoueurACharger,joueur_t* joueurAchargerE, joueur_t* joueurAchargerF, joueur_t* joueurAchargerG, joueur_t* joueurAchargerH)
{
    ///Test pour vérifier qu'il y a bien une partie sauvegarde
    int VerificationPartieChargee;
    VerificationPartieChargee = testPartieChargee();

    if(VerificationPartieChargee == 0)
    {
        printf("Aucune partie n'a ete enregistree \n");
        return 1;
    }

    if(VerificationPartieChargee == 1)
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
        printf("Le Chargement a ete effectue");
    }

}
