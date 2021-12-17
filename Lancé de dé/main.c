#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Structure Joueur
typedef struct t_joueur
{
    int doubleOuNon;
}joueur;


int sousProgDouble(int* de1, int* de2,joueur joueurB, int* somme)
{
    if(*de1 == *de2)
    {
        if(joueurB.doubleOuNon == 3)
        {
            printf("Vous allez en prison\n");
            joueurB.doubleOuNon = 0;
        }
        if(joueurB.doubleOuNon == 1)
        {
            lancerDeDes(&de1, &de2, &somme,joueurB );
            joueurB.doubleOuNon == 2;
        }
        if(joueurB.doubleOuNon == 0)
        {
            lancerDeDes(&de1, &de2, &somme,joueurB);
            joueurB.doubleOuNon = 1;
        }
    }
    else
    {
        joueurB.doubleOuNon = 0;
    }

}

//Sous programme pour lancer les dés
void lancerDeDes(int* deC, int* deD, int* somme, joueur joueurC)
{
    //Déclaration des variables
    char choix;
    srand(time(NULL));


    //Demande à l'utilisateur d'appuyer sur L pour lancer les dés
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
    sommeInterne = sommeInterne + de1 + de2;

    //Affichage des dés
    if(de1 == 1)
    {
        printf("o o o o o \n");
        printf("o       o \n");
        printf("o   0   o \n");
        printf("o       o \n");
        printf("o o o o o \n");
    }
    else if(de1 == 2)
    {
        printf("o o o o o\n");
        printf("o 0     o\n");
        printf("o       o\n");
        printf("o     0 o\n");
        printf("o o o o o\n");
    }
    else if(de1 == 3)
    {
        printf("o o o o o\n");
        printf("o 0     o\n");
        printf("o   0   o\n");
        printf("o     0 o\n");
        printf("o o o o o\n");
    }
    else if(de1 ==4)
    {
        printf("o o o o o\n");
        printf("o 0   0 o\n");
        printf("o       o\n");
        printf("o 0   0 o\n");
        printf("o o o o o\n");
    }
    else if (de1 == 5)
    {
        printf("o o o o o\n");
        printf("o 0   0 o\n");
        printf("o   0   o\n");
        printf("o 0   0 o\n");
        printf("o o o o o\n");
    }
    else if(de1 == 6)
    {
        printf("o o o o o\n");
        printf("o 0   0 o\n");
        printf("o 0   0 o\n");
        printf("o 0   0 o\n");
        printf("o o o o o\n");
    }
    printf("\n \n");
    if(de2 == 1)
    {
        printf("o o o o o\n");
        printf("o       o\n");
        printf("o   0   o\n");
        printf("o       o\n");
        printf("o o o o o\n");
    }
    else if(de2 == 2)
    {
        printf("o o o o o\n");
        printf("o 0     o\n");
        printf("o       o\n");
        printf("o     0 o\n");
        printf("o o o o o\n");
    }
    else if(de2 == 3)
    {
        printf("o o o o o\n");
        printf("o 0     o\n");
        printf("o   0   o\n");
        printf("o     0 o\n");
        printf("o o o o o\n");
    }
    else if(de2 ==4)
    {
        printf("o o o o o\n");
        printf("o 0   0 o\n");
        printf("o       o\n");
        printf("o 0   0 o\n");
        printf("o o o o o\n");
    }
    else if (de2 == 5)
    {
        printf("o o o o o\n");
        printf("o 0   0 o\n");
        printf("o   0   o\n");
        printf("o 0   0 o\n");
        printf("o o o o o\n");
    }
    else if (de2 == 6)
    {
        printf("o o o o o\n");
        printf("o 0   0 o\n");
        printf("o 0   0 o\n");
        printf("o 0   0 o\n");
        printf("o o o o o\n");
    }

    return de1 + de2;
}


void lanceDesGlobal(int* deC, int* deD, int* somme, joueur joueurC)
{
    int sommeIni = *somme;
    int sommeTmp;

    sommeIni = lancerDeDes(&deC, &deD, &somme, joueurC);
    sommeTmp = sommeIni

    if(*deC == *de)
    {
        if(joueurC.doubleOuNon == 0)
        {
            joueurC.doubleOuNon == 1;
            sommeIni = lancerDeDes(&deC, &deD, &somme, joueurC);
            sommeTmp = sommeTmp + sommeIni;

            if(*deC != *deD)
            {
                *somme = sommeTmp;
                joueurC.doubleOuNon = 0;
            }

            if(joueurC.doubleOuNon == 1)
            {
                joueurC.doubleOuNon == 2;
                sommeIni = lancerDeDes(&deC, &deD, &somme, joueurC);
                sommeTmp = sommeTmp + sommeIni;
            }
        }
    }
}


int main()
{
    int de1, de2;
    int somme;
    joueur joueurA;
    joueurA.doubleOuNon = 0;
    lancerDeDes(&de1, &de2,&somme,joueurA);

}
