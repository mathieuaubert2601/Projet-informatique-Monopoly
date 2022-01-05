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
            fflush(stdin);
            scanf("%d",choixPrison);
        }while((*choixPrison != 1 )&& (*choixPrison != 2) && (*choixPrison != 3) && (*choixPrison != 4) && (*choixPrison != 5));
    }
}

void prison (int choixPrisonPrec, joueur_t tableauDeJoueur[] , int tourActuel, int nombreDeJoueur)
{
    system("cls");
    int testCarteJoueur = 0;
    int j1,j2,j3,prixEchange,choixJoueur,variableBoucle,dee1,dee2;
    printf("Le choix est %d",choixPrisonPrec);

    switch(choixPrisonPrec)
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
                printf("\nVous Sortez de prison");
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
                {   variableBoucle = 0;
                    if(tableauDeJoueur[j].libertePrison != 0 && j != tourActuel)
                    {
                        printf("%d. Demander une carte a %s \n",j+1,tableauDeJoueur[j].nomJoueur);
                        if(variableBoucle == 0)
                        {
                            j1 = j;
                        }
                        if(variableBoucle == 1)
                        {
                            j2 = j;
                        }
                        if(variableBoucle == 2)
                        {
                            j3 = j;
                        }
                        variableBoucle = variableBoucle + 1;
                    }
                }


                    do{
                            printf("%s êtes vous d'accord ? : ||OUI : 1||NON : 2|| : ",tableauDeJoueur[j1].nomJoueur);
                            fflush(stdin);
                            scanf("%d",&choixJoueur);
                    }while(choixJoueur != 0 && choixJoueur != 1);

                    if(choixJoueur == 1)
                    do{
                        printf("\nA quelle somme voulez vous l'echanger ? : ");
                        fflush(stdin);
                        scanf("%d",&prixEchange);
                    }while(prixEchange >0);

                    do{
                            printf("\n%s êtes vous d'accord ? : ||OUI : 1||NON : 2|| : ",tableauDeJoueur[tourActuel].nomJoueur);
                            fflush(stdin);
                            scanf("%d",&choixJoueur);
                    }while(choixJoueur != 0 && choixJoueur != 1);
                    if(choixJoueur == 1)
                    {
                        tableauDeJoueur[tourActuel].argent = tableauDeJoueur[tourActuel].argent - prixEchange;
                        tableauDeJoueur[j1].argent = tableauDeJoueur[j1].argent + prixEchange;
                        tableauDeJoueur[j1].libertePrison = tableauDeJoueur[j1].libertePrison - 1;
                        tableauDeJoueur[tourActuel].tourPrison = 0;
                        printf("\nVous sortez de prison.");
                    }
                    if(testCarteJoueur > 1 && choixJoueur == 0)
                    {
                        do{
                            printf("\n%s êtes vous d'accord ? : ||OUI : 1||NON : 2|| : ",tableauDeJoueur[j2].nomJoueur);
                            fflush(stdin);
                            scanf("%d",&choixJoueur);
                        }while(choixJoueur != 0 && choixJoueur != 1);

                        if(choixJoueur == 1)
                        do{
                            printf("\nA quelle somme voulez vous l'echanger ? : ");
                            fflush(stdin);
                            scanf("%d",&prixEchange);
                        }while(prixEchange >0);

                        do{
                                printf("%s êtes vous d'accord ? : ||OUI : 1||NON : 2|| : ",tableauDeJoueur[tourActuel].nomJoueur);
                                fflush(stdin);
                                scanf("%d",&choixJoueur);
                        }while(choixJoueur != 0 && choixJoueur != 1);
                        if(choixJoueur == 1)
                        {
                            tableauDeJoueur[tourActuel].argent = tableauDeJoueur[tourActuel].argent - prixEchange;
                            tableauDeJoueur[j2].argent = tableauDeJoueur[j2].argent + prixEchange;
                            tableauDeJoueur[j2].libertePrison = tableauDeJoueur[j2].libertePrison - 1;
                            tableauDeJoueur[tourActuel].tourPrison = 0;
                            printf("\nVous sortez de prison.");
                        }
                        if(testCarteJoueur > 2 && choixJoueur == 0)
                        {
                            do{
                            printf("\n%s êtes vous d'accord ? : ||OUI : 1||NON : 2|| : ",tableauDeJoueur[j3].nomJoueur);
                            fflush(stdin);
                            scanf("%d",&choixJoueur);
                            }while(choixJoueur != 0 && choixJoueur != 1);

                            if(choixJoueur == 1)
                            do{
                                printf("\nA quelle somme voulez vous l'echanger ? : ");
                                fflush(stdin);
                                scanf("%d",&prixEchange);
                            }while(prixEchange >0);

                            do{
                                    printf("\n%s êtes vous d'accord ? : ||OUI : 1||NON : 2|| : ",tableauDeJoueur[tourActuel].nomJoueur);
                                    fflush(stdin);
                                    scanf("%d",&choixJoueur);
                            }while(choixJoueur != 0 && choixJoueur != 1);
                            if(choixJoueur == 1)
                            {
                                tableauDeJoueur[tourActuel].argent = tableauDeJoueur[tourActuel].argent - prixEchange;
                                tableauDeJoueur[j3].argent = tableauDeJoueur[j3].argent + prixEchange;
                                tableauDeJoueur[j3].libertePrison = tableauDeJoueur[j3].libertePrison - 1;
                                tableauDeJoueur[tourActuel].tourPrison = 0;
                                printf("\nVous sortez de prison.");
                            }
                        }
                    }
            }
            break;
        }
    case 3:
        {
            lancerDeDes(&dee1,&dee2);
            afficherDe(dee1,dee2);
            if(dee1 == dee2)
            {
                printf("\nVous sortez de prison.");
                tableauDeJoueur[tourActuel].tourPrison = 0;
                tableauDeJoueur[tourActuel].position = tableauDeJoueur[tourActuel].position + (dee1 + dee2);
            }
            else
            {
              printf("\nVous restez de prison.");
            }
            break;
        }
    case 4:
        {
            printf("\nVous avez paye 50 credits pour sortir de prison.");
            tableauDeJoueur[tourActuel].argent = tableauDeJoueur[tourActuel].argent - 50 ;
            break;
        }
    case 5 :
        {
            break;
        }
    }

}
