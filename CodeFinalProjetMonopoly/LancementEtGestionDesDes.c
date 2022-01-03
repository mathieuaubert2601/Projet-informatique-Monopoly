#include "header.h"
#include <time.h>

/// /////////////////////////////////////
///Sous Programmme pour lancer les dés///
/// /////////////////////////////////////
void lancerDeDes(int* deC, int* deD)
{
    //Déclaration des variables
    char choix;
    srand(time(NULL));


    //Demande à l'utilisateur d'appuyer sur L pour lancer les dés
    gotoligcol(12,115);
    printf("Appuyer sur L pour lancer les des : ");
    fflush(stdin);
    scanf("%s", &choix);

    while (choix != 'L')
    {
        printf("Erreur dans la saisie\n");
        printf("Appuyer sur L pour lancer les des : ");
        fflush(stdin);
        scanf("%s", &choix);
    }

    //Obtention de valeurs aléatoire entre 1 et 6
    int de1 = rand() % 6 + 1;
    int de2 = rand() % 6 + 1;

    *deC = de1;
    *deD = de2;
}


/// ///////////////////////////////////////
///Sous Programmme pour afficher les dés///
/// ///////////////////////////////////////

void afficherDe(int de1, int de2)
{
    //Affichage des dés
    int x=7,y=115;
    if(de1 == 1)
    {
        x=14,y=115;
        gotoligcol(x,y);
        x++;
        printf("o o o o o \n");
        gotoligcol(x,y);
        printf("o       o \n");
        x++;
        gotoligcol(x,y);
        printf("o   0   o \n");
        x++;
        gotoligcol(x,y);
        printf("o       o \n");
        x++;
        gotoligcol(x,y);
        printf("o o o o o \n");
    }
    else if(de1 == 2)
    {
        x=14,y=115;
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0     o\n");
        gotoligcol(x,y);
        x++;
        printf("o       o\n");
        gotoligcol(x,y);
        x++;
        printf("o     0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
    }
    else if(de1 == 3)
    {
        x=14,y=115;
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0     o\n");
        gotoligcol(x,y);
        x++;
        printf("o   0   o\n");
        gotoligcol(x,y);
        x++;
        printf("o     0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
    }
    else if(de1 ==4)
    {
        x=14,y=115;
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0   0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o       o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0   0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
    }
    else if (de1 == 5)
    {
        x=14,y=115;
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0   0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o   0   o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0   0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
    }
    else if(de1 == 6)
    {
        x=14,y=115;
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0   0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0   0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0   0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
    }
    printf("\n \n");
    if(de2 == 1)
    {
        x=14,y=128;
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
        gotoligcol(x,y);
        x++;
        printf("o       o\n");
        gotoligcol(x,y);
        x++;
        printf("o   0   o\n");
        gotoligcol(x,y);
        x++;
        printf("o       o\n");
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
    }
    else if(de2 == 2)
    {
        x=14,y=128;
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0     o\n");
        gotoligcol(x,y);
        x++;
        printf("o       o\n");
        gotoligcol(x,y);
        x++;
        printf("o     0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
    }
    else if(de2 == 3)
    {
        x=14,y=128;
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0     o\n");
        gotoligcol(x,y);
        x++;
        printf("o   0   o\n");
        gotoligcol(x,y);
        x++;
        printf("o     0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
    }
    else if(de2 ==4)
    {
        x=14,y=128;
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0   0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o       o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0   0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
    }
    else if (de2 == 5)
    {
        x=14,y=128;
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0   0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o   0   o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0   0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
    }
    else if (de2 == 6)
    {
        x=14,y=128;
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0   0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0   0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o 0   0 o\n");
        gotoligcol(x,y);
        x++;
        printf("o o o o o\n");
    }
}

