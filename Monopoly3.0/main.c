#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "header.h"
#include <string.h>





void nbrjrs();//programme nombre de joueurs




int main()//main
{
fullscreen();
int choix=0;//on crée un choix pour savoir si l'on reprend la derniere partie ou si l'on commence une nouvelle
//ece();
//Sleep(3000);
/*system("cls");
cartejedi();
system("cls");
cartesith();
system("cls");
intro();*/
choix=menu();//appel du menu
choixmenu(choix);
return 0;
}
