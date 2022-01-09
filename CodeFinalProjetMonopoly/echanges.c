#include "header.h"

void echange(joueur_t tabJoueur[],  caseMonop tabCases[],int *compteurMaisons, int *compteurHotels, int i, int nbJoueurs)
{
    int ligne=1;
    for(int i =0; i<nbJoueurs; i++)
    {
        Color(i+1,0);
        ligne+=4;
        gotoligcol(ligne-2,155);
        printf("%d.", tabJoueur[i].numeroJoueur);
        gotoligcol(ligne-1,155);
        printf("%s possede :",tabJoueur[i].nomJoueur);
        for(int j=1; j<28; j++)
        {
            if(tabJoueur[i].possessions[j]==j)
            {
                gotoligcol(ligne,156);
                printf(" %s",tabCases[j].nomCase);
                ligne++;

            }
        }
    }
    int joueurSelec, choixEchange1,choixEchange1_2, choixEchange2,choixEchange2_1, choixEchange2_2, validH, creditsJ1,creditsJ2, propriete1J1,propriete2J1, propriete1J2,propriete2J2, valid, nbPropJ1, nbPropJ2;
    do
    {
        gotoligcol(0,0);
        printf("Avec quel joueur souhaitez vous echanger ? veuillez selectionner son numero. Selectionner 0 pour quitter ce menu.\n");

        fflush(stdin);
        scanf("%d",&joueurSelec);
    }
    while((joueurSelec<0 || joueurSelec>nbJoueurs)|| joueurSelec-1==i);
    if (joueurSelec>=0)
    {
        do
        {
            printf("souhaitez vous lui echanger des credits(1) ou des proprietes(2) ? Selectionner 0 pour quitter ce menu.\n");
            fflush(stdin);
            scanf("%d", &choixEchange1);
        }
        while(choixEchange1<0 && choixEchange1>2);
        if (choixEchange1 == 1)
        {
            do
            {
                printf("Combien de credits voulez vous lui envoyer ? Vous possedez %d credits.\n",tabJoueur[i].argent);
                fflush(stdin);
                scanf("%d",&creditsJ1);
            }
            while(creditsJ1>tabJoueur[i].argent || creditsJ1<0);

            if (tabJoueur[joueurSelec-1].nbPropriete==0)
            {
                printf("%s n'a pas de propriete a echanger.\n",tabJoueur[joueurSelec-1].nomJoueur);
            }
            else if(tabJoueur[joueurSelec-1].nbPropriete!=0)
            {

                do
                {
                    printf("Contre combien de propriete de %s souhaitez vous echanger vos %d credits ? 2 maximum, %s possede %d propiete(s).\n",tabJoueur[joueurSelec-1].nomJoueur,creditsJ1,tabJoueur[joueurSelec-1].nomJoueur, tabJoueur[joueurSelec-1].nbPropriete);
                    fflush(stdin);
                    scanf("%d",&nbPropJ2);
                }
                while(nbPropJ2<1 || (nbPropJ2>2 || nbPropJ2>tabJoueur[joueurSelec-1].nbPropriete));
                if (nbPropJ2==1)
                {
                    do
                    {
                        printf("Contre quelle propriete de %s souhaitez vous echanger %d credits ?\n",tabJoueur[joueurSelec-1].nomJoueur,creditsJ1);
                        printf("%s  possede : \n");//Affichage des possessions
                        for (int j=0; j<28; j++)
                        {
                            if (tabJoueur[joueurSelec-1].possessions[j] != 0)
                            {
                                printf("%d(%s)\n",j,tabCases[j].nomCase);
                            }
                        }
                        fflush(stdin);
                        scanf("%d",&propriete1J2);
                    }
                    while(tabJoueur[joueurSelec-1].possessions[propriete1J2] == 0 );
                    do
                    {
                        printf("%s, souhaitez vous echanger %s contre %d credits avec %s ? Saisir 1 pour valider ou 0 pour refuser.\n",tabJoueur[joueurSelec-1].nomJoueur,tabCases[propriete1J2].nomCase, creditsJ1, tabJoueur[i].nomJoueur);
                        fflush(stdin);
                        scanf("%d", &valid);

                    }
                    while(valid !=0 && valid !=1);
                    if (valid == 1)
                    {
                        if (tabCases[propriete1J2].hypotheque == 1)
                        {
                            do
                            {
                                printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete1J2].nomCase,tabJoueur[i].nomJoueur, (tabCases[propriete1J2].couthyp*0.10)+tabCases[propriete1J2].couthyp,tabCases[propriete1J2].couthyp*0.10);
                                fflush(stdin);
                                scanf("%d", &validH);
                            }
                            while(validH != 1 || validH != 2);
                            if (validH == 1)
                            {
                                tabJoueur[i].argent -= (tabCases[propriete1J2].couthyp*0.10)+tabCases[propriete1J2].couthyp;
                                tabCases[propriete1J2].hypotheque = 0;
                            }
                            else if (validH == 0)
                            {
                                tabJoueur[i].argent -= tabCases[propriete1J2].couthyp*0.10;
                            }

                        }
                        tabJoueur[i].argent -= creditsJ1;
                        tabJoueur[joueurSelec-1].argent += creditsJ1;

                        tabJoueur[i].nbPropriete+=1;
                        tabJoueur[joueurSelec-1].nbPropriete-=1;

                        tabJoueur[i].possessions[propriete1J2]= propriete1J2;
                        tabJoueur[joueurSelec-1].possessions[propriete1J2]=0;

                        tabJoueur[i].familles[tabCases[propriete1J2].famille]+=1;
                        tabJoueur[joueurSelec-1].familles[tabCases[propriete1J2].famille]-=1;

                        *compteurHotels -= tabCases[propriete1J2].nbHotel;
                        *compteurMaisons -= tabCases[propriete1J2].nbMaison;

                        tabCases[propriete1J2].proprieteDe = tabJoueur[i].numeroJoueur;
                        tabCases[propriete1J2].nbMaison = 0;
                        tabCases[propriete1J2].nbHotel = 0;

                        printf("%s a bien echange %d credits contre %s de %s.\n",tabJoueur[i].nomJoueur, creditsJ1, tabCases[propriete1J2].nomCase, tabJoueur[joueurSelec-1]);
                    }
                    else if (valid==0)
                    {
                        printf("l'echange a ete refuse par %s\n", tabJoueur[joueurSelec-1]);
                    }

                }
                else if(nbPropJ2 == 2);
                {
                    do
                    {
                        printf("Contre quelles proprietes de %s souhaitez vous echanger %d credits ?\n",tabJoueur[joueurSelec-1].nomJoueur,creditsJ1);
                        printf("%s  possede : \n", tabJoueur[joueurSelec-1].nomJoueur);//Affichage des possessions
                        for (int j=0; j<28; j++)
                        {
                            if (tabJoueur[joueurSelec-1].possessions[j] != 0)
                            {
                                printf("%d(%s)\n",j,tabCases[j].nomCase);
                            }
                        }
                        printf("Selectionner premiere propriete.\n");
                        fflush(stdin);
                        scanf("%d",&propriete1J2);
                    }
                    while(tabJoueur[joueurSelec-1].possessions[propriete1J2] == 0 );
                    do
                    {
                        printf("Selectionner deuxieme propriete\n");
                        fflush(stdin);
                        scanf("%d",&propriete2J2);
                    }
                    while(tabJoueur[joueurSelec-1].possessions[propriete2J2] == 0 && propriete2J2==propriete1J2);

                    do
                    {
                        printf("%s, souhaitez vous echanger %s et %s contre %d credits avec %s ? Saisir 1 pour valider ou 0 pour refuser.\n",tabJoueur[joueurSelec-1].nomJoueur,tabCases[propriete1J2].nomCase, tabCases[propriete2J2].nomCase, creditsJ1, tabJoueur[i].nomJoueur);
                        fflush(stdin);
                        scanf("%d", &valid);

                    }
                    while(valid !=0 && valid !=1);
                    if (valid == 1)
                    {
                        if (tabCases[propriete1J2].hypotheque == 1)
                        {
                            do
                            {
                                printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete1J2].nomCase,tabJoueur[i].nomJoueur, (tabCases[propriete1J2].couthyp*0.10)+tabCases[propriete1J2].couthyp,tabCases[propriete1J2].couthyp*0.10);
                                fflush(stdin);
                                scanf("%d", &validH);
                            }
                            while(validH != 1 || validH != 2);
                            if (validH == 1)
                            {
                                tabJoueur[i].argent -= (tabCases[propriete1J2].couthyp*0.10)+tabCases[propriete1J2].couthyp;
                                tabCases[propriete1J2].hypotheque = 0;
                            }
                            else if (validH == 0)
                            {
                                tabJoueur[i].argent -= tabCases[propriete1J2].couthyp*0.10;
                            }

                        }
                        if (tabCases[propriete2J2].hypotheque == 1)
                        {
                            do
                            {
                                printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete1J2].nomCase,tabJoueur[i].nomJoueur, (tabCases[propriete1J2].couthyp*0.10)+tabCases[propriete1J2].couthyp,tabCases[propriete1J2].couthyp*0.10);
                                fflush(stdin);
                                scanf("%d", &validH);
                            }
                            while(validH != 1 || validH != 2);
                            if (validH == 1)
                            {
                                tabJoueur[i].argent -= (tabCases[propriete2J2].couthyp*0.10)+tabCases[propriete2J2].couthyp;
                                tabCases[propriete2J2].hypotheque = 0;
                            }
                            else if (validH == 0)
                            {
                                tabJoueur[i].argent -= tabCases[propriete2J2].couthyp*0.10;
                            }

                        }
                        //echange argent//
                        tabJoueur[i].argent -= creditsJ1;
                        tabJoueur[joueurSelec-1].argent += creditsJ1;

                        //echange proprieteJ2_1//
                        tabJoueur[i].nbPropriete+=1;
                        tabJoueur[joueurSelec-1].nbPropriete-=1;

                        tabJoueur[i].possessions[propriete1J2]= propriete1J2;
                        tabJoueur[joueurSelec-1].possessions[propriete1J2]=0;

                        tabJoueur[i].familles[tabCases[propriete1J2].famille]+=1;
                        tabJoueur[joueurSelec-1].familles[tabCases[propriete1J2].famille]-=1;

                        *compteurHotels -= tabCases[propriete1J2].nbHotel;
                        *compteurMaisons -= tabCases[propriete1J2].nbMaison;

                        tabCases[propriete1J2].proprieteDe = tabJoueur[i].numeroJoueur;
                        tabCases[propriete1J2].nbMaison = 0;
                        tabCases[propriete1J2].nbHotel = 0;


                        //echange proprieteJ2_2//
                        tabJoueur[i].nbPropriete+=1;
                        tabJoueur[joueurSelec-1].nbPropriete-=1;

                        tabJoueur[i].possessions[propriete2J2]= propriete2J2;
                        tabJoueur[joueurSelec-1].possessions[propriete2J2]=0;

                        tabJoueur[i].familles[tabCases[propriete2J2].famille]+=1;
                        tabJoueur[joueurSelec-1].familles[tabCases[propriete2J2].famille]-=1;

                        *compteurHotels -= tabCases[propriete2J2].nbHotel;
                        *compteurMaisons -= tabCases[propriete2J2].nbMaison;

                        tabCases[propriete2J2].proprieteDe = tabJoueur[i].numeroJoueur;
                        tabCases[propriete2J2].nbMaison = 0;
                        tabCases[propriete2J2].nbHotel = 0;


                        printf("%s a bien echange %d credits contre %s et %s avec %s\n",tabJoueur[i].nomJoueur, creditsJ1, tabCases[propriete1J2].nomCase, tabCases[propriete2J2].nomCase, tabJoueur[joueurSelec-1].nomJoueur);
                    }
                    else if (valid==0)
                    {
                        printf("l'echange a ete refuse par %s\n", tabJoueur[joueurSelec-1]);
                    }

                }
            }


        }
        else if (choixEchange1 == 2)
            do
            {
                printf("combien de propriete souhaitez vous echanger? Maximum 2. Vous en possedez :%d\n", tabJoueur[i].nbPropriete);
                fflush(stdin);
                scanf("%d",&nbPropJ1);
            }
            while(nbPropJ1<0 || (nbPropJ1>2 || nbPropJ1>tabJoueur[i].nbPropriete));
        if (tabJoueur[i].nbPropriete==0)
        {
            printf("vous n'avez pas de propriete a echanger.\n");
        }
        else if(tabJoueur[i].nbPropriete!=0)
        {
            if (nbPropJ1 == 1)
            {
                do
                {
                    printf("Quelle propriete souhaitez vous echanger ? vous possedez :\n");
                    for (int j=0; j<28; j++)
                    {
                        if (tabJoueur[i].possessions[j] != 0)
                        {
                            printf("%d(%s)\n",j,tabCases[j].nomCase);
                        }
                    }
                    fflush(stdin);
                    scanf("%d",&propriete1J1);
                }
                while(tabJoueur[i].possessions[propriete1J1] == 0 );

                do
                {
                    printf("Contre quoi souhaitez vous echanger %s ? des credits(1)? ou une/des proprietes(2) ?\n", tabCases[propriete1J1].nomCase);
                    fflush(stdin);
                    scanf("%d",&choixEchange2_1);
                }
                while(choixEchange2_1!=1 && choixEchange2_1!=2);
                if (choixEchange2_1 == 1)
                {
                    do
                    {
                        printf("Contre combien de credits souhaitez vous echanger %s ? %s possede : %d credits\n",tabCases[propriete1J1].nomCase, tabJoueur[joueurSelec-1].nomJoueur, tabJoueur[joueurSelec-1].argent);
                        fflush(stdin);
                        scanf("%d", &creditsJ2);
                    }
                    while(creditsJ2<0 || creditsJ2>tabJoueur[joueurSelec-1].argent);

                    do
                    {
                        printf("%s souhaitez vous recevoir %s contre %d credits? Saisir 1 pour valider ou 0 pour refuser\n", tabJoueur[joueurSelec-1].nomJoueur, tabCases[propriete1J1].nomCase, creditsJ2);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid !=0 && valid !=1);
                    if (valid==1)
                    {
                        if (tabCases[propriete1J1].hypotheque == 1)
                        {
                            do
                            {
                                printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete1J1].nomCase,tabJoueur[joueurSelec-1].nomJoueur, (tabCases[propriete1J1].couthyp*0.10)+tabCases[propriete1J1].couthyp,tabCases[propriete1J1].couthyp*0.10);
                                fflush(stdin);
                                scanf("%d", &validH);
                            }
                            while(validH != 1 || validH != 2);
                            if (validH == 1)
                            {
                                tabJoueur[joueurSelec-1].argent -= (tabCases[propriete1J1].couthyp*0.10)+tabCases[propriete1J1].couthyp;
                                tabCases[propriete1J1].hypotheque = 0;
                            }
                            else if (validH == 0)
                            {
                                tabJoueur[joueurSelec-1].argent -= tabCases[propriete1J1].couthyp*0.10;
                            }

                        }
                        tabJoueur[i].argent += creditsJ2;
                        tabJoueur[joueurSelec-1].argent -= creditsJ2;

                        tabJoueur[joueurSelec-1].nbPropriete+=1;
                        tabJoueur[i].nbPropriete-=1;

                        tabJoueur[joueurSelec-1].possessions[propriete1J1]= propriete1J1;
                        tabJoueur[i].possessions[propriete1J1]=0;

                        tabJoueur[joueurSelec-1].familles[tabCases[propriete1J1].famille]+=1;
                        tabJoueur[i].familles[tabCases[propriete1J1].famille]-=1;

                        *compteurHotels -= tabCases[propriete1J1].nbHotel;
                        *compteurMaisons -= tabCases[propriete1J1].nbMaison;

                        tabCases[propriete1J1].proprieteDe = tabJoueur[joueurSelec-1].numeroJoueur;
                        tabCases[propriete1J1].nbMaison = 0;
                        tabCases[propriete1J1].nbHotel = 0;

                        printf("%s a echange %s contre %d credits avec %s\n",tabJoueur[i].nomJoueur, tabCases[propriete1J1].nomCase, creditsJ2, tabJoueur[joueurSelec-1].nomJoueur);
                    }
                    else if(valid == 0)
                    {
                        printf("%s a refuse l'echange.\n",tabJoueur[joueurSelec-1].nomJoueur);
                    }
                }
                else if (choixEchange2_1==2)
                {
                    if (tabJoueur[joueurSelec-1].nbPropriete==0)
                    {
                        printf("%s n'a pas de propriete a echanger.\n",tabJoueur[joueurSelec-1].nomJoueur);
                    }
                    else if(tabJoueur[joueurSelec-1].nbPropriete!=0)
                    {
                        do
                        {
                            printf("Contre combien de propriete de %s souhaitez vous echanger %s ? 2 maximum, %s possede %d propiete(s).\n",tabJoueur[joueurSelec-1].nomJoueur,tabCases[propriete1J1].nomCase,tabJoueur[joueurSelec-1].nomJoueur, tabJoueur[joueurSelec-1].nbPropriete);
                            fflush(stdin);
                            scanf("%d",&nbPropJ2);
                        }
                        while(nbPropJ2<0 || (nbPropJ2>2 || nbPropJ2>tabJoueur[joueurSelec-1].nbPropriete));
                        if (nbPropJ2==1)
                        {
                            do
                            {
                                printf("Contre quelle propriete de %s souhaitez vous echanger %s ?\n",tabJoueur[joueurSelec-1].nomJoueur,tabCases[propriete1J1].nomCase);
                                printf("%s  possede : \n",tabJoueur[joueurSelec-1].nomJoueur);//Affichage des possessions
                                for (int j=0; j<28; j++)
                                {
                                    if (tabJoueur[joueurSelec-1].possessions[j] != 0)
                                    {
                                        printf("%d(%s)\n",j,tabCases[j].nomCase);
                                    }
                                }
                                fflush(stdin);
                                scanf("%d",&propriete1J2);
                            }
                            while(tabJoueur[joueurSelec-1].possessions[propriete1J2] == 0 );
                            do
                            {
                                printf("%s, souhaitez vous echanger %s contre %s avec %s ? Saisir 1 pour valider ou 0 pour refuser.\n",tabJoueur[joueurSelec-1].nomJoueur,tabCases[propriete1J2].nomCase, tabCases[propriete1J1].nomCase, tabJoueur[i].nomJoueur);
                                fflush(stdin);
                                scanf("%d", &valid);

                            }
                            while(valid !=0 && valid !=1);

                            if (valid == 1)
                            {
                                if (tabCases[propriete1J1].hypotheque == 1)
                                {
                                    do
                                    {
                                        printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete1J1].nomCase,tabJoueur[joueurSelec-1].nomJoueur, (tabCases[propriete1J1].couthyp*0.10)+tabCases[propriete1J1].couthyp,tabCases[propriete1J1].couthyp*0.10);
                                        fflush(stdin);
                                        scanf("%d", &validH);
                                    }
                                    while(validH != 1 || validH != 2);
                                    if (validH == 1)
                                    {
                                        tabJoueur[joueurSelec-1].argent -= (tabCases[propriete1J1].couthyp*0.10)+tabCases[propriete1J1].couthyp;
                                        tabCases[propriete1J1].hypotheque = 0;
                                    }
                                    else if (validH == 0)
                                    {
                                        tabJoueur[joueurSelec-1].argent -= tabCases[propriete1J1].couthyp*0.10;
                                    }

                                }
                                if (tabCases[propriete1J2].hypotheque == 1)
                                {
                                    do
                                    {
                                        printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete1J2].nomCase,tabJoueur[i].nomJoueur, (tabCases[propriete1J2].couthyp*0.10)+tabCases[propriete1J2].couthyp,tabCases[propriete1J2].couthyp*0.10);
                                        fflush(stdin);
                                        scanf("%d", &validH);
                                    }
                                    while(validH != 1 || validH != 2);
                                    if (validH == 1)
                                    {
                                        tabJoueur[i].argent -= (tabCases[propriete1J2].couthyp*0.10)+tabCases[propriete1J2].couthyp;
                                        tabCases[propriete1J2].hypotheque = 0;
                                    }
                                    else if (validH == 0)
                                    {
                                        tabJoueur[i].argent -= tabCases[propriete1J2].couthyp*0.10;
                                    }

                                }
                                // echange propJ1
                                tabJoueur[joueurSelec-1].nbPropriete+=1;
                                tabJoueur[i].nbPropriete-=1;

                                tabJoueur[joueurSelec-1].possessions[propriete1J1]= propriete1J1;
                                tabJoueur[i].possessions[propriete1J1]=0;

                                tabJoueur[joueurSelec-1].familles[tabCases[propriete1J1].famille]+=1;
                                tabJoueur[i].familles[tabCases[propriete1J1].famille]-=1;

                                *compteurHotels -= tabCases[propriete1J1].nbHotel;
                                *compteurMaisons -= tabCases[propriete1J1].nbMaison;

                                tabCases[propriete1J1].proprieteDe = tabJoueur[joueurSelec-1].numeroJoueur;
                                tabCases[propriete1J1].nbMaison = 0;
                                tabCases[propriete1J1].nbHotel = 0;


                                // echange propJ2
                                tabJoueur[i].nbPropriete+=1;
                                tabJoueur[joueurSelec-1].nbPropriete-=1;

                                tabJoueur[i].possessions[propriete1J2]= propriete1J2;
                                tabJoueur[joueurSelec-1].possessions[propriete1J2]=0;

                                tabJoueur[i].familles[tabCases[propriete1J2].famille]+=1;
                                tabJoueur[joueurSelec-1].familles[tabCases[propriete1J2].famille]-=1;

                                *compteurHotels -= tabCases[propriete1J2].nbHotel;
                                *compteurMaisons -= tabCases[propriete1J2].nbMaison;

                                tabCases[propriete1J2].proprieteDe = tabJoueur[i].numeroJoueur;
                                tabCases[propriete1J2].nbMaison = 0;
                                tabCases[propriete1J2].nbHotel = 0;


                                printf("%s a echange %s contre %s de %s\n",tabJoueur[i].nomJoueur,tabCases[propriete1J1].nomCase, tabCases[propriete1J2].nomCase, tabJoueur[joueurSelec-1].nomJoueur);
                            }
                            else if (valid == 0)
                            {
                                printf("%s a refuse l'echange\n",tabJoueur[joueurSelec-1].nomJoueur);
                            }
                        }
                        else if (nbPropJ2==2)
                        {
                            do
                            {
                                printf("Contre quelles proprietes de %s souhaitez vous echanger %s ?\n",tabJoueur[joueurSelec-1].nomJoueur,tabCases[propriete1J1].nomCase);
                                printf("%s  possede : \n",tabJoueur[joueurSelec-1].nomJoueur);//Affichage des possessions
                                for (int j=0; j<28; j++)
                                {
                                    if (tabJoueur[joueurSelec-1].possessions[j] != 0)
                                    {
                                        printf("%d(%s)\n",j,tabCases[j].nomCase);
                                    }
                                }
                                printf("Selectionner premiere propriete.\n");
                                fflush(stdin);
                                scanf("%d",&propriete1J2);
                            }
                            while(tabJoueur[joueurSelec-1].possessions[propriete1J2] == 0 );
                            do
                            {
                                printf("Selectionner deuxieme propriete\n");
                                fflush(stdin);
                                scanf("%d",&propriete2J2);
                            }
                            while(tabJoueur[joueurSelec-1].possessions[propriete2J2] == 0 && propriete2J2==propriete1J2);

                            do
                            {
                                printf("%s, souhaitez vous echanger %s et %s contre %s avec %s ? Saisir 1 pour valider ou 0 pour refuser.\n",tabJoueur[joueurSelec-1].nomJoueur,tabCases[propriete1J2].nomCase, tabCases[propriete2J2].nomCase, tabCases[propriete1J1].nomCase, tabJoueur[i].nomJoueur);
                                fflush(stdin);
                                scanf("%d", &valid);
                            }
                            while(valid !=0 && valid !=1);

                            if (valid==1)
                            {
                                if (tabCases[propriete1J1].hypotheque == 1)
                                {
                                    do
                                    {
                                        printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete1J1].nomCase,tabJoueur[joueurSelec-1].nomJoueur, (tabCases[propriete1J1].couthyp*0.10)+tabCases[propriete1J1].couthyp,tabCases[propriete1J1].couthyp*0.10);
                                        fflush(stdin);
                                        scanf("%d", &validH);
                                    }
                                    while(validH != 1 || validH != 2);
                                    if (validH == 1)
                                    {
                                        tabJoueur[joueurSelec-1].argent -= (tabCases[propriete1J1].couthyp*0.10)+tabCases[propriete1J1].couthyp;
                                        tabCases[propriete1J1].hypotheque = 0;
                                    }
                                    else if (validH == 0)
                                    {
                                        tabJoueur[joueurSelec-1].argent -= tabCases[propriete1J1].couthyp*0.10;
                                    }

                                }
                                if (tabCases[propriete1J2].hypotheque == 1)
                                {
                                    do
                                    {
                                        printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete1J2].nomCase,tabJoueur[i].nomJoueur, (tabCases[propriete1J2].couthyp*0.10)+tabCases[propriete1J2].couthyp,tabCases[propriete1J2].couthyp*0.10);
                                        fflush(stdin);
                                        scanf("%d", &validH);
                                    }
                                    while(validH != 1 || validH != 2);
                                    if (validH == 1)
                                    {
                                        tabJoueur[i].argent -= (tabCases[propriete1J2].couthyp*0.10)+tabCases[propriete1J2].couthyp;
                                        tabCases[propriete1J2].hypotheque = 0;
                                    }
                                    else if (validH == 0)
                                    {
                                        tabJoueur[i].argent -= tabCases[propriete1J2].couthyp*0.10;
                                    }

                                }
                                if (tabCases[propriete2J2].hypotheque == 1)
                                {
                                    do
                                    {
                                        printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete1J2].nomCase,tabJoueur[i].nomJoueur, (tabCases[propriete1J2].couthyp*0.10)+tabCases[propriete1J2].couthyp,tabCases[propriete1J2].couthyp*0.10);
                                        fflush(stdin);
                                        scanf("%d", &validH);
                                    }
                                    while(validH != 1 || validH != 2);
                                    if (validH == 1)
                                    {
                                        tabJoueur[i].argent -= (tabCases[propriete2J2].couthyp*0.10)+tabCases[propriete2J2].couthyp;
                                        tabCases[propriete2J2].hypotheque = 0;
                                    }
                                    else if (validH == 0)
                                    {
                                        tabJoueur[i].argent -= tabCases[propriete2J2].couthyp*0.10;
                                    }

                                }
                                // echange propJ1
                                tabJoueur[joueurSelec-1].nbPropriete+=1;
                                tabJoueur[i].nbPropriete-=1;

                                tabJoueur[joueurSelec-1].possessions[propriete1J1]= propriete1J1;
                                tabJoueur[i].possessions[propriete1J1]=0;

                                tabJoueur[joueurSelec-1].familles[tabCases[propriete1J1].famille]+=1;
                                tabJoueur[i].familles[tabCases[propriete1J1].famille]-=1;

                                *compteurHotels -= tabCases[propriete1J1].nbHotel;
                                *compteurMaisons -= tabCases[propriete1J1].nbMaison;

                                tabCases[propriete1J1].proprieteDe = tabJoueur[joueurSelec-1].numeroJoueur;
                                tabCases[propriete1J1].nbMaison = 0;
                                tabCases[propriete1J1].nbHotel = 0;


                                // echange propJ2
                                tabJoueur[i].nbPropriete+=1;
                                tabJoueur[joueurSelec-1].nbPropriete-=1;

                                tabJoueur[i].possessions[propriete1J2]= propriete1J2;
                                tabJoueur[joueurSelec-1].possessions[propriete1J2]=0;

                                tabJoueur[i].familles[tabCases[propriete1J2].famille]+=1;
                                tabJoueur[joueurSelec-1].familles[tabCases[propriete1J2].famille]-=1;

                                *compteurHotels -= tabCases[propriete1J2].nbHotel;
                                *compteurMaisons -= tabCases[propriete1J2].nbMaison;

                                tabCases[propriete1J2].proprieteDe = tabJoueur[i].numeroJoueur;
                                tabCases[propriete1J2].nbMaison = 0;
                                tabCases[propriete1J2].nbHotel = 0;


                                // echange prop2J2
                                tabJoueur[i].nbPropriete+=1;
                                tabJoueur[joueurSelec-1].nbPropriete-=1;

                                tabJoueur[i].possessions[propriete2J2]= propriete2J2;
                                tabJoueur[joueurSelec-1].possessions[propriete2J2]=0;

                                tabJoueur[i].familles[tabCases[propriete2J2].famille]+=1;
                                tabJoueur[joueurSelec-1].familles[tabCases[propriete2J2].famille]-=1;

                                *compteurHotels -= tabCases[propriete2J2].nbHotel;
                                *compteurMaisons -= tabCases[propriete2J2].nbMaison;

                                tabCases[propriete2J2].proprieteDe = tabJoueur[i].numeroJoueur;
                                tabCases[propriete2J2].nbMaison = 0;
                                tabCases[propriete2J2].nbHotel = 0;


                                printf("%s a echange %s contre %s et %s avec %s\n",tabJoueur[i].nomJoueur,tabCases[propriete1J1].nomCase, tabCases[propriete1J2].nomCase, tabCases[propriete2J2].nomCase, tabJoueur[joueurSelec-1].nomJoueur);
                            }
                            else if(valid==0)
                            {
                                printf("%s a refuse l'echange",tabJoueur[joueurSelec-1].nomJoueur);
                            }
                        }

                    }
                }
            }
            else if(nbPropJ1 == 2)
            {
                do
                {
                    printf("Quelles proprietes souhaitez vous echanger ? vous possedez :\n");
                    for (int j=0; j<28; j++)
                    {
                        if (tabJoueur[i].possessions[j] != 0)
                        {
                            printf("%d(%s)\n",j,tabCases[j].nomCase);
                        }
                    }
                    fflush(stdin);
                    scanf("%d",&propriete1J1);
                }
                while(tabJoueur[i].possessions[propriete1J1] == 0 );

                do
                {
                    printf("Selectionner deuxieme propriete\n");
                    fflush(stdin);
                    scanf("%d",&propriete2J1);
                }
                while(tabJoueur[i].possessions[propriete2J1] == 0 && propriete2J1==propriete1J1);

                do
                {
                    printf("Contre quoi souhaitez vous echanger %s et %s ? des credits(1)? ou une/des proprietes(2) ?\n", tabCases[propriete1J1].nomCase, tabCases[propriete2J1].nomCase);
                    fflush(stdin);
                    scanf("%d",&choixEchange2_2);
                }
                while(choixEchange2_2!=1 && choixEchange2_2!=2);
                if (choixEchange2_2 == 1)
                {
                    do
                    {
                        printf("Contre combien de credits souhaitez vous echanger %s et %s ? %s possede : %d credits\n",tabCases[propriete1J1].nomCase, tabCases[propriete2J1].nomCase, tabJoueur[joueurSelec-1].nomJoueur, tabJoueur[joueurSelec-1].argent);
                        fflush(stdin);
                        scanf("%d", &creditsJ2);
                    }
                    while(creditsJ2<0 || creditsJ2>tabJoueur[joueurSelec-1].argent);

                    do
                    {
                        printf("%s souhaitez vous recevoir %s et %s contre %d credits? Saisir 1 pour valider ou 0 pour refuser\n", tabJoueur[joueurSelec-1].nomJoueur, tabCases[propriete1J1].nomCase, tabCases[propriete2J1].nomCase, creditsJ2);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid !=0 && valid !=1);
                    if (valid==1)
                    {
                        if (tabCases[propriete1J1].hypotheque == 1)
                                {
                                    do
                                    {
                                        printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete1J1].nomCase,tabJoueur[joueurSelec-1].nomJoueur, (tabCases[propriete1J1].couthyp*0.10)+tabCases[propriete1J1].couthyp,tabCases[propriete1J1].couthyp*0.10);
                                        fflush(stdin);
                                        scanf("%d", &validH);
                                    }
                                    while(validH != 1 || validH != 2);
                                    if (validH == 1)
                                    {
                                        tabJoueur[joueurSelec-1].argent -= (tabCases[propriete1J1].couthyp*0.10)+tabCases[propriete1J1].couthyp;
                                        tabCases[propriete1J1].hypotheque = 0;
                                    }
                                    else if (validH == 0)
                                    {
                                        tabJoueur[joueurSelec-1].argent -= tabCases[propriete1J1].couthyp*0.10;
                                    }

                                }
                                if (tabCases[propriete2J1].hypotheque == 1)
                                {
                                    do
                                    {
                                        printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete2J1].nomCase,tabJoueur[i].nomJoueur, (tabCases[propriete2J1].couthyp*0.10)+tabCases[propriete2J1].couthyp,tabCases[propriete2J1].couthyp*0.10);
                                        fflush(stdin);
                                        scanf("%d", &validH);
                                    }
                                    while(validH != 1 || validH != 2);
                                    if (validH == 1)
                                    {
                                        tabJoueur[i].argent -= (tabCases[propriete2J1].couthyp*0.10)+tabCases[propriete2J1].couthyp;
                                        tabCases[propriete2J1].hypotheque = 0;
                                    }
                                    else if (validH == 0)
                                    {
                                        tabJoueur[i].argent -= tabCases[propriete2J1].couthyp*0.10;
                                    }

                                }
                        // echange argent
                        tabJoueur[i].argent += creditsJ2;
                        tabJoueur[joueurSelec-1].argent -= creditsJ2;

                        //echange prop1J1
                        tabJoueur[joueurSelec-1].nbPropriete+=1;
                        tabJoueur[i].nbPropriete-=1;

                        tabJoueur[joueurSelec-1].possessions[propriete1J1]= propriete1J1;
                        tabJoueur[i].possessions[propriete1J1]=0;

                        tabJoueur[joueurSelec-1].familles[tabCases[propriete1J1].famille]+=1;
                        tabJoueur[i].familles[tabCases[propriete1J1].famille]-=1;

                        *compteurHotels -= tabCases[propriete1J1].nbHotel;
                        *compteurMaisons -= tabCases[propriete1J1].nbMaison;

                        tabCases[propriete1J1].proprieteDe = tabJoueur[joueurSelec-1].numeroJoueur;
                        tabCases[propriete1J1].nbMaison = 0;
                        tabCases[propriete1J1].nbHotel = 0;

                        //echange prop2J1
                        tabJoueur[joueurSelec-1].nbPropriete+=1;
                        tabJoueur[i].nbPropriete-=1;

                        tabJoueur[joueurSelec-1].possessions[propriete2J1]= propriete2J1;
                        tabJoueur[i].possessions[propriete2J1]=0;

                        tabJoueur[joueurSelec-1].familles[tabCases[propriete2J1].famille]+=1;
                        tabJoueur[i].familles[tabCases[propriete2J1].famille]-=1;

                        *compteurHotels -= tabCases[propriete2J1].nbHotel;
                        *compteurMaisons -= tabCases[propriete2J1].nbMaison;

                        tabCases[propriete2J1].proprieteDe = tabJoueur[joueurSelec-1].numeroJoueur;
                        tabCases[propriete2J1].nbMaison = 0;
                        tabCases[propriete2J1].nbHotel = 0;


                        printf("%s a echange %s et %s contre %d credits avec %s\n",tabJoueur[i].nomJoueur, tabCases[propriete1J1].nomCase, tabCases[propriete2J1].nomCase, creditsJ2, tabJoueur[joueurSelec-1].nomJoueur);
                    }
                    else if(valid == 0)
                    {
                        printf("%s a refuse l'echange.\n",tabJoueur[joueurSelec-1].nomJoueur);
                    }
                }
                else if (choixEchange2_2==2)
                {
                    if (tabJoueur[joueurSelec-1].nbPropriete==0)
                    {
                        printf("%s n'a pas de propriete a echanger.\n",tabJoueur[joueurSelec-1].nomJoueur);
                    }
                    else if(tabJoueur[joueurSelec-1].nbPropriete!=0)
                    {
                        do
                        {
                            printf("Contre combien de propriete de %s souhaitez vous echanger %s et %s ? 2 maximum, %s possede %d propiete(s).\n",tabJoueur[joueurSelec-1].nomJoueur,tabCases[propriete1J1].nomCase, tabCases[propriete2J1].nomCase,tabJoueur[joueurSelec-1].nomJoueur, tabJoueur[joueurSelec-1].nbPropriete);
                            fflush(stdin);
                            scanf("%d",&nbPropJ2);
                        }
                        while(nbPropJ2<0 || (nbPropJ2>2 || nbPropJ2>tabJoueur[joueurSelec-1].nbPropriete));
                        if (nbPropJ2==1)
                        {
                            do
                            {
                                printf("Contre quelle propriete de %s souhaitez vous echanger %s et %S ?\n",tabJoueur[joueurSelec-1].nomJoueur,tabCases[propriete1J1].nomCase, tabCases[propriete2J1].nomCase);
                                printf("%s  possede : \n",tabJoueur[joueurSelec-1].nomJoueur);//Affichage des possessions
                                for (int j=0; j<28; j++)
                                {
                                    if (tabJoueur[joueurSelec-1].possessions[j] != 0)
                                    {
                                        printf("%d(%s)\n",j,tabCases[j].nomCase);
                                    }
                                }
                                fflush(stdin);
                                scanf("%d",&propriete1J2);
                            }
                            while(tabJoueur[joueurSelec-1].possessions[propriete1J2] == 0 );
                            do
                            {
                                printf("%s, souhaitez vous echanger %s contre %s et %s avec %s ? Saisir 1 pour valider ou 0 pour refuser.\n",tabJoueur[joueurSelec-1].nomJoueur,tabCases[propriete1J2].nomCase, tabCases[propriete1J1].nomCase,tabCases[propriete2J1].nomCase, tabJoueur[i].nomJoueur);
                                fflush(stdin);
                                scanf("%d", &valid);

                            }
                            while(valid !=0 && valid !=1);

                            if (valid == 1)
                            {
                                 if (tabCases[propriete1J1].hypotheque == 1)
                                {
                                    do
                                    {
                                        printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete1J1].nomCase,tabJoueur[joueurSelec-1].nomJoueur, (tabCases[propriete1J1].couthyp*0.10)+tabCases[propriete1J1].couthyp,tabCases[propriete1J1].couthyp*0.10);
                                        fflush(stdin);
                                        scanf("%d", &validH);
                                    }
                                    while(validH != 1 || validH != 2);
                                    if (validH == 1)
                                    {
                                        tabJoueur[joueurSelec-1].argent -= (tabCases[propriete1J1].couthyp*0.10)+tabCases[propriete1J1].couthyp;
                                        tabCases[propriete1J1].hypotheque = 0;
                                    }
                                    else if (validH == 0)
                                    {
                                        tabJoueur[joueurSelec-1].argent -= tabCases[propriete1J1].couthyp*0.10;
                                    }

                                }
                                if (tabCases[propriete2J1].hypotheque == 1)
                                {
                                    do
                                    {
                                        printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete2J1].nomCase,tabJoueur[i].nomJoueur, (tabCases[propriete2J1].couthyp*0.10)+tabCases[propriete2J1].couthyp,tabCases[propriete2J1].couthyp*0.10);
                                        fflush(stdin);
                                        scanf("%d", &validH);
                                    }
                                    while(validH != 1 || validH != 2);
                                    if (validH == 1)
                                    {
                                        tabJoueur[i].argent -= (tabCases[propriete2J1].couthyp*0.10)+tabCases[propriete2J1].couthyp;
                                        tabCases[propriete2J1].hypotheque = 0;
                                    }
                                    else if (validH == 0)
                                    {
                                        tabJoueur[i].argent -= tabCases[propriete2J1].couthyp*0.10;
                                    }

                                }
                                if (tabCases[propriete1J2].hypotheque == 1)
                                {
                                    do
                                    {
                                        printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete1J2].nomCase,tabJoueur[i].nomJoueur, (tabCases[propriete1J2].couthyp*0.10)+tabCases[propriete1J2].couthyp,tabCases[propriete1J2].couthyp*0.10);
                                        fflush(stdin);
                                        scanf("%d", &validH);
                                    }
                                    while(validH != 1 || validH != 2);
                                    if (validH == 1)
                                    {
                                        tabJoueur[i].argent -= (tabCases[propriete1J2].couthyp*0.10)+tabCases[propriete1J2].couthyp;
                                        tabCases[propriete1J2].hypotheque = 0;
                                    }
                                    else if (validH == 0)
                                    {
                                        tabJoueur[i].argent -= tabCases[propriete1J2].couthyp*0.10;
                                    }

                                }
                                // echange propJ1
                                tabJoueur[joueurSelec-1].nbPropriete+=1;
                                tabJoueur[i].nbPropriete-=1;

                                tabJoueur[joueurSelec-1].possessions[propriete1J1]= propriete1J1;
                                tabJoueur[i].possessions[propriete1J1]=0;

                                tabJoueur[joueurSelec-1].familles[tabCases[propriete1J1].famille]+=1;
                                tabJoueur[i].familles[tabCases[propriete1J1].famille]-=1;

                                *compteurHotels -= tabCases[propriete1J1].nbHotel;
                                *compteurMaisons -= tabCases[propriete1J1].nbMaison;

                                tabCases[propriete1J1].proprieteDe = tabJoueur[joueurSelec-1].numeroJoueur;
                                tabCases[propriete1J1].nbMaison = 0;
                                tabCases[propriete1J1].nbHotel = 0;


                                //echange prop2J1
                                tabJoueur[joueurSelec-1].nbPropriete+=1;
                                tabJoueur[i].nbPropriete-=1;

                                tabJoueur[joueurSelec-1].possessions[propriete2J1]= propriete2J1;
                                tabJoueur[i].possessions[propriete2J1]=0;

                                tabJoueur[joueurSelec-1].familles[tabCases[propriete2J1].famille]+=1;
                                tabJoueur[i].familles[tabCases[propriete2J1].famille]-=1;

                                *compteurHotels -= tabCases[propriete2J1].nbHotel;
                                *compteurMaisons -= tabCases[propriete2J1].nbMaison;

                                tabCases[propriete2J1].proprieteDe = tabJoueur[joueurSelec-1].numeroJoueur;
                                tabCases[propriete2J1].nbMaison = 0;
                                tabCases[propriete2J1].nbHotel = 0;


                                // echange propJ2
                                tabJoueur[i].nbPropriete+=1;
                                tabJoueur[joueurSelec-1].nbPropriete-=1;

                                tabJoueur[i].possessions[propriete1J2]= propriete1J2;
                                tabJoueur[joueurSelec-1].possessions[propriete1J2]=0;

                                tabJoueur[i].familles[tabCases[propriete1J2].famille]+=1;
                                tabJoueur[joueurSelec-1].familles[tabCases[propriete1J2].famille]-=1;

                                *compteurHotels -= tabCases[propriete1J2].nbHotel;
                                *compteurMaisons -= tabCases[propriete1J2].nbMaison;

                                tabCases[propriete1J2].proprieteDe = tabJoueur[i].numeroJoueur;
                                tabCases[propriete1J2].nbMaison = 0;
                                tabCases[propriete1J2].nbHotel = 0;


                                printf("%s a echange %s et %s contre %s de %s\n",tabJoueur[i].nomJoueur,tabCases[propriete1J1].nomCase,tabCases[propriete2J1].nomCase, tabCases[propriete1J2].nomCase, tabJoueur[joueurSelec-1].nomJoueur);
                            }
                            else if (valid == 0)
                            {
                                printf("%s a refuse l'echange\n",tabJoueur[joueurSelec-1].nomJoueur);
                            }
                        }
                        else if (nbPropJ2==2)
                        {
                            do
                            {
                                printf("Contre quelles proprietes de %s souhaitez vous echanger %s et %s ?\n",tabJoueur[joueurSelec-1].nomJoueur,tabCases[propriete1J1].nomCase,tabCases[propriete2J1].nomCase);
                                printf("%s  possede : \n",tabJoueur[joueurSelec-1].nomJoueur);//Affichage des possessions
                                for (int j=0; j<28; j++)
                                {
                                    if (tabJoueur[joueurSelec-1].possessions[j] != 0)
                                    {
                                        printf("%d(%s)\n",j,tabCases[j].nomCase);
                                    }
                                }
                                printf("Selectionner premiere propriete.\n");
                                fflush(stdin);
                                scanf("%d",&propriete1J2);
                            }
                            while(tabJoueur[joueurSelec-1].possessions[propriete1J2] == 0 );
                            do
                            {
                                printf("Selectionner deuxieme propriete\n");
                                fflush(stdin);
                                scanf("%d",&propriete2J2);
                            }
                            while(tabJoueur[joueurSelec-1].possessions[propriete2J2] == 0 && propriete2J2==propriete1J2);

                            do
                            {
                                printf("%s, souhaitez vous echanger %s et %s contre %s et %s avec %s ? Saisir 1 pour valider ou 0 pour refuser.\n",tabJoueur[joueurSelec-1].nomJoueur,tabCases[propriete1J2].nomCase, tabCases[propriete2J2].nomCase, tabCases[propriete1J1].nomCase, tabCases[propriete2J1].nomCase, tabJoueur[i].nomJoueur);
                                fflush(stdin);
                                scanf("%d", &valid);
                            }
                            while(valid !=0 && valid !=1);

                            if (valid==1)
                            {
                                if (tabCases[propriete1J1].hypotheque == 1)
                                {
                                    do
                                    {
                                        printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete1J1].nomCase,tabJoueur[joueurSelec-1].nomJoueur, (tabCases[propriete1J1].couthyp*0.10)+tabCases[propriete1J1].couthyp,tabCases[propriete1J1].couthyp*0.10);
                                        fflush(stdin);
                                        scanf("%d", &validH);
                                    }
                                    while(validH != 1 || validH != 2);
                                    if (validH == 1)
                                    {
                                        tabJoueur[joueurSelec-1].argent -= (tabCases[propriete1J1].couthyp*0.10)+tabCases[propriete1J1].couthyp;
                                        tabCases[propriete1J1].hypotheque = 0;
                                    }
                                    else if (validH == 0)
                                    {
                                        tabJoueur[joueurSelec-1].argent -= tabCases[propriete1J1].couthyp*0.10;
                                    }

                                }
                                if (tabCases[propriete2J1].hypotheque == 1)
                                {
                                    do
                                    {
                                        printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete2J1].nomCase,tabJoueur[i].nomJoueur, (tabCases[propriete2J1].couthyp*0.10)+tabCases[propriete2J1].couthyp,tabCases[propriete2J1].couthyp*0.10);
                                        fflush(stdin);
                                        scanf("%d", &validH);
                                    }
                                    while(validH != 1 || validH != 2);
                                    if (validH == 1)
                                    {
                                        tabJoueur[i].argent -= (tabCases[propriete2J1].couthyp*0.10)+tabCases[propriete2J1].couthyp;
                                        tabCases[propriete2J1].hypotheque = 0;
                                    }
                                    else if (validH == 0)
                                    {
                                        tabJoueur[i].argent -= tabCases[propriete2J1].couthyp*0.10;
                                    }

                                }
                                if (tabCases[propriete1J2].hypotheque == 1)
                                {
                                    do
                                    {
                                        printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete1J2].nomCase,tabJoueur[i].nomJoueur, (tabCases[propriete1J2].couthyp*0.10)+tabCases[propriete1J2].couthyp,tabCases[propriete1J2].couthyp*0.10);
                                        fflush(stdin);
                                        scanf("%d", &validH);
                                    }
                                    while(validH != 1 || validH != 2);
                                    if (validH == 1)
                                    {
                                        tabJoueur[i].argent -= (tabCases[propriete1J2].couthyp*0.10)+tabCases[propriete1J2].couthyp;
                                        tabCases[propriete1J2].hypotheque = 0;
                                    }
                                    else if (validH == 0)
                                    {
                                        tabJoueur[i].argent -= tabCases[propriete1J2].couthyp*0.10;
                                    }

                                }
                                if (tabCases[propriete2J2].hypotheque == 1)
                                {
                                    do
                                    {
                                        printf("%s est hypothequee, %s, souhaitez vous lever l'hypotheque tout de suite pour %d credits(1) ? ou lever l'hypotheque plus tard et payer seulement %d credits(2)",tabCases[propriete1J2].nomCase,tabJoueur[i].nomJoueur, (tabCases[propriete1J2].couthyp*0.10)+tabCases[propriete1J2].couthyp,tabCases[propriete1J2].couthyp*0.10);
                                        fflush(stdin);
                                        scanf("%d", &validH);
                                    }
                                    while(validH != 1 || validH != 2);
                                    if (validH == 1)
                                    {
                                        tabJoueur[i].argent -= (tabCases[propriete2J2].couthyp*0.10)+tabCases[propriete2J2].couthyp;
                                        tabCases[propriete2J2].hypotheque = 0;
                                    }
                                    else if (validH == 0)
                                    {
                                        tabJoueur[i].argent -= tabCases[propriete2J2].couthyp*0.10;
                                    }

                                }
                                // echange propJ1
                                tabJoueur[joueurSelec-1].nbPropriete+=1;
                                tabJoueur[i].nbPropriete-=1;

                                tabJoueur[joueurSelec-1].possessions[propriete1J1]= propriete1J1;
                                tabJoueur[i].possessions[propriete1J1]=0;

                                tabJoueur[joueurSelec-1].familles[tabCases[propriete1J1].famille]+=1;
                                tabJoueur[i].familles[tabCases[propriete1J1].famille]-=1;

                                *compteurHotels -= tabCases[propriete1J1].nbHotel;
                                *compteurMaisons -= tabCases[propriete1J1].nbMaison;

                                tabCases[propriete1J1].proprieteDe = tabJoueur[joueurSelec-1].numeroJoueur;
                                tabCases[propriete1J1].nbMaison = 0;
                                tabCases[propriete1J1].nbHotel = 0;


                                //echange prop2J1
                                tabJoueur[joueurSelec-1].nbPropriete+=1;
                                tabJoueur[i].nbPropriete-=1;

                                tabJoueur[joueurSelec-1].possessions[propriete2J1]= propriete2J1;
                                tabJoueur[i].possessions[propriete2J1]=0;

                                tabJoueur[joueurSelec-1].familles[tabCases[propriete2J1].famille]+=1;
                                tabJoueur[i].familles[tabCases[propriete2J1].famille]-=1;

                                *compteurHotels -= tabCases[propriete2J1].nbHotel;
                                *compteurMaisons -= tabCases[propriete2J1].nbMaison;

                                tabCases[propriete2J1].proprieteDe = tabJoueur[joueurSelec-1].numeroJoueur;
                                tabCases[propriete2J1].nbMaison = 0;
                                tabCases[propriete2J1].nbHotel = 0;


                                // echange propJ2
                                tabJoueur[i].nbPropriete+=1;
                                tabJoueur[joueurSelec-1].nbPropriete-=1;

                                tabJoueur[i].possessions[propriete1J2]= propriete1J2;
                                tabJoueur[joueurSelec-1].possessions[propriete1J2]=0;

                                tabJoueur[i].familles[tabCases[propriete1J2].famille]+=1;
                                tabJoueur[joueurSelec-1].familles[tabCases[propriete1J2].famille]-=1;

                                *compteurHotels -= tabCases[propriete1J2].nbHotel;
                                *compteurMaisons -= tabCases[propriete1J2].nbMaison;

                                tabCases[propriete1J2].proprieteDe = tabJoueur[i].numeroJoueur;
                                tabCases[propriete1J2].nbMaison = 0;
                                tabCases[propriete1J2].nbHotel = 0;


                                // echange prop2J2
                                tabJoueur[i].nbPropriete+=1;
                                tabJoueur[joueurSelec-1].nbPropriete-=1;

                                tabJoueur[i].possessions[propriete2J2]= propriete2J2;
                                tabJoueur[joueurSelec-1].possessions[propriete2J2]=0;

                                tabJoueur[i].familles[tabCases[propriete2J2].famille]+=1;
                                tabJoueur[joueurSelec-1].familles[tabCases[propriete2J2].famille]-=1;

                                *compteurHotels -= tabCases[propriete2J2].nbHotel;
                                *compteurMaisons -= tabCases[propriete2J2].nbMaison;

                                tabCases[propriete2J2].proprieteDe = tabJoueur[i].numeroJoueur;
                                tabCases[propriete2J2].nbMaison = 0;
                                tabCases[propriete2J2].nbHotel = 0;


                                printf("%s a echange %s et %s contre %s et %s avec %s\n",tabJoueur[i].nomJoueur,tabCases[propriete1J1].nomCase, tabCases[propriete2J1].nomCase, tabCases[propriete1J2].nomCase, tabCases[propriete2J2].nomCase, tabJoueur[joueurSelec-1].nomJoueur);
                            }
                            else if(valid==0)
                            {
                                printf("%s a refuse l'echange",tabJoueur[joueurSelec-1].nomJoueur);
                            }
                        }
                    }
                }
            }
        }
    }
    else if (joueurSelec==0)
    {
        printf("Echange annule.\n");
    }


}
