#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "header.h"


typedef struct//structure joueur A POFINER
{
  char nom[50];
  int credits, position,prison,cartelibp;
}joueur;

void nbrjrs();//programme nombre de joueurs




int main()//main
{
fullscreen();
int choix=0;//on crée un choix pour savoir si l'on reprend la derniere partie ou si l'on commence une nouvelle
//intro();
choix=menu();//appel du menu
choixmenu(choix);
return 0;
}
