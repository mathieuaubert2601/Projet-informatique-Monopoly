#include "header.h"
void hypotheque_faillite(joueur_t tabJoueur[], caseMonop tabC[],int *compteurMaisons, int *compteurHotels, int t)
{

        int compteur=0,casep;
        for (int i=0; i<28; i++)
        {
            if ((tabJoueur[t].possessions[i])!=0)
            {
                if (tabC[i].hypotheque!=0)
                {
                    compteur++;
                }
            }
        }
        if (compteur < tabJoueur[t].nbPropriete || tabJoueur[t].nbPropriete>0)
        {
            printf("Vous avez choisis d'hypothequer une propriete.\n");
            printf ("Vous avez les proprietes suivantes :\n");
            for (int i=0; i<28; i++)
            {
                if (tabC[i].proprieteDe==tabJoueur[t].numeroJoueur && tabC[casep].hypotheque != 1)
                {
                    printf(" %d : %s ",tabC[i].position,tabC[i].nomCase);
                }
            }
            do
            {
                printf("Veuillez entrer le numero de la propriete a hypothequer : ");
                fflush(stdin);
                scanf("%d\n",&casep);
            }
            while(tabC[casep].proprieteDe!=tabJoueur[t].numeroJoueur || tabC[casep].hypotheque == 1);








            ////////////////////////////////////////////////////////////////////////////////
            /////////////// HYPOTHEQUER SUR UNE CASE AVEC UN HOTEL//////////////////////////
            ////////////////////////////////////////////////////////////////////////////////
            int choix=0;
            if (tabC[casep].nbHotel==1 && tabC[casep].nbMaison==0)
            {
                printf("Vous avez un hotel sur cette propriete.\n");
                printf("Voulez vous continuer l'hypotheque ? Cela entrainera la destruction de votre hotel et vous recevrez %d credits .\n", ((tabC[casep].prix_case/8)*5+tabC[casep].couthyp));
                printf(" TAPEZ      1. OUI         OU         2. NON\n");
                fflush(stdin);
                scanf("%d",&choix);
                if ((choix!=1)&&(choix!=2))
                {
                    do
                    {
                        printf("\nVotre saisie n'est pas correcte. ENTREZ 1 OU 2.\n ");
                        scanf("%d",&choix);
                    }
                    while((choix!=1)&&(choix!=2));
                }
                else if ((choix==1)||(choix==2))
                {
                    if (choix==1)
                    {
                        tabJoueur[t].argent+=(tabC[casep].prix_case/8)*5;
                        tabC[casep].nbHotel=0;
                        tabJoueur[t].argent+=tabC[casep].couthyp;
                        tabC[casep].hypotheque=1;
                        *compteurHotels-=1;
                        printf("Vous avez bien hypotheque %s et reçu %d credits", tabC[casep].nomCase,((tabC[casep].prix_case/8)*5+tabC[casep].couthyp));
                    }
                    else if(choix == 2)
                    {
                        printf("Vous avez annule l'hypotheque de %s",tabC[casep].nomCase);
                    }
                }
            }


            ////////////////////////////////////////////////////////////////////////////////
            ////////////////HYPOTHEQUER SUR UNE CASE AVEC QUATRE MAISON/////////////////////
            ////////////////////////////////////////////////////////////////////////////////


            else if (tabC[casep].nbMaison==4)
            {
                printf("Vous avez 4 maisons sur cette propriete.\n");
                printf("Voulez vous continuer l'hypotheque ? Cela entrainera la destruction de vos maisons et vous recevrez %d credits .\n", ((tabC[casep].prix_case/8)*4+tabC[casep].couthyp));
                printf(" TAPEZ      1. OUI         OU         2. NON\n");
                fflush(stdin);
                scanf("%d",&choix);
                if ((choix!=1)&&(choix!=2))
                {
                    do
                    {
                        printf("\nVotre saisie n'est pas correcte. ENTREZ 1 OU 2.\n ");
                        scanf("%d",&choix);
                    }
                    while((choix!=1)&&(choix!=2));
                }
                else if ((choix==1)||(choix==2))
                {
                    if (choix==1)
                    {
                        tabJoueur[t].argent+=(tabC[casep].prix_case/8)*4;
                        tabC[casep].nbMaison=0;
                        tabJoueur[t].argent+=tabC[casep].couthyp;
                        tabC[casep].hypotheque=1;
                        *compteurMaisons-=4;
                        printf("Vous avez bien hypotheque %s et reçu %d credits", tabC[casep].nomCase,((tabC[casep].prix_case/8)*4+tabC[casep].couthyp));
                    }
                    else if(choix == 2)
                    {
                        printf("Vous avez annule l'hypotheque de %s",tabC[casep].nomCase);
                    }
                }
            }

            ////////////////////////////////////////////////////////////////////////////////
            ////////////////HYPOTHEQUER SUR UNE CASE AVEC TROIS MAISONS/////////////////////
            ////////////////////////////////////////////////////////////////////////////////

            else if (tabC[casep].nbMaison==3)
            {
                printf("Vous avez 3 maisons sur cette propriete.\n");
                printf("Voulez vous continuer l'hypotheque ? Cela entrainera la destruction de vos maisons et vous recevrez %d credits .\n", ((tabC[casep].prix_case/8)*3+tabC[casep].couthyp));
                printf(" TAPEZ      1. OUI         OU         2. NON\n");
                fflush(stdin);
                scanf("%d",&choix);
                if ((choix!=1)&&(choix!=2))
                {
                    do
                    {
                        printf("\nVotre saisie n'est pas correcte. ENTREZ 1 OU 2.\n ");
                        scanf("%d",&choix);
                    }
                    while((choix!=1)&&(choix!=2));
                }
                else if ((choix==1)||(choix==2))
                {
                    if (choix==1)
                    {
                        tabJoueur[t].argent+=(tabC[casep].prix_case/8)*3;
                        tabC[casep].nbMaison=0;
                        tabJoueur[t].argent+=tabC[casep].couthyp;
                        tabC[casep].hypotheque=1;
                        *compteurMaisons-=3;
                        printf("Vous avez bien hypotheque %s et reçu %d credits", tabC[casep].nomCase,((tabC[casep].prix_case/8)*3+tabC[casep].couthyp));
                    }
                    else if(choix == 2)
                    {
                        printf("Vous avez annule l'hypotheque de %s",tabC[casep].nomCase);
                    }
                }
            }
            ////////////////////////////////////////////////////////////////////////////////
            ////////////////HYPOTHEQUER SUR UNE CASE AVEC DEUX MAISONS//////////////////////
            ////////////////////////////////////////////////////////////////////////////////
            else if (tabC[casep].nbMaison==2)
            {
                printf("Vous avez 2 maisons sur cette propriete.\n");
                printf("Voulez vous continuer l'hypotheque ? Cela entrainera la destruction de vos maisons et vous recevrez %d credits .\n", ((tabC[casep].prix_case/8)*2+tabC[casep].couthyp));
                printf(" TAPEZ      1. OUI         OU         2. NON\n");
                fflush(stdin);
                scanf("%d",&choix);
                if ((choix!=1)&&(choix!=2))
                {
                    do
                    {
                        printf("\nVotre saisie n'est pas correcte. ENTREZ 1 OU 2.\n ");
                        scanf("%d",&choix);
                    }
                    while((choix!=1)&&(choix!=2));
                }
                else if ((choix==1)||(choix==2))
                {
                    if (choix==1)
                    {
                        tabJoueur[t].argent+=(tabC[casep].prix_case/8)*2;
                        tabC[casep].nbMaison=0;
                        tabJoueur[t].argent+=tabC[casep].couthyp;
                        tabC[casep].hypotheque=1;
                        *compteurMaisons-=2;
                        printf("Vous avez bien hypotheque %s et reçu %d credits", tabC[casep].nomCase,((tabC[casep].prix_case/8)*2+tabC[casep].couthyp));
                    }
                    else if(choix == 2)
                    {
                        printf("Vous avez annule l'hypotheque de %s",tabC[casep].nomCase);
                    }
                }
            }

            ////////////////////////////////////////////////////////////////////////////////
            ////////////////HYPOTHEQUER SUR UNE CASE AVEC UNE MAISON////////////////////////
            ////////////////////////////////////////////////////////////////////////////////
            else if (tabC[casep].nbMaison==1)
            {
                printf("Vous avez 1 maison sur cette propriete.\n");
                printf("Voulez vous continuer l'hypotheque ? Cela entrainera la destruction de votre maison et vous recevrez %d credits .\n", ((tabC[casep].prix_case/8)+tabC[casep].couthyp));
                printf(" TAPEZ      1. OUI         OU         2. NON\n");
                fflush(stdin);
                scanf("%d",&choix);
                if ((choix!=1)&&(choix!=2))
                {
                    do
                    {
                        printf("\nVotre saisie n'est pas correcte. ENTREZ 1 OU 2.\n ");
                        scanf("%d",&choix);
                    }
                    while((choix!=1)&&(choix!=2));
                }
                else if ((choix==1)||(choix==2))
                {
                    if (choix==1)
                    {
                        tabJoueur[t].argent+=(tabC[casep].prix_case/8);
                        tabC[casep].nbMaison=0;
                        tabJoueur[t].argent+=tabC[casep].couthyp;
                        tabC[casep].hypotheque=1;
                        *compteurMaisons-=1;
                        printf("Vous avez bien hypotheque %s et reçu %d credits", tabC[casep].nomCase,((tabC[casep].prix_case/8)+tabC[casep].couthyp));
                    }
                    else if(choix == 2)
                    {
                        printf("Vous avez annule l'hypotheque de %s",tabC[casep].nomCase);
                    }
                }
            }
            ////////////////////////////////////////////////////////////////////////////////
            ////////////////HYPOTHEQUER SUR UNE CASE AVEC AUCUNE MAISON/////////////////////
            ////////////////////////////////////////////////////////////////////////////////

            else if (tabC[casep].nbMaison==0)
            {
                printf("Voulez vous continuer l'hypotheque ? Vous recevrez %d credits .\n", tabC[casep].couthyp);
                printf(" TAPEZ      1. OUI         OU         2. NON\n");
                fflush(stdin);
                scanf("%d",&choix);
                if ((choix!=1)&&(choix!=2))
                {
                    do
                    {
                        printf("\nVotre saisie n'est pas correcte. ENTREZ 1 OU 2.\n ");
                        scanf("%d",&choix);
                    }
                    while((choix!=1)&&(choix!=2));
                }
                else if ((choix==1)||(choix==2))
                {
                    if (choix==1)
                    {
                        tabJoueur[t].argent+=tabC[casep].couthyp;
                        tabC[casep].hypotheque=1;
                        printf("Vous avez bien hypotheque %s et reçu %d credits", tabC[casep].nomCase,tabC[casep].couthyp);
                    }
                    else if(choix == 2)
                    {
                        printf("Vous avez annule l'hypotheque de %s",tabC[casep].nomCase);
                    }
                }
            }
        }
        else if (compteur >= tabJoueur[t].nbPropriete || tabJoueur[t].nbPropriete==0)
        {
            printf("VOUS N'AVEZ AUCUNE PROPRIETEE A HYPOTHEQUER.\n");
        }
    }

