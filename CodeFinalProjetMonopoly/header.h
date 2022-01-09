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
    int couthyp;


} caseMonop;

///Prototype des sous programmes
void intro();
void Color(int couleurDuTexte,int couleurDeFond);
void pleinEcran();
void menu(int* choix);
void choixmenu(int* choixDumenu,joueur_t tab_joueur[], caseMonop tableauDeCase[], joueur_t OrdreDesJoueursAcharger[],int* nombreDeJoueurAJouer,int* nombreCarteSith, int* nombreCarteChance,int tableauJoueurFaillite[],int compteurJoueurEnFaillite);
void regle_Du_jeu(joueur_t tab_joueur[], int* nombre_joueur,caseMonop tableauDeCase[], joueur_t OrdreDesJoueursAcharger[],int* nombreCarteSith,int*nombreCarteChance,int tabJFaillite[],int compteurJoueurEnFaillite);
void creer_nouveau_joueur(joueur_t tab_joueur[], int* nombre_joueur);
void plateau(int pos[],int nbj,caseMonop cases[28],joueur_t joueur[4]);
void SauvegardeVerifPartieSauv();
int testPartieChargee();
void sauvegardeNombreJoueur(int nombre_De_joueur);
void chargerNombreJoueur(int* nombre_De_joueur);
void credits(joueur_t tab_joueur[], int* nombre_joueur,caseMonop tableauDeCase[], joueur_t OrdreDesJoueursAcharger[],int* nombreCarteSith, int* nombreCarteChance,int tabJoueurFaillite[],int compteurJoueurEnFaillite);
void choisirQuiCommence(joueur_t ordreJoueur[],joueur_t tabJoueur[], int nbrJoueur);
void afficherDe(int de1, int de2);
void lancerDeDes(int* deC, int* deD);
int deplanbrjr(int nbr,joueur_t* joueur);
void chargerOrdreJoueur(joueur_t tableauOrdre[]);
void sauvegarderOrdreJoueur(joueur_t tableauOrdre[]);
void chargerCasesMonopoly(caseMonop tableauCaseMonopolyAremplir[]);
void sauvegardeCasesMonopoly(caseMonop tableauCaseMonopoly[]);
void SauvegardeVerifPartieCommencee();
void SauvegardeVerifPartiePasCommencee();
int testPartieCommencee();
void remplirTableauDeCase(caseMonop tableauDesCases[]);
void actioncase(joueur_t Tabjoueur[],caseMonop tabc[],int tour, int* nombreCarteSith,int* nombreCarteChance, int positionDesJoueurs[], int* compteurMaisons, int* compteurHotels);
void Fsith1(joueur_t Tabjoueur[], int tour, int compteur);
void Fsith2(joueur_t Tabjoueur[], int tour, int compteur);
void Fsith3(joueur_t Tabjoueur[], int tour, int compteur);
void Fsith4(joueur_t Tabjoueur[], int tour, int compteur);
void Fsith5(joueur_t Tabjoueur[], int tour, int compteur);
void Fsith6(joueur_t Tabjoueur[], int tour, int compteur);
void Fsith7(joueur_t Tabjoueur[], int tour, int compteur);
void Fsith8(joueur_t Tabjoueur[], int tour, int compteur);
void Fsith9(joueur_t Tabjoueur[], int tour, int compteur);
void Fsith11(joueur_t Tabjoueur[], int tour, int compteur);
void Fsith10(joueur_t Tabjoueur[], int tour, int compteur);
void Fsith12(joueur_t Tabjoueur[], int tour, int compteur);
void Fsith13(joueur_t Tabjoueur[], int tour, int compteur);
void Fsith14(joueur_t Tabjoueur[], int tour, int compteur);
void Fsith15(joueur_t Tabjoueur[], int tour, int compteur);
void Fsith16(joueur_t Tabjoueur[], int tour, int compteur);
void f1(joueur_t Tabjoueur[], int tour, int compteur);
void f2(joueur_t Tabjoueur[], int tour, int compteur);
void f3(joueur_t Tabjoueur[], int tour, int compteur);
void f4(joueur_t Tabjoueur[], int tour, int compteur);
void f5(joueur_t Tabjoueur[], int tour, int compteur);
void f6(joueur_t Tabjoueur[], int tour, int compteur);
void f7(joueur_t Tabjoueur[], int tour, int compteur);
void f8(joueur_t Tabjoueur[], int tour, int compteur);
void f9(joueur_t Tabjoueur[], int tour, int compteur);
void f10(joueur_t Tabjoueur[], int tour, int compteur);
void f11(joueur_t Tabjoueur[], int tour, int compteur);
void f12(joueur_t Tabjoueur[], int tour, int compteur);
void f13(joueur_t Tabjoueur[], int tour, int compteur);
void f14(joueur_t Tabjoueur[], int tour, int compteur);
void f15(joueur_t Tabjoueur[], int tour, int compteur);
void f16(joueur_t Tabjoueur[], int tour, int compteur);
int ChargerNombreCarteSith();
void SauvegardeNombreCarteSith(int nombreCarteSith);
int ChargerNombreCarteChance();
void SauvegardeNombreCarteChance(int nombreCarteChance);
void echange(joueur_t tabJoueur[], caseMonop tabCases[],int *compteurMaisons, int *compteurHotels, int i, int nbJoueurs);
void achat( joueur_t tabJoueur[], caseMonop Tabcase[], int *compteurMaison, int *compteurHotel, int nbrMaison, int choixP, int i);
void vente(joueur_t tabJoueur[], caseMonop Tabcase[], int *compteurMaison, int *compteurHotel, int nbrMaison, int choixP, int i);
void gestion_Prop(joueur_t joueur[], caseMonop caseMonopoly[], int *compteurMaison, int *compteurHotel, int i);
void hypotheque(joueur_t tabJoueur[], caseMonop tabC[],int *compteurMaisons, int *compteurHotels, int t);
void chargerJoueurFaillite(int joueurEnFailliteAcharger[]);
void sauvegardeJoueurEnFaillite(int joueurEnFaillite[]);
void faillite_case (joueur_t Tabjoueur[],caseMonop tabc[],int* compteurMaisons,int* compteurHotels, int tour, int prix, int prop_DE, int compteur);
void hypotheque_faillite(joueur_t tabJoueur[], caseMonop tabC[],int *compteurMaisons, int *compteurHotels, int t);
void faillite_carte (joueur_t Tabjoueur[],caseMonop tabc[],int* compteurMaisons,int* compteurHotels, int tour, int prix, int compteur);
void chargerNmbrJoueurFaillite(int compteurF);
void sauvegardeCompteurFaillite(int compteurfaillite);

#endif // HEADER_H_INCLUDED
