#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


///////////////////////////////////////
// Nom du sous-programme : COLOR
// R�le : change la couleur du texte dans la console, ainsi que la couleur du fond pour la ligne
// Compatibilit� : windows XP
///////////////////////////////////////
void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}



    /*
    0 : Noir
    1 : Bleu fonc�
    2 : Vert fonc�
    3 : Turquoise
    4 : Rouge fonc�
    5 : Violet
    6 : Vert caca d'oie
    7 : Gris clair
    8 : Gris fonc�
    9 : Bleu fluo
    10 : Vert fluo
    11 : Turquoise
    12 : Rouge fluo
    13 : Violet 2
    14 : Jaune
    15 : Blanc
    */


