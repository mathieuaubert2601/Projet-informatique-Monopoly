#include <stdio.h>
#include <stdlib.h>

struct joueur
{
    char nomJoueur[20] ;
    int possessions[24];
    int  position;
    int  argent ;
    int tourPrison ;
    int numeroJoueur ;
    int libertePrison ;
    int nbProprietefam1;
    int nbProprietefam2;
    int nbProprietefam3;
    int nbProprietefam4;
    int doubleOuNon;

};

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

void achat(struct joueur* joueur, struct caseMonop* case1, int *compteurMaison, int *compteurHotel, int nbMaison)
{
    case1->nbMaison += nbMaison;
    *compteurMaison += nbMaison;
    joueur->argent -= (case1->cout/4)*nbMaison;

    if (case1->nbMaison >= 5)
    {
        case1->nbMaison = 0;
        case1->nbHotel = 1;
        *compteurMaison -= 5;
        *compteurHotel +=1;
    }
}

void vente(struct joueur* joueur, struct caseMonop* case1, int *compteurMaison, int *compteurHotel, int nbMaison)
{
    if (case1->nbHotel == 0)
    {
        case1->nbMaison -= nbMaison;
        *compteurMaison -= nbMaison;
        joueur->argent += (case1->cout/8)*nbMaison;
    }
    else
    {
        case1->nbMaison = 5 - nbMaison ;
        case1->nbHotel = 0;
        *compteurMaison += case1->nbMaison;
        *compteurHotel -=1;
    }
}



void gestion_Prop(struct joueur joueur[],struct caseMonop caseMonop[], int *compteurMaison, int *compteurHotel, int i)
{
    int choixM, choixP, choixNbMaison = 0, valid;

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
            printf("ou souhaitez vous acheter des maisons ?, vous possedez : ");        //Affichage des possessions
            for (int j=0; j<24; j++)
            {
                if (joueur[i].possessions[j] != 0)
                {
                    printf("%d\n",joueur[i].possessions[j]);
                }
            }
            fflush(stdin);
            scanf("%d",&choixP);

            //Différents choix suivant le nombre de maisons sur cette propriété

            /// 1 Hotel ///

            if (caseMonop[choixP].nbMaison == 5)
            {
                printf("vous possedez deja un hotel sur cette case. Vous ne pouvez donc pas acheter de maison");
            }

            ///4 maisons ///

            else if (caseMonop[choixP].nbMaison == 4)
            {
                printf("vous possedez 4 maisons, vous pouvez rajouter une maison, ce qui vous donnera un hotel. \n Une maison sur cette propriete vaut : %d credits\n", caseMonop[choixP].cout/4);
                printf("Le loyer de votre propriete avec une maison vaudra : %d credits, avec deux maisons : %d Credits, avec trois maisons : %d Credits, avec quatres maisons : %d Credits, et avec un Hotel(5 maisons) : %d Credits\n",caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*1),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*2),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*3),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*4),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*5));
                printf("Voulez vous acheter une maison pour %d Credits ?\n",caseMonop[choixP].cout/4);
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
                printf("vous possedez 3 maisons, vous pouvez rajouter une maison, ou deux, ce qui vous donnera un hotel. \n Une maison sur cette propriete vaut : %d credits\n", caseMonop[choixP].cout/10);
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
                printf("vous possedez 2 maisons, vous pouvez rajouter une a deux maisons,ou trois, ce qui vous donnera un hotel. \n Une maison sur cette propriete vaut : %d crédits", caseMonop[choixP].cout/10);
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
                printf("vous possedez 1 maisons, vous pouvez rajouter une a trois maisons, ou quatres, ce qui vous donnera un hotel. \n Une maison sur cette propriete vaut : %d crédits", caseMonop[choixP].cout/10);
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
                printf("vous ne possedez aucune maison, vous pouvez rajouter une a quatres maisons, ou cinq ce qui vous donnera un hotel. \n Une maison sur cette propriete vaut : %d crédits", caseMonop[choixP].cout/10);
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
            fflush(stdin);
            scanf("%d",&choixP);

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
                    printf(" Combien de maisons souhaitez vous vendre ? 1 maison vendue correspond a %d Credits. Vous pouvez vendre jusqu'a 5 maisons.\n", caseMonop[choixP].cout/8);
                    fflush(stdin);
                    scanf("%d", &choixNbMaison);
                }
                while(choixNbMaison>5 || choixNbMaison<0);

                ///Vente///
                if (5-choixNbMaison != 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il vous restera donc %d maisons sur cette propriete. Saisir 1 pour valider ou 0 pour annuler.", choixNbMaison, (caseMonop[choixP].cout/8)*choixNbMaison, 5-choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 || valid!=1);
                }
                else if (5-choixNbMaison == 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il ne vous restera plus aucune maison sur cette propriete.", choixNbMaison, (caseMonop[choixP].cout/8)*choixNbMaison);
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
                    printf(" Combien de maisons souhaitez vous vendre ? 1 maison vendue correspond a %d Credits. Vous pouvez vendre jusqu'a 4 maisons\n", caseMonop[choixP].cout/8);
                    fflush(stdin);
                    scanf("%d", &choixNbMaison);
                }
                while (choixNbMaison>4 || choixNbMaison<0);

                if (5-choixNbMaison != 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il vous restera donc %d maisons sur cette propriete. Saisir 1 pour valider ou 0 pour annuler", choixNbMaison, (caseMonop[choixP].cout/8)*choixNbMaison, 5-choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 || valid!=1);
                }
                else if (5-choixNbMaison == 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il ne vous restera plus aucune maison sur cette propriete", choixNbMaison, (caseMonop[choixP].cout/8)*choixNbMaison);
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
                    printf(" Combien de maisons souhaitez vous vendre ? 1 maison vendue correspond a %d Credits. Vous pouvez vendre jusqu'a 3 maisons\n", caseMonop[choixP].cout/8);
                    fflush(stdin);
                    scanf("%d", &choixNbMaison);
                }
                while (choixNbMaison>3 || choixNbMaison<0);

                if (5-choixNbMaison != 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il vous restera donc %d maisons sur cette propriete. Saisir 1 pour valider ou 0 pour annuler", choixNbMaison, (caseMonop[choixP].cout/8)*choixNbMaison, 5-choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 || valid!=1);
                }
                else if (5-choixNbMaison == 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il ne vous restera plus aucune maison sur cette propriete", choixNbMaison, (caseMonop[choixP].cout/8)*choixNbMaison);
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
                    printf(" Combien de maisons souhaitez vous vendre ? 1 maison vendue correspond a %d Credits. Vous pouvez vendre jusqu'a 2 maisons\n", caseMonop[choixP].cout/8);
                    fflush(stdin);
                    scanf("%d", &choixNbMaison);
                }
                while (choixNbMaison>2 || choixNbMaison<0);

                if (5-choixNbMaison != 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il vous restera donc %d maisons sur cette propriete. Saisir 1 pour valider ou 0 pour annuler", choixNbMaison, (caseMonop[choixP].cout/8)*choixNbMaison, 5-choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 || valid!=1);
                }
                else if (5-choixNbMaison == 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il ne vous restera plus aucune maison sur cette propriete", choixNbMaison, (caseMonop[choixP].cout/8)*choixNbMaison);
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
                    printf(" Souhaitez vous vendre votre maison pour %d Credits. Selectionner 1 ou 0\n", caseMonop[choixP].cout/8);
                    fflush(stdin);
                    scanf("%d", &choixNbMaison);
                }
                while (choixNbMaison>1 || choixNbMaison<0);
                if (5-choixNbMaison != 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il vous restera donc %d maisons sur cette propriete. Saisir 1 pour valider ou 0 pour annuler", choixNbMaison, (caseMonop[choixP].cout/8)*choixNbMaison, 5-choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 || valid!=1);
                }
                else if (5-choixNbMaison == 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il ne vous restera plus aucune maison sur cette propriete", choixNbMaison, (caseMonop[choixP].cout/8)*choixNbMaison);
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

    return 0;
}
