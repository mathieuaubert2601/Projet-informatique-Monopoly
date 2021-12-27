#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "header.h"


void plateau(int pos[4],int nbj)// rajouter couleur, rajouter
{

/*for (int i=0;i<4;i++)//remplissage test
{
    pos[i]=i;
}*/
char tab[28];
// remplissssage coordonées tableau

//nombre joueur sur casse


system("cls");
Color(3,0);
printf("\n                                                                                                                      M O N O P O L Y  S T A R  W A R S  E D I T I O N  \n");
//printf("                                                                \n");
printf("      ____________________________________________________________________________________________________________\n");
printf("      | ORDRE 66           |KAMINOO   | CONSEIL  |   GEO    |  SPATIO- |   ALDE   | BESPIN  |         ARRESTATION|\n");
printf("      |                    |          |   JEDI   |  NOSIS   | PORT III |   RAAN   |         |                    |\n");
printf("      |                    |__________|__________|__________|__________|__________|_________|                    |\n");
printf("      |                    |          |          |          |          |          |         |                    |\n");
printf("      |                    |__________|__________|__________|__________|__________|_________|                    |\n");
printf("      |                    |          |          |          |          |          |         |                    |\n");
printf("      |____________________|__________|__________|__________|__________|__________|_________|____________________|\n");
printf("      |  | TATOOINE        |                                                                |        YAVIN 4 |   |\n");
printf("      |  |");
Color(13,0);
printf("_________________");//tatoiine
Color(3,0);
printf("|                                                                |");
Color(10,0);
printf("________________");//yavin4
Color(3,0);
printf("|   |\n");
printf("      |  |                 |                                                                |                |   |\n");
printf("      |__|_________________|                                                                |________________|___|\n");
printf("      |  | ALLIANCE SITH   |                                                                |  ALLIANCE SITH |   |\n");
printf("      |  |");
Color(12,0);
printf("_________________");//alliance sith
Color(3,0);
printf("|                                                                |");
Color(12,0);
printf("________________");//alliance sith
Color(3,0);
printf("|   |\n      |  |                 |                                                                |                |   |\n");
printf("      |__|_________________|                                                                |________________|___|\n");
printf("      |  | JEDHA           |                                                                |          NABOO |   |\n");
printf("      |  |");
Color(13,0);
printf("_________________");//jedaa
Color(3,0);
printf("|                                                                |");
Color(10,0);
printf("________________");//naboo
Color(3,0);
printf("|   |\n      |  |                 |                                                                |                |   |\n");
printf("      |__|_________________|                                                                |________________|___|\n");
printf("      |  | SPATIOPORT II   |                                                                |  SPATIOPORT IV |   |\n");
printf("      |  |");
Color(5,0);
printf("_________________");//spatioport2
Color(3,0);
printf("|                                                                |");
Color(5,0);
printf("________________");//spatioport4
Color(3,0);
printf("|   |\n      |  |                 |                                                                |                |   |\n");
printf("      |__|_________________|                                                                |________________|___|\n");
printf("      |  | JAKUU           |                                                                |     ALDERAAN   |   |\n");
printf("      |  |");
Color(1,0);
printf("_________________");//jakuu
Color(3,0);
printf("|                                                                |");
Color(1,0);
printf("________________");//alderaan
Color(3,0);
printf("|   |\n      |  |                 |                                                                |                |   |\n");
printf("      |__|_________________|                                                                |________________|___|\n");
printf("      |  | MUSTAFAR        |                                                                |       CORUSANT |   |\n");
printf("      |  |");
Color(1,0);
printf("_________________");//mustafar
Color(3,0);
printf("|                                                                |");
Color(1,0);
printf("________________");//corusant
Color(3,0);
printf("|   |\n      |  |                 |                                                                |                |   |\n");
printf("      |__|_________________|________________________________________________________________|________________|___|\n");
printf("      | PRISON             |  ENDOR   | KASHYYYK |  SPATIO- |   HOTH   | CONSEIL  | DAGOBAH |             DEPART |\n");
printf("      |                    |          |          |  PORT I  |          |   JEDI   |         |                    |\n");
printf("      |                    |__________|__________|__________|__________|__________|_________|                    |\n");
printf("      |                    |          |          |          |          |          |         |                    |\n");
printf("      |                    |__________|__________|__________|__________|__________|_________|                    |\n");
printf("      |                    |          |          |          |          |          |         |                    |\n");
printf("      |____________________|__________|__________|__________|__________|__________|_________|____________________|\n\n                                                                                                                               M A D E  B Y  T E A M   J A R J A R");
Color(10,0);
gotoligcol(43,123);
Color(12,0);
for (int i=0;i<42;i++)
{
    Sleep(15);
    printf("_");
}
int colgau=6;//revoir les noms
int colgdr=37;
int lighau=5;
int ligbas=93;
int col=1;

for (int i=0;i<nbj;i++)
{
    Color(col,0);
    int j=0;
//ligne du bas ligne 93 variation de 4 à partir de 10
    for(int k=8;k>0;k--)
    {

        gotoligcol(colgdr,lighau+(k*10)+i);
        if (j==pos[i])
        {
        printf("*");
        }
        j+=1;

    }
//colonne de gauche colone 13 variation de 4 à partir de 10
    for (int k=6;k>0;k--)
    {

        gotoligcol((colgau+(k*4)),lighau+i);
        if (j==pos[i])
        {
        printf("*");
        }
        j+=1;

    }
    //ligne du haut colone 6 variation de 10 à partir de 13
    for(int k=1;k<8;k++)
    {
        gotoligcol(colgau,lighau+(k*10)+i);
        if (j==pos[i])
        {
        printf("*");
        }
        j+=1;


    }
    //colone de droite ligne 93 variation de 4 à partir de 10
    for(int k=0;k<9;k++)
    {

        gotoligcol((colgau+(k*4)),ligbas+i);
        if (j==pos[i])
        {
        printf("*");
        }
        j+=1;
    }
    col+=2;
if (pos[i]>=28)
{
    pos[i]=0;
}
Color(5,0);
gotoligcol(25,110);



}
Sleep(10000);
}




