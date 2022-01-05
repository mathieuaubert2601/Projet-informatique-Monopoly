#include "header.h"

void plateau(int pos[],int nbj,caseMonop cases[28])// rajouter couleur, rajouter
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
    printf("      |                    |");
    Color(7,0);
    printf("__________");//kaminoo
    Color(3,0);
    printf("|");
    Color(6,0);
    printf("__________");//conseil
    Color(3,0);
    printf("|");
    Color(7,0);
    printf("__________");//geonosis
    Color(3,0);
    printf("|");
    Color(5,0);
    printf("__________");//spatioport
    Color(3,0);
    printf("|");
    Color(14,0);
    printf("__________");//alderaan
    Color(3,0);
    printf("|");
    Color(14,0);
    printf("_________");//bespin
    Color(3,0);
    printf("|                    |\n");
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
    printf("      |                    |");
    Color(7,0);
    printf("__________");//endor
    Color(3,0);
    printf("|");
    Color(7,0);
    printf("__________");//kashyyyk
    Color(3,0);
    printf("|");
    Color(5,0);
    printf("__________");//spatioport1
    Color(3,0);
    printf("|");
    Color(14,0);
    printf("__________");//hoth
    Color(3,0);
    printf("|");
    Color(6,0);
    printf("__________");//conseil
    Color(3,0);
    printf("|");
    Color(14,0);
    printf("_________");//dagobah
    Color(3,0);
    printf("|                    |\n");
    printf("      |                    |          |          |          |          |          |         |                    |\n");
    printf("      |                    |__________|__________|__________|__________|__________|_________|                    |\n");
    printf("      |                    |          |          |          |          |          |         |                    |\n");
    printf("      |____________________|__________|__________|__________|__________|__________|_________|____________________|\n\n                                                                                                                               M A D E  B Y  T E A M   J A R J A R");

///position joueur

    int colgau=8;//revoir les noms
    int colgdr=37;
    int lighau=10;
    int ligbas=93;
    int col=1;

    for (int i=0; i<nbj; i++)
    {
        Color(col,0);
        int j=0;
//ligne du bas ligne 93 variation de 4 à partir de 10
        for(int k=8; k>0; k--)
        {

            gotoligcol(colgdr,lighau+(k*11)+i);
            if (j==pos[i])
            {
                printf("*");
            }
            j+=1;

        }
//colonne de gauche colone 13 variation de 4 à partir de 10
        for (int k=6; k>0; k--)
        {

            gotoligcol((colgau+(k*4)),lighau+i);
            if (j==pos[i])
            {
                printf("*");
            }
            j+=1;

        }
        //ligne du haut colone 6 variation de 10 à partir de 13
        for(int k=1; k<8; k++)
        {
            gotoligcol(colgau-2,lighau+(k*11)+i);
            if (j==pos[i])
            {
                printf("*");
            }
            j+=1;


        }
        //colone de droite ligne 93 variation de 4 à partir de 10
        for(int k=0; k<9; k++)
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
    }

///LOGO ECE//////////////////////////////////

    int z=16;
    int y=40;
    Color(3,0);
    gotoligcol(z,y);
    z++;
    printf("\n");
    gotoligcol(z,y);
    z++;
    printf("                       oo");
    gotoligcol(z,y);
    z++;
    printf("                 oOOOOOOOOOO ");
    gotoligcol(z,y);
    z++;
    printf("              oOOOOo        O   ");
    gotoligcol(z,y);
    z++;
    printf("            OOOOO  ");
    gotoligcol(z,y);
    z++;
    z++;
    printf("         oOOOOo     ");
    gotoligcol(z,y);
    z++;
    printf("                         oOOOOo");
    gotoligcol(z,y);
    z++;
    printf("                      oOOOOo   ");
    gotoligcol(z,y);
    z++;
    printf("                     oOOOOo");
    gotoligcol(z,y);
    z++;
    printf("          oo     oOOOOOo  ");
    gotoligcol(z,y);
    z++;
    printf("            OOOOOOOo");
    z+=2;
    gotoligcol(z,y);
    printf("A N  E C E  P A R I S  P R O D U C T I O N");

    Color(10,0);


///POSITION MAISON

    int maisonlhaut=13;//revoir les noms
    int maisonlbas=39;
    int maisoncgau=8;
    int maisoncdro=100;
    int cas=0;
    for (int i=0; i<28; i++)
    {
        if(i<7)
        {
            if(cases[i].nbMaison>0)//ligne bas
            {
                for(int j1=0; j1<cases[i].nbMaison; j1++)
                {
                    gotoligcol(maisonlbas,maisoncdro-(i*11)-j1);//coordonées verifiées
                    printf("M");
                }
            }
            else if(cases[i].nbHotel>0)
            {
                gotoligcol(maisonlbas,maisoncdro-(i*11));
                printf("H");
            }
        }
        else if(i>=7&&i<14)//colonne gauche
        {
            if(cases[i].nbMaison>0)
            {
                for(int j2=0; j2<cases[i].nbMaison; j2++)
                {
                    gotoligcol(maisonlhaut+((13-i)*4)-j2,maisoncgau);//coordonées verifiées
                    printf("M");
                }
            }
            else if(cases[i].nbHotel>0)
            {
                gotoligcol(maisonlhaut+((13-i)*4),maisoncgau);
                printf("H");
            }
        }
        else if(i>=14&&i<22)//ligne haut
        {
            if(cases[i].nbMaison>0)
            {
                for(int j3=0; j3<cases[i].nbMaison; j3++)
                {
                    gotoligcol(6,maisoncdro-((21-i)*11)+j3-2);//coordonées a determiner
                    printf("M");
                }
            }
            else if(cases[i].nbHotel>0)
            {
                gotoligcol(6,maisoncdro-((21-i)*11)-2);
                printf("H");
            }
        }
        else if (i>=22&&i<28)//colonne droite
        {
            if(cases[i].nbMaison>0)
            {
                for(int j4=0; j4<cases[i].nbMaison; j4++)
                {
                    gotoligcol(maisonlbas-((29-i)*4)-1+j4,maisoncdro+10);//coordonées a determiner
                    printf("M");
                }
            }
            else if(cases[i].nbHotel>0)
            {
                gotoligcol(maisonlbas-((29-i)*4)-1,maisoncdro+10);
                printf("H");
            }
        }

    }


///LIGNE TEAM JARJAR
    gotoligcol(43,123);
    Color(12,0);

    for (int i=0; i<42; i++) //ligne
    {
        Sleep(15);
        printf("_");
    }

    gotoligcol(0,0);

    Sleep(1000);



}




