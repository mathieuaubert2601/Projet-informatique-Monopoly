#include "header.h"

//Sous programme pour lancer les dés
void lancerDeDes(int* deC, int* deD)
{
    //Déclaration des variables
    char choix;
    srand(time(NULL));


    //Demande à l'utilisateur d'appuyer sur L pour lancer les dés
    gotoligcol(6,115);
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

void afficherDe(int de1, int de2)
{
    //Affichage des dés

    if(de1 == 1)
    {
        gotoligcol(7,115);
        printf("o o o o o \n");
        gotoligcol(8,115);
        printf("o       o \n");
        gotoligcol(9,115);
        printf("o   0   o \n");
        gotoligcol(10,115);
        printf("o       o \n");
        gotoligcol(11,115);
        printf("o o o o o \n");
    }
    else if(de1 == 2)
    {
        gotoligcol(7,115);
        printf("o o o o o\n");
        gotoligcol(8,115);
        printf("o 0     o\n");
        gotoligcol(9,115);
        printf("o       o\n");
        gotoligcol(10,115);
        printf("o     0 o\n");
        gotoligcol(11,115);
        printf("o o o o o\n");
    }
    else if(de1 == 3)
    {
        gotoligcol(7,115);
        printf("o o o o o\n");
        gotoligcol(8,115);
        printf("o 0     o\n");
        gotoligcol(9,115);
        printf("o   0   o\n");
        gotoligcol(10,115);
        printf("o     0 o\n");
        gotoligcol(11,115);
        printf("o o o o o\n");
    }
    else if(de1 ==4)
    {
        gotoligcol(7,115);
        printf("o o o o o\n");
        gotoligcol(8,115);
        printf("o 0   0 o\n");
        gotoligcol(9,115);
        printf("o       o\n");
        gotoligcol(10,115);
        printf("o 0   0 o\n");
        gotoligcol(11,115);
        printf("o o o o o\n");
    }
    else if (de1 == 5)
    {
        gotoligcol(7,115);
        printf("o o o o o\n");
        gotoligcol(8,115);
        printf("o 0   0 o\n");
        gotoligcol(9,115);
        printf("o   0   o\n");
        gotoligcol(10,115);
        printf("o 0   0 o\n");
        gotoligcol(11,115);
        printf("o o o o o\n");
    }
    else if(de1 == 6)
    {
        gotoligcol(7,115);
        printf("o o o o o\n");
        gotoligcol(8,115);
        printf("o 0   0 o\n");
        gotoligcol(9,115);
        printf("o 0   0 o\n");
        gotoligcol(10,115);
        printf("o 0   0 o\n");
        gotoligcol(11,115);
        printf("o o o o o\n");
    }
    printf("\n \n");
    if(de2 == 1)
    {
        gotoligcol(14,115);
        printf("o o o o o\n");
        gotoligcol(15,115);
        printf("o       o\n");
        gotoligcol(16,115);
        printf("o   0   o\n");
        gotoligcol(17,115);
        printf("o       o\n");
        gotoligcol(18,115);
        printf("o o o o o\n");
    }
    else if(de2 == 2)
    {
        gotoligcol(14,115);
        printf("o o o o o\n");
        gotoligcol(15,115);
        printf("o 0     o\n");
        gotoligcol(16,115);
        printf("o       o\n");
        gotoligcol(17,115);
        printf("o     0 o\n");
        gotoligcol(18,115);
        printf("o o o o o\n");
    }
    else if(de2 == 3)
    {
        gotoligcol(14,115);
        printf("o o o o o\n");
        gotoligcol(15,115);
        printf("o 0     o\n");
        gotoligcol(16,115);
        printf("o   0   o\n");
        gotoligcol(17,115);
        printf("o     0 o\n");
        gotoligcol(18,115);
        printf("o o o o o\n");
    }
    else if(de2 ==4)
    {
        gotoligcol(14,115);
        printf("o o o o o\n");
        gotoligcol(15,115);
        printf("o 0   0 o\n");
        gotoligcol(16,115);
        printf("o       o\n");
        gotoligcol(17,115);
        printf("o 0   0 o\n");
        gotoligcol(18,115);
        printf("o o o o o\n");
    }
    else if (de2 == 5)
    {
        gotoligcol(14,115);
        printf("o o o o o\n");
        gotoligcol(15,115);
        printf("o 0   0 o\n");
        gotoligcol(16,115);
        printf("o   0   o\n");
        gotoligcol(17,115);
        printf("o 0   0 o\n");
        gotoligcol(18,115);
        printf("o o o o o\n");
    }
    else if (de2 == 6)
    {
        gotoligcol(14,115);
        printf("o o o o o\n");
        gotoligcol(15,115);
        printf("o 0   0 o\n");
        gotoligcol(16,115);
        printf("o 0   0 o\n");
        gotoligcol(17,115);
        printf("o 0   0 o\n");
        gotoligcol(18,115);
        printf("o o o o o\n");
    }
}

void lanceDesGlobal(int* deE, int* deF, int* somme, joueur_t joueurC)
{
    ///Déclaration des variables
    int sommeTmp = 0;
    joueurC.doubleOuNon = 0;
    lancerDeDes(deE, deF);
    afficherDe(*deE, *deF);



        while(*deE == *deF)
        {
            gotoligcol(19,115);
            printf("Vous avez fait un double !\n");
            gotoligcol(20,115);
            printf("Appuyer sur entrer pour continuer");
            fflush(stdin);
            getchar();

            ///On efface les données existantes
            for(int l=5 ; l<21 ;l++)
            {
                for(int c = 115 ; c<160 ; c++)
                {
                    gotoligcol(l,c);
                    printf(" ");
                }
            }

            if(joueurC.doubleOuNon == 2)
            {
                gotoligcol(22,115);
                printf("Vous allez en prison ! \n");
                joueurC.doubleOuNon = 0;
                break;
            }

            if(joueurC.doubleOuNon == 1)
            {
                sommeTmp = sommeTmp + (*deE) + (*deF);
                lancerDeDes(deE, deF);
                afficherDe(*deE, *deF);
                joueurC.doubleOuNon = 2;
            }

            if(joueurC.doubleOuNon == 0)
            {
                sommeTmp = sommeTmp + (*deE) + (*deF);
                lancerDeDes(deE, deF);
                afficherDe(*deE, *deF);
                joueurC.doubleOuNon =1;
            }

        }


    if(*deE != *deF)
    {
        *somme = 0;
        *somme = (*deE) + (*deF) + sommeTmp;
        gotoligcol(20,115);
        printf("La somme des des est de %d\n", *somme);
    }

}
