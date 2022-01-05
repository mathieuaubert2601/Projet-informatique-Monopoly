#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

///Bibliothèques
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

///Définition des structures
//Structure joueur
typedef struct
{
    char nomJoueur[20] ;
    int possessions[28];
    int  position ;
    int  argent ;
    int tourPrison ;
    int numeroJoueur ;
    int libertePrison ;
    int familles[10];
    int doubleOuNon;
    int nbPropriete;

} joueur_t;

//Structure case
typedef struct
{

    char nomCase[20];
    int  position ;
    int prix_case;
    int famille;
    int proprieteDe;
    int nbMaison;
    int nbHotel;
    int typeCase;
    int prixLoyer;
    int prixloy1maison;
    int prixloy2maison;
    int prixloy3maison;
    int prixloy4maison;
    int prixloyhotel;
    int hypotheque; //0 si pas hypothequer et 1 si hypothequer
    int couthypo;


} caseMonop;

///Prototype des sous programmes
void intro();
void Color(int couleurDuTexte,int couleurDeFond);
void pleinEcran();
void menu(int* choix);
void choixmenu(int* choixDumenu,joueur_t tab_joueur[], caseMonop tableauDeCase[], joueur_t OrdreDesJoueursAcharger[],int* nombreDeJoueurAJouer);
void regle_Du_jeu(joueur_t tab_joueur[], int* nombre_joueur,caseMonop tableauDeCase[], joueur_t OrdreDesJoueursAcharger[]);
void creer_nouveau_joueur(joueur_t tab_joueur[], int* nombre_joueur);
void plateau(int pos[],int nbj);
void SauvegardeVerifPartieSauv();
int testPartieChargee();
void sauvegardeNombreJoueur(int nombre_De_joueur);
void chargerNombreJoueur(int* nombre_De_joueur);
void credits(joueur_t tab_joueur[], int* nombre_joueur,caseMonop tableauDeCase[], joueur_t OrdreDesJoueursAcharger[]);
void choisirQuiCommence(joueur_t ordreJoueur[],joueur_t tabJoueur[], int nbrJoueur);
void afficherDe(int de1, int de2);
void lancerDeDes(int* deC, int* deD);
int deplanbrjr(int nbr,joueur_t joueur);
void chargerOrdreJoueur(joueur_t tableauOrdre[]);
void sauvegarderOrdreJoueur(joueur_t tableauOrdre[]);
void chargerCasesMonopoly(caseMonop tableauCaseMonopolyAremplir[]);
void sauvegardeCasesMonopoly(caseMonop tableauCaseMonopoly[]);
void SauvegardeVerifPartieCommencee();
void SauvegardeVerifPartiePasCommencee();
int testPartieCommencee();
void remplirTableauDeCase(caseMonop tableauDesCases[]);
void actioncase(joueur_t* joueur,caseMonop tabc[]);
void Fsith1(joueur_t* joueur);
void Fsith2(joueur_t* joueur);
void Fsith3(joueur_t* joueur);
void Fsith4(joueur_t* joueur);
void Fsith5(joueur_t* joueur);
void Fsith6(joueur_t* joueur);
void Fsith7(joueur_t* joueur);
void Fsith8(joueur_t* joueur);
void Fsith9(joueur_t* joueur);
void Fsith10(joueur_t* joueur);
void Fsith11(joueur_t* joueur);
void Fsith12(joueur_t* joueur);
void Fsith13(joueur_t* joueur);
void Fsith14(joueur_t* joueur);
void Fsith16(joueur_t* joueur);

#endif // HEADER_H_INCLUDED
