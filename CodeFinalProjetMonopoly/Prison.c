#include "header.h"

void prisonChoix(int* choixPrison)
{
    system("cls");

    ///Affichage des différentes options
    printf("QUE SOUHAITEZ VOUS FAIRE : \n");
    printf(" 1. UTILISEZ UNE CARTE LIBERE DE PRISON\n");
    printf(" 2. ACHETER UNE CARTE LIBERE DE PRISON A UN AUTRE JOUEUR\n");
    printf(" 3. TENTER DE FAIRE UN DOUBLE\n");
    printf(" 4. PAYER ET SORTIR DE PRISON\n");
    printf(" 5. NE RIEN FAIRE\n");
    fflush(stdin);
    scanf("%d",choixPrison);

    ///Bliandage du choix
    if ((*choixPrison<1)&&(*choixPrison>5))
    {
        do{
            printf("VOTRE SAISIE N'EST PAS CORRECT. ENTREZ 1, 2, 3, 4 OU 5. ");
            scanf("%d",choixPrison);
        }while(*choixPrison != 1 && *choixPrison != 2 &&*choixPrison != 3 && *choixPrison != 4 && *choixPrison != 5);
    }
}

void prison (int choixPrisonPrec, joueur_t tableauDeJoueur[] , int tourActuel, int nombreDeJoueur)
{
    system("cls");
    int testCarteJoueur = 0;
    int j1,j2,j3,j4;
    switch (choixPrisonPrec)
    {
    case 1 :
        {
            if(tableauDeJoueur[tourActuel].libertePrison == 0)
            {
                printf("Vous n'avez pas de carte. \n");
                prisonChoix(&choixPrisonPrec);
            }
            else
            {
                tableauDeJoueur[tourActuel].libertePrison = tableauDeJoueur[tourActuel].libertePrison - 1;
                tableauDeJoueur[tourActuel].tourPrison = 0;
            }
            break;
        }
    case 2 :
        {
            //On vérifie si les autres joueurs ont une carte
            for(int i=0; i<nombreDeJoueur ;i++)
            {
                if(tableauDeJoueur[i].libertePrison != 0 && i != tourActuel)
                {
                    testCarteJoueur = testCarteJoueur + 1;
                }
            }

            if(testCarteJoueur == 0)
            {
                printf("Aucun joueur n'a de carte.\n");
                prisonChoix(&choixPrisonPrec);
            }
            else
            {
                for(int j=0 ; j<nombreDeJoueur ; j++)
                {
                    if(tableauDeJoueur[j].libertePrison != 0 && j != tourActuel)
                    {
                        printf("%d. Demander une carte a %s \n",j+1,tableauDeJoueur[j].nomJoueur);
                        if(j == 0)
                        {
                            j1 = j;
                        }
                        if(j == 1)
                        {
                            j2 = j;
                        }
                        if(j == 2)
                        {
                            j3 = j;
                        }
                        if(j == 3)
                        {
                            j4 = j;
                        }

                    }
                }
            }
            break;
        }
    }
}
