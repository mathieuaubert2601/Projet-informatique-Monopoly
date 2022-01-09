#include "header.h"

void hypotheque(joueur_t tabJoueur[], caseMonop tabC[],int *compteurMaisons, int *compteurHotels, int t)
{
    int choixmenu,casep, valid;
    do
    {
        printf("Selectionnez votre choix : \n");
        printf(" 1. Hypothequer une propriete\n");
        printf(" 2. Lever une hypotheque a la banque\n");
        printf(" 3. Quitter ce menu.\n");
        fflush(stdin);
        scanf("%d",&choixmenu);
    }
    while(choixmenu<1 || choixmenu>3 );

    if (choixmenu==1)
    {
        int compteur=0;
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
                printf("\nVeuillez entrer le numero de la propriete a hypothequer : ");
                fflush(stdin);
                scanf("%d",&casep);
                printf("\n");
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
                if ((choix==1)||(choix==2))
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
                if ((choix==1)||(choix==2))
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
                if ((choix==1)||(choix==2))
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
                if ((choix==1)||(choix==2))
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
                if ((choix==1)||(choix==2))
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
                if ((choix==1)||(choix==2))
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
    else if (choixmenu==2)
    {

        int compteur=0;
        int choix;
        int prix;
        for (int j=0; j<28; j++)
        {
            if (tabJoueur[t].possessions[j]!=0)
            {
                if (tabC[j].hypotheque!=0)
                {
                    compteur++;
                }
            }
        }
        if(compteur!=0)
        {
            printf("Vous possedez les hypotheques suivantes :\n");
            for (int i=0; i<28; i++)
            {
                if (tabJoueur[t].possessions[i]!=0)
                {
                    if (tabC[i].hypotheque!=0)
                    {
                        printf("%d : %s ",i,tabC[i].nomCase);
                    }
                }
            }
            do
            {
                printf("De quelle propriete souhaitez vous lever l'hypotheque ?\n ");
                fflush(stdin);
                scanf("%d",&choix);
            }
            while(tabC[choix].proprieteDe==tabJoueur[t].numeroJoueur && tabC[choix].hypotheque == 1);
            do
            {
                printf("Souhaitez vous donc lever l'hypotheque de %s pour %d credits ? Accepter (1), refuser(0).\n", tabC[choix].nomCase, tabC[choix].couthyp+(tabC[choix].couthyp*0.1));
                fflush(stdin);
                scanf("%d",&valid);
            }
            while(valid!=0 && valid!=1);
            if (valid == 1)
            {
                prix=tabC[choix].couthyp+(tabC[choix].couthyp*0.1);
                tabJoueur[t].argent-= prix;
                tabC[choix].hypotheque=0;
                printf("Vous avez donc paye %d credits afin de lever l'hypotheque de %s\n",prix,tabC[choix].nomCase);
            }
            else if (valid == 0)
            {
                printf("Vous avez refuse de lever l'hypotheque de %s pour %d credits\n",tabC[choix].nomCase,prix);
            }

        }
        else if (compteur == 0)
        {
            printf("Vous ne possedez pas de propriete sous hypotheque.\n");
        }


    }


    else if (choixmenu==3)
    {
        printf("Vous quittez le menu.\n");
    }
}
