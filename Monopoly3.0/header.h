#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
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
void regle_jeu();
int menu();
void Color(int couleurDuTexte,int couleurDeFond);
void intro();
void fullscreen();
int choixmenu(int choixmenu);
void credits();
void plateau();
void gotoligcol( int lig, int col );
void ece();
void cartesith();
void creer_nouveau_joueur(joueur_t tab_joueur[], int* nombre_joueur);
int deplanbrjr(int nbr,joueur_t joueur);
#endif // HEADER_H_INCLUDED
