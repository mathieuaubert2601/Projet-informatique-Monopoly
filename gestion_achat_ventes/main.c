#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nomJoueur[20] ;
    int possessions[28];
    int  position ;
    int  argent ;
    int tourPrison ;
    int numeroJoueur ;
    int libertePrison ;
    int nbProprietefam1;
    int nbProprietefam2;
    int nbProprietefam3;
    int nbProprietefam4;
    int doubleOuNon;

}joueur_t;

struct caseMonop
{

    char nomCase[20];
    int  position ;
    int cout;
    int famille;
    int proprieteDe;
    int nbMaison;
    int nbHotel;
    int typeCase;
    int prixLoyer;

};

void achat( joueur_t* joueur, struct caseMonop* case1, int *compteurMaison, int *compteurHotel, int nbMaison)
{
    case1->nbMaison += nbMaison;
    *compteurMaison += nbMaison;
    joueur->argent -= (case1->cout)*nbMaison;

    if (case1->nbMaison >= 5)
    {
        case1->nbMaison = 0;
        case1->nbHotel = 1;
        *compteurMaison -= 5;
        *compteurHotel +=1;
    }
}

void vente(joueur_t* joueur, struct caseMonop* case1, int *compteurMaison, int *compteurHotel, int nbMaison)
{
    if (case1->nbHotel == 0)
    {
        case1->nbMaison -= nbMaison;
        *compteurMaison -= nbMaison;
        joueur->argent += (case1->cout/2)*nbMaison;
    }
    else
    {
        case1->nbMaison = 5 - nbMaison ;
        case1->nbHotel = 0;
        *compteurMaison += case1->nbMaison;
        *compteurHotel -=1;
    }
}



void gestion_Prop(joueur_t joueur[],struct caseMonop caseMonop[], int *compteurMaison, int *compteurHotel, int i)
{

    int choixM, choixP, choixNbMaison = 0, valid, somme_prop;

    //Menu principal permettant de choisir l'action a faire
    do
    {
        printf("Souhaitez vous acheter une maison(1), vendre une maison(2) ou quitter ce menu(0) ?");
        fflush(stdin);
        scanf("%d",&choixM);
    }
    while (choixM <0 || choixM >2);  //Blindage de la saisie

    do
    {
        // Si le choix est d'acheter
        if (choixM == 1)
        {
            printf("ou souhaitez vous acheter des maisons ?, vous possedez : ");//Affichage des possessions
            for (int j=0; j<28; j++)
            {
                if (joueur[i].possessions[j] != 0)
                {
                    printf("%d\n",j);
                    somme_prop+=1;

                }
            }
            do
            {
                printf("ou souhaitez vous donc acheter des maisons ?");
                fflush(stdin);
                scanf("%d",&choixP);
            }while(joueur[i].possessions[choixP]==0 && choixP== 4 && choixP==10 && choixP== 18 && choixP== 25);


            //Différents choix suivant le nombre de maisons sur cette propriété

            /// 1 Hotel ///

            if (caseMonop[choixP].nbMaison == 5)
            {
                printf("vous possedez deja un hotel sur cette case. Vous ne pouvez donc pas acheter de maison");
            }

            ///4 maisons ///

            else if (caseMonop[choixP].nbMaison == 4)
            {
                printf("vous possedez 4 maisons, vous pouvez rajouter une maison, ce qui vous donnera un hotel. \n Une maison sur cette propriete vaut : %d credits\n", caseMonop[choixP].cout);
                printf("Le loyer de votre propriete avec une maison vaudra : %d credits, avec deux maisons : %d Credits, avec trois maisons : %d Credits, avec quatres maisons : %d Credits, et avec un Hotel(5 maisons) : %d Credits\n",caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*1),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*2),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*3),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*4),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*5));
                printf("Voulez vous acheter une maison pour %d Credits ?\n",caseMonop[choixP].cout/2);
                if (compteurHotel==5)
                {
                    printf("vous ne pouvez pas acheter d'hotel car il y en a deja 5 sur le plateau");
                }
                else
                {
                    do
                    {
                        printf("Saisir 1 ou 0. \n");
                        fflush(stdin);
                        scanf("%d",&choixNbMaison);
                    }
                    while(choixNbMaison != 1 || choixNbMaison != 0);

                    if (choixNbMaison == 1)
                    {
                        achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
                    }
                }


            }       ///3 maisons///
            else if (caseMonop[choixP].nbMaison == 3)
            {
                printf("vous possedez 3 maisons, vous pouvez rajouter une maison, ou deux, ce qui vous donnera un hotel. \n Une maison sur cette propriete vaut : %d credits\n", caseMonop[choixP].cout);
                printf("Le loyer de votre propriete avec une maison vaudra : %d credits, avec deux maisons : %d Credits, avec trois maisons : %d Credits, avec quatres maisons : %d Credits, et avec un Hotel(5 maisons) : %d Credits",caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*1),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*2),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*3),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*4),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*5));
                printf("Combien de maison voulez vous donc acheter ?");
                do
                {
                    printf("Saisir 1,2 ou 0");
                    fflush(stdin);
                    scanf("%d",&choixNbMaison);
                }
                while(choixNbMaison <0 || choixNbMaison >2);

                //Verification du nombre de maisons disponibles
                if (choixNbMaison==1 && compteurMaison == 32)
                {
                    printf("Vous ne pouvez pas acheter de maison car il y en a deja 32 sur le plateau");
                }
                else if (choixNbMaison==2 && compteurHotel == 5)
                {
                    printf("vous ne pouvez pas acheter d'hotel car il y en a deja 5 sur le plateau");
                }

                //achat des maisons
                else if (choixNbMaison ==1 || choixNbMaison==2 )
                {
                    achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
                }

            }///2 maisons///
            else if (caseMonop[choixP].nbMaison == 2)
            {
                printf("vous possedez 2 maisons, vous pouvez rajouter une a deux maisons,ou trois, ce qui vous donnera un hotel. \n Une maison sur cette propriete vaut : %d crédits", caseMonop[choixP].cout);
                printf("Le loyer de votre propriete avec une maison vaudra : %d credits, avec deux maisons : %d Credits, avec trois maisons : %d Credits, avec quatres maisons : %d Credits, et avec un Hotel(5 maisons) : %d Credits",caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*1),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*2),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*3),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*4),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*5));
                printf("Combien de maison voulez vous donc acheter ?");
                do
                {
                    printf("Saisir 1,2,3 ou 0");
                    fflush(stdin);
                    scanf("%d",&choixNbMaison);
                }
                while(choixNbMaison <0 || choixNbMaison >3);

                if ((choixNbMaison==1 || choixNbMaison==2) && compteurMaison+choixNbMaison > 32)
                {
                    printf("Vous ne pouvez pas acheter de maison car il y en a deja %d sur le plateau", compteurMaison);
                }
                else if (choixNbMaison==3 && compteurHotel == 5)
                {
                    printf("vous ne pouvez pas acheter d'hotel car il y en a deja 5 sur le plateau");
                }

                else if (choixNbMaison >0 && choixNbMaison<4)
                {
                    achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
                }

            }///1 maison///
            else if (caseMonop[choixP].nbMaison == 1)
            {
                printf("vous possedez 1 maisons, vous pouvez rajouter une a trois maisons, ou quatres, ce qui vous donnera un hotel. \n Une maison sur cette propriete vaut : %d crédits", caseMonop[choixP].cout);
                printf("Le loyer de votre propriete avec une maison vaudra : %d credits, avec deux maisons : %d Credits, avec trois maisons : %d Credits, avec quatres maisons : %d Credits, et avec un Hotel(5 maisons) : %d Credits",caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*1),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*2),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*3),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*4),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*5));
                printf("Combien de maison voulez vous donc acheter ?");
                do
                {
                    printf("Saisir 1,2,3,4 ou 0");
                    fflush(stdin);
                    scanf("%d",&choixNbMaison);
                }
                while(choixNbMaison <0 || choixNbMaison >4);

                if (choixNbMaison!=4 && compteurMaison+choixNbMaison > 32)
                {
                    printf("Vous ne pouvez pas acheter de maison car il y en a deja %d sur le plateau", compteurMaison);
                }
                else if (choixNbMaison==4 && compteurHotel == 5)
                {
                    printf("vous ne pouvez pas acheter d'hotel car il y en a deja 5 sur le plateau");
                }

                else if (choixNbMaison >0 && choixNbMaison<5)
                {
                    achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
                }

            }/// Pas de maisons///
            else if (caseMonop[choixP].nbMaison == 0)
            {
                printf("vous ne possedez aucune maison, vous pouvez rajouter une a quatres maisons, ou cinq ce qui vous donnera un hotel. \n Une maison sur cette propriete vaut : %d crédits", caseMonop[choixP].cout);
                printf("Le loyer de votre propriete avec une maison vaudra : %d credits, avec deux maisons : %d Credits, avec trois maisons : %d Credits, avec quatres maisons : %d Credits, et avec un Hotel(5 maisons) : %d Credits",caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*1),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*2),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*3),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*4),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*5));
                printf("Combien de maison voulez vous donc acheter ?");
                do
                {
                    printf("Saisir 1,2,3,4,5 ou 0");
                    fflush(stdin);
                    scanf("%d",&choixNbMaison);
                }
                while(choixNbMaison <0 || choixNbMaison >5);

                if (choixNbMaison!=5 && compteurMaison+choixNbMaison > 32)
                {
                    printf("Vous ne pouvez pas acheter de maison car il y en a deja %d sur le plateau", compteurMaison);
                }
                else if (choixNbMaison==5 && compteurHotel == 5)
                {
                    printf("vous ne pouvez pas acheter d'hotel car il y en a deja 5 sur le plateau");
                }

                else if (choixNbMaison >0 && choixNbMaison<6)
                {
                    achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
                }
            }

        }
        ///Utilisateur choisis de vendre///
        else if (choixM == 2)
        {
            ///affichage des propriétés du joueur///
            printf("ou souhaitez vous vendre des maisons ?, vous possédez : ");
            for (int j=0; j<24; j++)
            {
                if (joueur[i].possessions[j] != 0)
                {
                    printf("%d",joueur[i].possessions[j]);
                }
            }
            do
            {
                printf("ou souhaitez vous donc vendre des maisons ?");
                fflush(stdin);
                scanf("%d",&choixP);
            }while((joueur[i].possessions[choixP]==0 && choixP== 4) && (choixP==10 && choixP== 18) && choixP== 25);


            ///Si il n'y a pas de maison sur la case sélectionnée///

            if (caseMonop[choixP].nbMaison == 0)
            {
                printf("vous ne possedez pas de maisons sur cette propriete, vous ne pouvez donc pas vendre de maisons.");
            }

            ///Si il y a un hotel sur la case sélectionnée///
            else if (caseMonop[choixP].nbHotel == 1)
            {
                printf(" Vous possedez un hotel, vous pouvez le vendre en plusieurs parties afin de n’avoir plus que quelques maisons ou tout vendre.\n");
                do
                {
                    printf(" Combien de maisons souhaitez vous vendre ? 1 maison vendue correspond a %d Credits. Vous pouvez vendre jusqu'a 5 maisons.\n", caseMonop[choixP].cout/2);
                    fflush(stdin);
                    scanf("%d", &choixNbMaison);
                }
                while(choixNbMaison>5 || choixNbMaison<0);

                ///Vente///
                if (5-choixNbMaison != 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il vous restera donc %d maisons sur cette propriete. Saisir 1 pour valider ou 0 pour annuler.", choixNbMaison, (caseMonop[choixP].cout/2)*choixNbMaison, 5-choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 || valid!=1);
                }
                else if (5-choixNbMaison == 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il ne vous restera plus aucune maison sur cette propriete.", choixNbMaison, (caseMonop[choixP].cout/2)*choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 || valid!=1);
                }
                if (valid == 1)
                {
                    vente(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
                }
            }///4 maisons sur la case///
            else if (caseMonop[choixP].nbMaison == 4)
            {
                printf(" Vous possedez 4 maisons, vous pouvez en vendre jusqu'a 4.\n");
                do
                {
                    printf(" Combien de maisons souhaitez vous vendre ? 1 maison vendue correspond a %d Credits. Vous pouvez vendre jusqu'a 4 maisons\n", caseMonop[choixP].cout/2);
                    fflush(stdin);
                    scanf("%d", &choixNbMaison);
                }
                while (choixNbMaison>4 || choixNbMaison<0);

                if (5-choixNbMaison != 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il vous restera donc %d maisons sur cette propriete. Saisir 1 pour valider ou 0 pour annuler", choixNbMaison, (caseMonop[choixP].cout/2)*choixNbMaison, 5-choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 || valid!=1);
                }
                else if (5-choixNbMaison == 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il ne vous restera plus aucune maison sur cette propriete", choixNbMaison, (caseMonop[choixP].cout/2)*choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 || valid!=1);
                }
                if (valid == 1)
                {
                    vente(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
                }
            }///3 maisons sur la case///
            else if (caseMonop[choixP].nbMaison == 3)
            {
                printf(" Vous possedez 4 maisons, vous pouvez en vendre jusqu'a 4.\n");
                do
                {
                    printf(" Combien de maisons souhaitez vous vendre ? 1 maison vendue correspond a %d Credits. Vous pouvez vendre jusqu'a 3 maisons\n", caseMonop[choixP].cout/2);
                    fflush(stdin);
                    scanf("%d", &choixNbMaison);
                }
                while (choixNbMaison>3 || choixNbMaison<0);

                if (5-choixNbMaison != 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il vous restera donc %d maisons sur cette propriete. Saisir 1 pour valider ou 0 pour annuler", choixNbMaison, (caseMonop[choixP].cout/2)*choixNbMaison, 5-choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 || valid!=1);
                }
                else if (5-choixNbMaison == 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il ne vous restera plus aucune maison sur cette propriete", choixNbMaison, (caseMonop[choixP].cout/2)*choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 || valid!=1);
                }
                if (valid == 1)
                {
                    vente(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
                }
            }///2 maisons sur la case///
            else if (caseMonop[choixP].nbMaison == 2)
            {
                printf("Vous possedez 4 maisons, vous pouvez en vendre jusqu'a 4.\n");
                do
                {
                    printf(" Combien de maisons souhaitez vous vendre ? 1 maison vendue correspond a %d Credits. Vous pouvez vendre jusqu'a 2 maisons\n", caseMonop[choixP].cout/2);
                    fflush(stdin);
                    scanf("%d", &choixNbMaison);
                }
                while (choixNbMaison>2 || choixNbMaison<0);

                if (5-choixNbMaison != 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il vous restera donc %d maisons sur cette propriete. Saisir 1 pour valider ou 0 pour annuler", choixNbMaison, (caseMonop[choixP].cout/2)*choixNbMaison, 5-choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 || valid!=1);
                }
                else if (5-choixNbMaison == 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il ne vous restera plus aucune maison sur cette propriete", choixNbMaison, (caseMonop[choixP].cout/2)*choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 || valid!=1);
                }
                if (valid == 1)
                {
                    vente(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
                }
            }///1 maison sur la case///
            else if (caseMonop[choixP].nbMaison == 1)
            {
                printf(" Vous possedez une maison, vous pouvez la vendre.\n");
                do
                {
                    printf(" Souhaitez vous vendre votre maison pour %d Credits. Selectionner 1 ou 0\n", caseMonop[choixP].cout/2);
                    fflush(stdin);
                    scanf("%d", &choixNbMaison);
                }
                while (choixNbMaison>1 || choixNbMaison<0);
                if (5-choixNbMaison != 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il vous restera donc %d maisons sur cette propriete. Saisir 1 pour valider ou 0 pour annuler", choixNbMaison, (caseMonop[choixP].cout/2)*choixNbMaison, 5-choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 || valid!=1);
                }
                else if (5-choixNbMaison == 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il ne vous restera plus aucune maison sur cette propriete", choixNbMaison, (caseMonop[choixP].cout/2)*choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 || valid!=1);
                }
                if (valid == 1)
                {
                    vente(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
                }
            }
        }
    }
    while(choixM!=0); ///on effectue le programme tant que le choix initial est différend de 0
}






int main()
{
    struct caseMonop cases[28];
    int compteurMaisons, compteurHotels;

    joueur_t joueur1;
    joueur_t joueur2;
    joueur_t joueur3;
    joueur_t joueur4;

    strcpy(joueur1.nomJoueur,"Mathieu");
    for (int i = 0; i<28; i++)
    {
        joueur1.possessions[i] = 0;
    }
    joueur1.position = 5;
    joueur1.argent = 1500;
    joueur1.tourPrison = 0;
    joueur1.numeroJoueur = 3;
    joueur1.libertePrison = 2;
    joueur1.nbProprietefam1 = 2;
    joueur1.nbProprietefam2 = 6;
    joueur1.nbProprietefam3= 7;
    joueur1.nbProprietefam4 = 8;
    joueur1.doubleOuNon = 19;

    joueur1.possessions[4]=4;
    joueur1.possessions[1]=1;

    strcpy(joueur2.nomJoueur,"Thibault");
    for (int i = 0; i<28; i++)
    {
        joueur2.possessions[i] = 0;
    }
    joueur2.position = 6;
    joueur2.argent = 1600;
    joueur2.tourPrison = 1;
    joueur2.numeroJoueur = 4;
    joueur2.libertePrison = 5;
    joueur2.nbProprietefam1 = 3;
    joueur2.nbProprietefam2 = 7;
    joueur2.nbProprietefam3= 8;
    joueur2.nbProprietefam4 = 9;
    joueur2.doubleOuNon = 20;

    strcpy(joueur3.nomJoueur,"Adrien");
    for (int i = 0; i<28; i++)
    {
        joueur3.possessions[i] = 0;
    }
    joueur3.position = 7;
    joueur3.argent = 2000;
    joueur3.tourPrison = 2;
    joueur3.numeroJoueur = 5;
    joueur3.libertePrison = 6;
    joueur3.nbProprietefam1 = 4;
    joueur3.nbProprietefam2 = 8;
    joueur3.nbProprietefam3= 9;
    joueur3.nbProprietefam4 = 10;
    joueur3.doubleOuNon = 21;

    strcpy(joueur4.nomJoueur,"Philippe");
    for (int i = 0; i<28; i++)
    {
        joueur4.possessions[i] = 0;
    }
    joueur4.position = 8;
    joueur4.argent = 2500;
    joueur4.tourPrison = 3;
    joueur4.numeroJoueur = 6;
    joueur4.libertePrison = 7;
    joueur4.nbProprietefam1 = 8;
    joueur4.nbProprietefam2 = 9;
    joueur4.nbProprietefam3= 10;
    joueur4.nbProprietefam4 = 11;
    joueur4.doubleOuNon = 22;

    joueur_t joueurs[4];
    joueurs[0]= joueur1;
    joueurs[1]= joueur2;
    joueurs[2]= joueur3;
    joueurs[3]= joueur4;


    struct caseMonop case0,case1,case2,case3,case4,case5,case6,case7,case8,case9,case10,case11,case12,case13,case14,case15,case16,case17,case18,case19,case20,case21,case22,case23,case24,case25,case26,case27;


    strcpy(case0.nomCase,"Depart");
    case0.position = 0;
    case0.cout=0;
    case0.famille=0;
    case0.proprieteDe=0;
    case0.nbMaison=0;
    case0.nbHotel=0;
    case0.typeCase=0;
    case0.prixLoyer=200;


    strcpy(case1.nomCase,"Dagobah");
    case1.position = 1;
    case1.cout=50;
    case1.famille=1;
    case1.proprieteDe=1;
    case1.nbMaison=2;
    case1.nbHotel=0;
    case1.typeCase=1;
    case1.prixLoyer=2;

    strcpy(case2.nomCase,"Conseil Jedi");
    case2.position = 2;
    case2.cout=0;
    case2.famille=0;
    case2.proprieteDe=0;
    case2.nbMaison=0;
    case2.nbHotel=0;
    case2.typeCase=7;
    case2.prixLoyer=0;

    strcpy(case3.nomCase,"Hoth");
    case3.position = 3;
    case3.cout=75;
    case3.famille=1;
    case3.proprieteDe=0;
    case3.nbMaison=0;
    case3.nbHotel=0;
    case3.typeCase=1;
    case3.prixLoyer=3;

    strcpy(case4.nomCase,"Spatioport I");
    case4.position = 4;
    case4.cout=200;
    case4.famille=9;
    case4.proprieteDe=1;
    case4.nbMaison=0;
    case4.nbHotel=0;
    case4.typeCase=2;
    case4.prixLoyer=50;

    strcpy(case5.nomCase,"Kashyyk");
    case5.position = 5;
    case5.cout=100;
    case5.famille=2;
    case5.proprieteDe=0;
    case5.nbMaison=0;
    case5.nbHotel=0;
    case5.typeCase=1;
    case5.prixLoyer=5;

    strcpy(case6.nomCase,"Endor");
    case6.position = 6;
    case6.cout=125;
    case6.famille=2;
    case6.proprieteDe=0;
    case6.nbMaison=0;
    case6.nbHotel=0;
    case6.typeCase=2;
    case6.prixLoyer=6;

    strcpy(case7.nomCase,"Prison");
    case7.position = 7;
    case7.cout=0;
    case7.famille=0;
    case7.proprieteDe=0;
    case7.nbMaison=0;
    case7.nbHotel=0;
    case7.typeCase=3;
    case7.prixLoyer=0;

    strcpy(case8.nomCase,"Mustafar");
    case8.position = 8;
    case8.cout=150;
    case8.famille=3;
    case8.proprieteDe=0;
    case8.nbMaison=0;
    case8.nbHotel=0;
    case8.typeCase=1;
    case8.prixLoyer=7;

    strcpy(case9.nomCase,"Jakuu");
    case9.position = 9;
    case9.cout=175;
    case9.famille=3;
    case9.proprieteDe=0;
    case9.nbMaison=0;
    case9.nbHotel=0;
    case9.typeCase=1;
    case9.prixLoyer=9;

    strcpy(case10.nomCase,"Spatioport II");
    case10.position = 10;
    case10.cout=200;
    case10.famille=9;
    case10.proprieteDe=0;
    case10.nbMaison=0;
    case10.nbHotel=0;
    case10.typeCase=2;
    case10.prixLoyer=50;

    strcpy(case11.nomCase,"Jedha");
    case11.position = 11;
    case11.cout=200;
    case11.famille=4;
    case11.proprieteDe=0;
    case11.nbMaison=0;
    case11.nbHotel=0;
    case11.typeCase=1;
    case11.prixLoyer=10;

    strcpy(case12.nomCase,"Alliance Sith");
    case12.position = 12;
    case12.cout=0;
    case12.famille=0;
    case12.proprieteDe=0;
    case12.nbMaison=0;
    case12.nbHotel=0;
    case12.typeCase=6;
    case12.prixLoyer=0;

    strcpy(case13.nomCase,"Tatooine");
    case13.position = 13;
    case13.cout=225;
    case13.famille=4;
    case13.proprieteDe=0;
    case13.nbMaison=0;
    case13.nbHotel=0;
    case13.typeCase=1;
    case13.prixLoyer=11;

    strcpy(case14.nomCase,"Ordre 66");
    case14.position = 14;
    case14.cout=0;
    case14.famille=0;
    case14.proprieteDe=0;
    case14.nbMaison=0;
    case14.nbHotel=0;
    case14.typeCase=4;
    case14.prixLoyer=0;

    strcpy(case15.nomCase,"Kaminoo");
    case15.position = 15;
    case15.cout=250;
    case15.famille=5;
    case15.proprieteDe=0;
    case15.nbMaison=0;
    case15.nbHotel=0;
    case15.typeCase=1;
    case15.prixLoyer=13;

    strcpy(case16.nomCase,"Conseil Jedi");
    case16.position = 16;
    case16.cout=0;
    case16.famille=0;
    case16.proprieteDe=0;
    case16.nbMaison=0;
    case16.nbHotel=0;
    case16.typeCase=7;
    case16.prixLoyer=0;

    strcpy(case17.nomCase,"Geonosis");
    case17.position = 17;
    case17.cout=275;
    case17.famille=5;
    case17.proprieteDe=0;
    case17.nbMaison=0;
    case17.nbHotel=0;
    case17.typeCase=1;
    case17.prixLoyer=14;

    strcpy(case18.nomCase,"Spatioport III");
    case18.position = 18;
    case18.cout=200;
    case18.famille=9;
    case18.proprieteDe=0;
    case18.nbMaison=0;
    case18.nbHotel=0;
    case18.typeCase=2;
    case18.prixLoyer=50;

    strcpy(case19.nomCase,"Alderaan");
    case19.position = 19;
    case19.cout=300;
    case19.famille=6;
    case19.proprieteDe=0;
    case19.nbMaison=0;
    case19.nbHotel=0;
    case19.typeCase=1;
    case19.prixLoyer=15;

    strcpy(case20.nomCase,"Bespin");
    case20.position = 20;
    case20.cout=325;
    case20.famille=6;
    case20.proprieteDe=0;
    case20.nbMaison=0;
    case20.nbHotel=0;
    case20.typeCase=1;
    case20.prixLoyer=16;

    strcpy(case21.nomCase,"Arrestation");
    case21.position = 21;
    case21.cout=0;
    case21.famille=0;
    case21.proprieteDe=0;
    case21.nbMaison=0;
    case21.nbHotel=0;
    case21.typeCase=5;
    case21.prixLoyer=0;

    strcpy(case22.nomCase,"Yavin 4");
    case22.position = 22;
    case22.cout=350;
    case22.famille=7;
    case22.proprieteDe=0;
    case22.nbMaison=0;
    case22.nbHotel=0;
    case22.typeCase=1;
    case22.prixLoyer=18;

    strcpy(case23.nomCase,"Alliance Sith");
    case23.position = 23;
    case23.cout=0;
    case23.famille=0;
    case23.proprieteDe=0;
    case23.nbMaison=0;
    case23.nbHotel=0;
    case23.typeCase=6;
    case23.prixLoyer=0;

    strcpy(case24.nomCase,"Naboo");
    case24.position = 24;
    case24.cout=375;
    case24.famille=7;
    case24.proprieteDe=0;
    case24.nbMaison=0;
    case24.nbHotel=0;
    case24.typeCase=1;
    case24.prixLoyer=19;

    strcpy(case25.nomCase,"Spatioport IV");
    case25.position = 25;
    case25.cout=200;
    case25.famille=9;
    case25.proprieteDe=0;
    case25.nbMaison=0;
    case25.nbHotel=0;
    case25.typeCase=2;
    case25.prixLoyer=50;

    strcpy(case26.nomCase,"Alderaan");
    case26.position = 26;
    case26.cout=400;
    case26.famille=8;
    case26.proprieteDe=0;
    case26.nbMaison=0;
    case26.nbHotel=0;
    case26.typeCase=1;
    case26.prixLoyer=20;

    strcpy(case27.nomCase,"Corusant");
    case27.position = 27;
    case27.cout=450;
    case27.famille=8;
    case27.proprieteDe=0;
    case27.nbMaison=0;
    case27.nbHotel=0;
    case27.typeCase=1;
    case27.prixLoyer=23;


    cases[0]= case0;
    cases[1]= case1;
    cases[2]= case2;
    cases[3]= case3;
    cases[4]= case4;
    cases[5]= case5;
    cases[6]= case6;
    cases[7]= case7;
    cases[8]= case8;
    cases[9]= case9;
    cases[10]= case10;
    cases[11]= case11;
    cases[12]= case12;
    cases[13]= case13;
    cases[14]= case14;
    cases[15]= case15;
    cases[16]= case16;
    cases[17]= case17;
    cases[18]= case18;
    cases[19]= case19;
    cases[20]= case20;
    cases[21]= case21;
    cases[22]= case22;
    cases[23]= case23;
    cases[24]= case24;
    cases[25]= case25;
    cases[26]= case26;
    cases[27]= case27;

    int i = 0;
    gestion_Prop(joueurs,cases, &compteurMaisons, &compteurHotels, i);







    return 0;
}
