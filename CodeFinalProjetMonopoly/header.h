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
int choixmenu(int choixDumenu);
void regle_Du_jeu();


#endif // HEADER_H_INCLUDED
