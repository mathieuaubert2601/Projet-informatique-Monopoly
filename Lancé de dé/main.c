#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Structure Joueur
typedef struct t_joueur
{
    int doubleOuNon;
}joueur;


//Sous programme pour lancer les dés
void lancerDeDes(int* deC, int* deD)
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

    *deC = de1;
    *deD = de2;
}

void afficherDe(int de1, int de2)
{
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
}

void lanceDesGlobal(int* deE, int* deF, int* somme, joueur joueurC)
{
    ///Déclaration des variables
    int sommeTmp = 0;

    lancerDeDes(deE, deF);
    afficherDe(*deE, *deF);

    if(*deE == *deF)
    {

        while(*deE == *deF)
        {
            if(joueurC.doubleOuNon == 2)
            {
                printf("Vous allez en prison ! \n");
                joueurC.doubleOuNon = 0;
                break;
            }

            if(joueurC.doubleOuNon == 1)
            {
                sommeTmp = sommeTmp + *deE + *deF;
                lancerDeDes(deE, deF);
                afficherDe(*deE, *deF);
                joueurC.doubleOuNon = 2;
            }

            if(joueurC.doubleOuNon == 0)
            {
                sommeTmp = sommeTmp + *deE + *deF;
                lancerDeDes(deE, deF);
                afficherDe(*deE, *deF);
                joueurC.doubleOuNon =1;
            }

        }
    }

    if(*deE != *deF)
    {
        joueurC.doubleOuNon = 0;
        *somme = *deE + *deF + sommeTmp;
        printf("La somme des deux des est de %d", *somme);
    }

}


int main()
{
    int de1, de2;
    int somme;
    joueur joueurA;
    joueurA.doubleOuNon = 0;
    lanceDesGlobal(&de1,&de2,&somme,joueurA);


}
