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
    char nomJoueur[50] ;
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

///Prototype des sous programmes
void intro();
void Color(int couleurDuTexte,int couleurDeFond);
void pleinEcran();
int menu();
int choixmenu(int choixDumenu,joueur_t tab_joueur[]);
void regle_Du_jeu(joueur_t tab_joueur[], int* nombre_joueur);
void creer_nouveau_joueur(joueur_t tab_joueur[], int* nombre_joueur);
void plateau(int pos[4],int nbj);
void SauvegardeVerifPartieSauv();
int testPartieChargee();
void sauvegardeNombreJoueur(int nombre_De_joueur);
void chargerNombreJoueur(int* nombre_De_joueur);
void sauvegardeDeuxJoueur(joueur_t joueurA, joueur_t joueurB);
void chargerDeuxJoueur(joueur_t* joueurAchargerA, joueur_t* joueurAchargerB);
void sauvegardeTroisJoueur(joueur_t joueurA, joueur_t joueurB, joueur_t joueurC);
void chargerTroisJoueur(joueur_t* joueurAchargerA, joueur_t* joueurAchargerB, joueur_t* joueurAchargerC);
void sauvegardeQuatreJoueur(joueur_t joueurA, joueur_t joueurB, joueur_t joueurC, joueur_t joueurD);
void chargerQuatreJoueur(joueur_t* joueurAchargerA, joueur_t* joueurAchargerB, joueur_t* joueurAchargerC, joueur_t* joueurAchargerD );
void sauvegardeGlobale(int nombreDeJoueurAjouer,joueur_t premierJoueur, joueur_t secondJoueur, joueur_t troisiemeJoueur, joueur_t quatriemeJoueur);
void chargerGlobale(int nombreDeJoueurACharger,joueur_t* joueurAchargerE, joueur_t* joueurAchargerF, joueur_t* joueurAchargerG, joueur_t* joueurAchargerH);
void credits(joueur_t tab_joueur[], int* nombre_joueur);
void choisirQuiCommence(joueur_t ordreJoueur[],joueur_t tabJoueur[], int nbrJoueur);
void lanceDesGlobal(int* deE, int* deF, int* somme, joueur_t joueurC);
void afficherDe(int de1, int de2);
void lancerDeDes(int* deC, int* deD);
#endif // HEADER_H_INCLUDED
