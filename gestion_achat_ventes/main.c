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
    int familles[10];
    int doubleOuNon;


} joueur_t;

struct caseMonop
{

    char nomCase[20];
    int  position ;
    int prix_case;
    int famille;
    int proprieteDe;
    int nbMaison;
    int nbHotel;
    int typeCase;
    int prixLoyer;
    int prixloy1maison;
    int prixloy2maison;
    int prixloy3maison;
    int prixloy4maison;
    int prixloyhotel;

};

void achat( joueur_t tabJoueur[], struct caseMonop Tabcase[], int *compteurMaison, int *compteurHotel, int nbrMaison, int choixP, int i)
{
    Tabcase[choixP].nbMaison += nbrMaison;
    *compteurMaison += nbrMaison;
    tabJoueur[i].argent -= (Tabcase[choixP].prix_case)*nbrMaison;

    if (Tabcase[choixP].nbMaison >= 5)
    {
        Tabcase[choixP].nbMaison = 0;
        Tabcase[choixP].nbHotel = 1;
        *compteurMaison -= 5;
        *compteurHotel +=1;
        printf("vous avez achete un hotel sur la case %d (%s) pour %d credits, le loyer sur cette case vaut desormais : %d credits.\n", Tabcase[choixP].position, Tabcase[choixP].nomCase, (Tabcase[choixP].prix_case)*nbrMaison, Tabcase[choixP].prixloyhotel);
    }
    else if (Tabcase[choixP].nbMaison==1)
    {
        printf("vous avez achete une maison sur la case %d (%s) pour %d credits, le loyer sur cette case vaut desormais : %d credits.\n", Tabcase[choixP].position, Tabcase[choixP].nomCase, (Tabcase[choixP].prix_case)*nbrMaison, Tabcase[choixP].prixloy1maison);
    }
    else if (Tabcase[choixP].nbMaison==2)
    {
        printf("vous avez achete 2 maisons sur la case %d (%s) pour %d credits, le loyer sur cette case vaut desormais : %d credits.\n", Tabcase[choixP].position, Tabcase[choixP].nomCase, (Tabcase[choixP].prix_case)*nbrMaison, Tabcase[choixP].prixloy2maison);
    }
    else if (Tabcase[choixP].nbMaison==3)
    {
        printf("vous avez achete 3 maisons sur la case %d (%s) pour %d credits, le loyer sur cette case vaut desormais : %d credits.\n", Tabcase[choixP].position, Tabcase[choixP].nomCase, (Tabcase[choixP].prix_case)*nbrMaison, Tabcase[choixP].prixloy3maison);
    }
    else if (Tabcase[choixP].nbMaison==4)
    {
        printf("vous avez achete 4 maisons sur la case %d (%s) pour %d credits, le loyer sur cette case vaut desormais : %d credits.\n", Tabcase[choixP].position, Tabcase[choixP].nomCase, (Tabcase[choixP].prix_case)*nbrMaison, Tabcase[choixP].prixloy4maison);
    }
}

void vente(joueur_t tabJoueur[], struct caseMonop Tabcase[], int *compteurMaison, int *compteurHotel, int nbrMaison, int choixP, int i)
{
    if (Tabcase[choixP].nbHotel == 0)
    {
        Tabcase[choixP].nbMaison -= nbrMaison;
        *compteurMaison -= nbrMaison;
        tabJoueur[i].argent += (Tabcase[choixP].prix_case/2)*nbrMaison;
    }
    else
    {
        Tabcase[choixP].nbMaison = 5 - nbrMaison ;
        Tabcase[choixP].nbHotel = 0;
        *compteurMaison += Tabcase[choixP].nbMaison;
        *compteurHotel -=1;
    }
        if (Tabcase[choixP].nbMaison==0)
        {
            printf("vous avez vendu %d maison(s) sur la case %d (%s) pour %d credits, le loyer sur cette case vaut desormais : %d credits.\n ",nbrMaison, Tabcase[choixP].position, Tabcase[choixP].nomCase, ((Tabcase[choixP].prix_case)*nbrMaison)/2, Tabcase[choixP].prixLoyer);
        }
        else if (Tabcase[choixP].nbMaison==1)
        {
            printf("vous avez vendu %d maison(s) sur la case %d (%s) pour %d credits, le loyer sur cette case vaut desormais : %d credits.\n",nbrMaison, Tabcase[choixP].position, Tabcase[choixP].nomCase, ((Tabcase[choixP].prix_case)*nbrMaison)/2, Tabcase[choixP].prixloy1maison);
        }
        else if (Tabcase[choixP].nbMaison==2)
        {
            printf("vous avez vendu %d maisons sur la case %d (%s) pour %d credits, le loyer sur cette case vaut desormais : %d credits.\n",nbrMaison, Tabcase[choixP].position, Tabcase[choixP].nomCase, ((Tabcase[choixP].prix_case)*nbrMaison)/2, Tabcase[choixP].prixloy2maison);
        }
        else if (Tabcase[choixP].nbMaison==3)
        {
            printf("vous avez vendu %d maisons sur la case %d (%s) pour %d credits, le loyer sur cette case vaut desormais : %d credits.\n", nbrMaison,Tabcase[choixP].position, Tabcase[choixP].nomCase, ((Tabcase[choixP].prix_case)*nbrMaison)/2, Tabcase[choixP].prixloy3maison);
        }
        else if (Tabcase[choixP].nbMaison==4)
        {
            printf("vous avez achete %d maisons sur la case %d (%s) pour %d credits, le loyer sur cette case vaut desormais : %d credits.\n", nbrMaison,Tabcase[choixP].position, Tabcase[choixP].nomCase, ((Tabcase[choixP].prix_case)*nbrMaison)/2, Tabcase[choixP].prixloy4maison);
        }

}



void gestion_Prop(joueur_t joueur[],struct caseMonop caseMonopoly[], int *compteurMaison, int *compteurHotel, int i)
{

    int choixM, choixP, choixNbMaison = 0, valid, somme_prop;

    //Menu principal permettant de choisir l'action a faire
    do
    {
        do
        {
            printf("Souhaitez vous acheter une maison(1), vendre une maison(2) ou quitter ce menu(0) ?\n");
            fflush(stdin);
            scanf("%d",&choixM);
        }
        while (choixM <0 || choixM >2);  //Blindage de la saisie

        // Si le choix est d'acheter
        if (choixM == 1)
        {
            printf("ou souhaitez vous acheter des maisons ?, vous possedez : \n");//Affichage des possessions
            for (int j=0; j<28; j++)
            {
                if (joueur[i].possessions[j] != 0)
                {
                    printf("%d\n",j);

                }
            }
            do
            {
                printf("ou souhaitez vous donc acheter des maisons ?\n");
                fflush(stdin);
                scanf("%d",&choixP);
            }
            while(joueur[i].possessions[choixP]==0);


            //Differents choix suivant le nombre de maisons sur cette propriete


            if((joueur[i].possessions[choixP]==4 || joueur[i].possessions[choixP]==10)||(joueur[i].possessions[choixP]==18 || joueur[i].possessions[choixP]==25))
            {
                printf("vous avez choisis un Spatioport, il est impossible d'acheter de maisons sur un spatioport.\n");
            }
            /// 1 Hotel ///
            else if (caseMonopoly[choixP].nbHotel == 1)
            {
                printf("vous possedez deja un hotel sur cette case. Vous ne pouvez donc pas acheter de maison\n");
            }

            ///4 maisons ///

            else if (caseMonopoly[choixP].nbMaison == 4)
            {
                printf("vous possedez 4 maisons, vous pouvez rajouter une maison, ce qui vous donnera un hotel. \n Une maison sur cette propriete vaut : %d credits\n", caseMonopoly[choixP].prix_case);

                printf("Voulez vous acheter une maison pour %d Credits ?\n",caseMonopoly[choixP].prix_case/2);
                if (*compteurHotel==5)
                {
                    printf("vous ne pouvez pas acheter d'hotel car il y en a deja 5 sur le plateau\n");
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
                        achat(joueur,caseMonopoly,compteurMaison,compteurHotel,choixNbMaison,choixP,i);
                        //achat(&joueur[i], compteurMaison, compteurHotel, choixNbMaison, choixP);
                    }
                }


            }       ///3 maisons///
            else if (caseMonopoly[choixP].nbMaison == 3)
            {
                printf("vous possedez 3 maisons, vous pouvez rajouter une maison, ou deux, ce qui vous donnera un hotel. \n Une maison sur cette propriete vaut : %d credits\n", caseMonopoly[choixP].prix_case);

                printf("Combien de maison voulez vous donc acheter ?\n");
                do
                {
                    printf("Saisir 1,2 ou 0\n");
                    fflush(stdin);
                    scanf("%d",&choixNbMaison);
                }
                while(choixNbMaison <0 || choixNbMaison >2);

                //Verification du nombre de maisons disponibles
                if (choixNbMaison==1 && *compteurMaison == 32)
                {
                    printf("Vous ne pouvez pas acheter de maison car il y en a deja 32 sur le plateau\n");
                }
                else if (choixNbMaison==2 && *compteurHotel == 5)
                {
                    printf("vous ne pouvez pas acheter d'hotel car il y en a deja 5 sur le plateau\n");
                }

                //achat des maisons
                else if (choixNbMaison ==1 || choixNbMaison==2 )
                {
                    achat(joueur,caseMonopoly,compteurMaison,compteurHotel,choixNbMaison,choixP,i);
                }

            }///2 maisons///
            else if (caseMonopoly[choixP].nbMaison == 2)
            {
                printf("vous possedez 2 maisons, vous pouvez rajouter une a deux maisons,ou trois, ce qui vous donnera un hotel. \n Une maison sur cette propriete vaut : %d credits\n", caseMonopoly[choixP].prix_case);

                printf("Combien de maison voulez vous donc acheter ?\n");
                do
                {
                    printf("Saisir 1,2,3 ou 0\n");
                    fflush(stdin);
                    scanf("%d",&choixNbMaison);
                }
                while(choixNbMaison <0 || choixNbMaison >3);

                if ((choixNbMaison==1 || choixNbMaison==2) && *compteurMaison+choixNbMaison > 32)
                {
                    printf("Vous ne pouvez pas acheter de maison car il y en a deja %d sur le plateau\n", compteurMaison);
                }
                else if (choixNbMaison==3 && *compteurHotel == 5)
                {
                    printf("vous ne pouvez pas acheter d'hotel car il y en a deja 5 sur le plateau\n");
                }

                else if (choixNbMaison >0 && choixNbMaison<4)
                {
                    achat(joueur,caseMonopoly,compteurMaison,compteurHotel,choixNbMaison,choixP,i);
                }

            }///1 maison///
            else if (caseMonopoly[choixP].nbMaison == 1)
            {
                printf("vous possedez 1 maisons, vous pouvez rajouter une a trois maisons, ou quatres, ce qui vous donnera un hotel. \n Une maison sur cette propriete vaut : %d credits\n", caseMonopoly[choixP].prix_case);
                printf("Combien de maison voulez vous donc acheter ?\n");
                do
                {
                    printf("Saisir 1,2,3,4 ou 0\n");
                    fflush(stdin);
                    scanf("%d",&choixNbMaison);
                }
                while(choixNbMaison <0 || choixNbMaison >4);

                if (choixNbMaison!=4 && *compteurMaison+choixNbMaison > 32)
                {
                    printf("Vous ne pouvez pas acheter de maison car il y en a deja %d sur le plateau\n", compteurMaison);
                }
                else if (choixNbMaison==4 && *compteurHotel == 5)
                {
                    printf("vous ne pouvez pas acheter d'hotel car il y en a deja 5 sur le plateau\n");
                }

                else if (choixNbMaison >0 && choixNbMaison<5)
                {
                    achat(joueur,caseMonopoly,compteurMaison,compteurHotel,choixNbMaison,choixP,i);
                }

            }/// Pas de maisons///
            else if (caseMonopoly[choixP].nbMaison == 0)
            {
                printf("vous ne possedez aucune maison, vous pouvez rajouter une a quatres maisons, ou cinq ce qui vous donnera un hotel. \n Une maison sur cette propriete vaut : %d credits\n", caseMonopoly[choixP].prix_case);
                printf("Combien de maison voulez vous donc acheter ?\n");
                do
                {
                    printf("Saisir 1,2,3,4,5 ou 0\n");
                    fflush(stdin);
                    scanf("%d",&choixNbMaison);
                }
                while(choixNbMaison <0 || choixNbMaison >5);

                if (choixNbMaison!=5 && *compteurMaison+choixNbMaison > 32)
                {
                    printf("Vous ne pouvez pas acheter de maison car il y en a deja %d sur le plateau\n", compteurMaison);
                }
                else if (choixNbMaison==5 && *compteurHotel == 5)
                {
                    printf("vous ne pouvez pas acheter d'hotel car il y en a deja 5 sur le plateau\n");
                }

                else if (choixNbMaison >0 && choixNbMaison<6)
                {
                    achat(joueur,caseMonopoly,compteurMaison,compteurHotel,choixNbMaison,choixP,i);
                }
            }

        }
        ///Utilisateur choisis de vendre///
        else if (choixM == 2)
        {
            ///affichage des proprietes du joueur///
            printf("Ou souhaitez vous vendre des maisons ? Vous possedez : \n");
            for (int j=0; j<24; j++)
            {
                if (joueur[i].possessions[j] != 0)
                {
                    printf("%d\n",joueur[i].possessions[j]);
                }
            }
            do
            {
                printf("Ou souhaitez vous donc vendre des maisons ?\n");
                fflush(stdin);
                scanf("%d",&choixP);
            }
            while((joueur[i].possessions[choixP]==0 && choixP== 4) && (choixP==10 && choixP== 18) && choixP== 25);


            ///Si il n'y a pas de maison sur la case selectionnee///

            if (caseMonopoly[choixP].nbMaison == 0)
            {
                printf("vous ne possedez pas de maisons sur cette propriete, vous ne pouvez donc pas vendre de maisons.\n");
            }

            ///Si il y a un hotel sur la case selectionnee///
            else if (caseMonopoly[choixP].nbHotel == 1)
            {
                printf(" Vous possedez un hotel, vous pouvez le vendre en plusieurs parties afin de n’avoir plus que quelques maisons ou tout vendre.\n");
                do
                {
                    printf(" Combien de maisons souhaitez vous vendre ? 1 maison vendue correspond a %d Credits. Vous pouvez vendre jusqu'a 5 maisons.\n", caseMonopoly[choixP].prix_case/2);
                    fflush(stdin);
                    scanf("%d", &choixNbMaison);
                }
                while(choixNbMaison>5 || choixNbMaison<0);

                ///Vente///
                if (5-choixNbMaison != 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il vous restera donc %d maisons sur cette propriete. Saisir 1 pour valider ou 0 pour annuler.\n", choixNbMaison, (caseMonopoly[choixP].prix_case/2)*choixNbMaison, 5-choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 && valid!=1);
                }
                else if (5-choixNbMaison == 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il ne vous restera plus aucune maison sur cette propriete.. Saisir 1 pour valider ou 0 pour annuler\n", choixNbMaison, (caseMonopoly[choixP].prix_case/2)*choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 && valid!=1);
                }
                if (valid == 1)
                {
                    vente(joueur,caseMonopoly,compteurMaison,compteurHotel,choixNbMaison,choixP,i);
                }
            }///4 maisons sur la case///
            else if (caseMonopoly[choixP].nbMaison == 4)
            {
                printf(" Vous possedez 4 maisons, vous pouvez en vendre jusqu'a 4.\n");
                do
                {
                    printf(" Combien de maisons souhaitez vous vendre ? 1 maison vendue correspond a %d Credits. Vous pouvez vendre jusqu'a 4 maisons\n", caseMonopoly[choixP].prix_case/2);
                    fflush(stdin);
                    scanf("%d", &choixNbMaison);
                }
                while (choixNbMaison>4 || choixNbMaison<0);

                if (4-choixNbMaison != 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il vous restera donc %d maisons sur cette propriete. Saisir 1 pour valider ou 0 pour annuler\n", choixNbMaison, (caseMonopoly[choixP].prix_case/2)*choixNbMaison, 4-choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 && valid!=1);
                }
                else if (4-choixNbMaison == 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il ne vous restera plus aucune maison sur cette propriete. Saisir 1 pour valider ou 0 pour annuler\n", choixNbMaison, (caseMonopoly[choixP].prix_case/2)*choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 && valid!=1);
                }
                if (valid == 1)
                {
                    vente(joueur,caseMonopoly,compteurMaison,compteurHotel,choixNbMaison,choixP,i);
                }
            }///3 maisons sur la case///
            else if (caseMonopoly[choixP].nbMaison == 3)
            {
                printf(" Vous possedez 3 maisons, vous pouvez en vendre jusqu'a 3.\n");
                do
                {
                    printf(" Combien de maisons souhaitez vous vendre ? 1 maison vendue correspond a %d Credits. Vous pouvez vendre jusqu'a 3 maisons\n", caseMonopoly[choixP].prix_case/2);
                    fflush(stdin);
                    scanf("%d", &choixNbMaison);
                }
                while (choixNbMaison>3 || choixNbMaison<0);

                if (3-choixNbMaison != 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il vous restera donc %d maisons sur cette propriete. Saisir 1 pour valider ou 0 pour annuler\n", choixNbMaison, (caseMonopoly[choixP].prix_case/2)*choixNbMaison, 3-choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 && valid!=1);
                }
                else if (3-choixNbMaison == 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il ne vous restera plus aucune maison sur cette propriete. Saisir 1 pour valider ou 0 pour annuler\n", choixNbMaison, (caseMonopoly[choixP].prix_case/2)*choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 && valid!=1);
                }
                if (valid == 1)
                {
                    vente(joueur,caseMonopoly,compteurMaison,compteurHotel,choixNbMaison,choixP,i);
                }
            }///2 maisons sur la case///
            else if (caseMonopoly[choixP].nbMaison == 2)
            {
                printf("Vous possedez 2 maisons, vous pouvez en vendre jusqu'a 2.\n");
                do
                {
                    printf(" Combien de maisons souhaitez vous vendre ? 1 maison vendue correspond a %d Credits. Vous pouvez vendre jusqu'a 2 maisons\n", caseMonopoly[choixP].prix_case/2);
                    fflush(stdin);
                    scanf("%d", &choixNbMaison);
                }
                while (choixNbMaison>2 || choixNbMaison<0);

                if (2-choixNbMaison != 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il vous restera donc %d maisons sur cette propriete. Saisir 1 pour valider ou 0 pour annuler\n", choixNbMaison, (caseMonopoly[choixP].prix_case/2)*choixNbMaison, 2-choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 && valid!=1);
                }
                else if (2-choixNbMaison == 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il ne vous restera plus aucune maison sur cette propriete. Saisir 1 pour valider ou 0 pour annuler\n", choixNbMaison, (caseMonopoly[choixP].prix_case/2)*choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 && valid!=1);
                }
                if (valid == 1)
                {
                    vente(joueur,caseMonopoly,compteurMaison,compteurHotel,choixNbMaison,choixP,i);
                }
            }///1 maison sur la case///
            else if (caseMonopoly[choixP].nbMaison == 1)
            {
                printf(" Vous possedez une maison, vous pouvez la vendre.\n");
                do
                {
                    printf(" Souhaitez vous vendre votre maison pour %d Credits. Selectionner 1 ou 0\n", caseMonopoly[choixP].prix_case/2);
                    fflush(stdin);
                    scanf("%d", &choixNbMaison);
                }
                while (choixNbMaison>1 || choixNbMaison<0);
                if (1-choixNbMaison != 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il vous restera donc %d maisons sur cette propriete. Saisir 1 pour valider ou 0 pour annuler\n", choixNbMaison, (caseMonopoly[choixP].prix_case/2)*choixNbMaison, 1-choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 && valid!=1);
                }
                else if (1-choixNbMaison == 0)
                {
                    do
                    {
                        printf("Souhaitez vous vendre %d maisons pour %d Credits ? il ne vous restera plus aucune maison sur cette propriete. Saisir 1 pour valider ou 0 pour annuler\n", choixNbMaison, (caseMonopoly[choixP].prix_case/2)*choixNbMaison);
                        fflush(stdin);
                        scanf("%d",&valid);
                    }
                    while(valid!=0 && valid!=1);
                }
                if (valid == 1)
                {
                    vente(joueur,caseMonopoly,compteurMaison,compteurHotel,choixNbMaison,choixP,i);
                }
            }
        }
    }
    while(choixM!=0); ///on effectue le programme tant que le choix initial est differend de 0
}






int main()
{
    struct caseMonop cases[28];
    int compteurMaisons=0, compteurHotels=0;

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
    joueur4.doubleOuNon = 22;

    joueur_t joueurs[4];
    joueurs[0]= joueur1;
    joueurs[1]= joueur2;
    joueurs[2]= joueur3;
    joueurs[3]= joueur4;


    struct caseMonop case0,case1,case2,case3,case4,case5,case6,case7,case8,case9,case10,case11,case12,case13,case14,case15,case16,case17,case18,case19,case20,case21,case22,case23,case24,case25,case26,case27;


    strcpy(case0.nomCase,"Depart");
    case0.position = 0;
    case0.prix_case=0;
    case0.famille=0;
    case0.proprieteDe=0;
    case0.nbMaison=0;
    case0.nbHotel=0;
    case0.typeCase=0;
    case0.prixLoyer=200;

    strcpy(case1.nomCase,"Dagobah");
    case1.position = 1;
    case1.prix_case=50;
    case1.famille=1;
    case1.proprieteDe=1;
    case1.nbMaison=2;
    case1.nbHotel=0;
    case1.typeCase=1;
    case1.prixLoyer=3;
    case1.prixloy1maison=13;
    case1.prixloy2maison=38;
    case1.prixloy3maison=94;
    case1.prixloy4maison=140;
    case1.prixloyhotel=210;


    strcpy(case2.nomCase,"Conseil Jedi");
    case2.position = 2;
    case2.prix_case=0;
    case2.famille=0;
    case2.proprieteDe=0;
    case2.nbMaison=0;
    case2.nbHotel=0;
    case2.typeCase=7;
    case2.prixLoyer=0;


    strcpy(case3.nomCase,"Hoth");
    case3.position = 3;
    case3.prix_case=75;
    case3.famille=1;
    case3.proprieteDe=0;
    case3.nbMaison=0;
    case3.nbHotel=0;
    case3.typeCase=1;
    case3.prixLoyer=4;
    case3.prixloy1maison=18;
    case3.prixloy2maison=56;
    case3.prixloy3maison=140;
    case3.prixloy4maison=210;
    case3.prixloyhotel=316;

    strcpy(case4.nomCase,"Spatioport I");
    case4.position = 4;
    case4.prix_case=200;
    case4.famille=9;
    case4.proprieteDe=1;
    case4.nbMaison=0;
    case4.nbHotel=0;
    case4.typeCase=2;
    case4.prixLoyer=50;

    strcpy(case5.nomCase,"Kashyyk");
    case5.position = 5;
    case5.prix_case=100;
    case5.famille=2;
    case5.proprieteDe=0;
    case5.nbMaison=0;
    case5.nbHotel=0;
    case5.typeCase=1;
    case5.prixLoyer=5;
    case5.prixloy1maison=25;
    case5.prixloy2maison=75;
    case5.prixloy3maison=187;
    case5.prixloy4maison=281;
    case5.prixloyhotel=422;

    strcpy(case6.nomCase,"Endor");
    case6.position = 6;
    case6.prix_case=125;
    case6.famille=2;
    case6.proprieteDe=0;
    case6.nbMaison=0;
    case6.nbHotel=0;
    case6.typeCase=2;
    case6.prixLoyer=6;
    case6.prixloy1maison=31;
    case6.prixloy2maison=93;
    case6.prixloy3maison=234;
    case6.prixloy4maison=351;
    case6.prixloyhotel=527;

    strcpy(case7.nomCase,"Prison");
    case7.position = 7;
    case7.prix_case=0;
    case7.famille=0;
    case7.proprieteDe=0;
    case7.nbMaison=0;
    case7.nbHotel=0;
    case7.typeCase=3;
    case7.prixLoyer=0;

    strcpy(case8.nomCase,"Mustafar");
    case8.position = 8;
    case8.prix_case=150;
    case8.famille=3;
    case8.proprieteDe=0;
    case8.nbMaison=0;
    case8.nbHotel=0;
    case8.typeCase=1;
    case8.prixLoyer=7;
    case8.prixloy1maison=37;
    case8.prixloy2maison=112;
    case8.prixloy3maison=281;
    case8.prixloy4maison=412;
    case8.prixloyhotel=632;

    strcpy(case9.nomCase,"Jakuu");
    case9.position = 9;
    case9.prix_case=175;
    case9.famille=3;
    case9.proprieteDe=0;
    case9.nbMaison=0;
    case9.nbHotel=0;
    case9.typeCase=1;
    case9.prixLoyer=9;
    case9.prixloy1maison=44;
    case9.prixloy2maison=1313;
    case9.prixloy3maison=328;
    case9.prixloy4maison=492;
    case9.prixloyhotel=738;

    strcpy(case10.nomCase,"Spatioport II");
    case10.position = 10;
    case10.prix_case=200;
    case10.famille=9;
    case10.proprieteDe=0;
    case10.nbMaison=0;
    case10.nbHotel=0;
    case10.typeCase=2;
    case10.prixLoyer=50;

    strcpy(case11.nomCase,"Jedha");
    case11.position = 11;
    case11.prix_case=200;
    case11.famille=4;
    case11.proprieteDe=0;
    case11.nbMaison=0;
    case11.nbHotel=0;
    case11.typeCase=1;
    case11.prixLoyer=10;
    case11.prixloy1maison=50;
    case11.prixloy2maison=150;
    case11.prixloy3maison=375;
    case11.prixloy4maison=562;
    case11.prixloyhotel=844;

    strcpy(case12.nomCase,"Alliance Sith");
    case12.position = 12;
    case12.prix_case=0;
    case12.famille=0;
    case12.proprieteDe=0;
    case12.nbMaison=0;
    case12.nbHotel=0;
    case12.typeCase=6;
    case12.prixLoyer=0;

    strcpy(case13.nomCase,"Tatooine");
    case13.position = 13;
    case13.prix_case=225;
    case13.famille=4;
    case13.proprieteDe=0;
    case13.nbMaison=0;
    case13.nbHotel=0;
    case13.typeCase=1;
    case13.prixLoyer=11;
    case13.prixloy1maison=56;
    case13.prixloy2maison=169;
    case13.prixloy3maison=421;
    case13.prixloy4maison=632;
    case13.prixloyhotel=949;

    strcpy(case14.nomCase,"Ordre 66");
    case14.position = 14;
    case14.prix_case=0;
    case14.famille=0;
    case14.proprieteDe=0;
    case14.nbMaison=0;
    case14.nbHotel=0;
    case14.typeCase=4;
    case14.prixLoyer=0;

    strcpy(case15.nomCase,"Kaminoo");
    case15.position = 15;
    case15.prix_case=250;
    case15.famille=5;
    case15.proprieteDe=0;
    case15.nbMaison=0;
    case15.nbHotel=0;
    case15.typeCase=1;
    case15.prixLoyer=13;
    case15.prixloy1maison=62;
    case15.prixloy2maison=187;
    case15.prixloy3maison=468;
    case15.prixloy4maison=703;
    case15.prixloyhotel=1054;

    strcpy(case16.nomCase,"Conseil Jedi");
    case16.position = 16;
    case16.prix_case=0;
    case16.famille=0;
    case16.proprieteDe=0;
    case16.nbMaison=0;
    case16.nbHotel=0;
    case16.typeCase=7;
    case16.prixLoyer=0;

    strcpy(case17.nomCase,"Geonosis");
    case17.position = 17;
    case17.prix_case=275;
    case17.famille=5;
    case17.proprieteDe=0;
    case17.nbMaison=0;
    case17.nbHotel=0;
    case17.typeCase=1;
    case17.prixLoyer=14;
    case17.prixloy1maison=69;
    case17.prixloy2maison=206;
    case17.prixloy3maison=515;
    case17.prixloy4maison=773;
    case17.prixloyhotel=1160;

    strcpy(case18.nomCase,"Spatioport III");
    case18.position = 18;
    case18.prix_case=200;
    case18.famille=9;
    case18.proprieteDe=0;
    case18.nbMaison=0;
    case18.nbHotel=0;
    case18.typeCase=2;
    case18.prixLoyer=50;

    strcpy(case19.nomCase,"Alderaan");
    case19.position = 19;
    case19.prix_case=300;
    case19.famille=6;
    case19.proprieteDe=0;
    case19.nbMaison=0;
    case19.nbHotel=0;
    case19.typeCase=1;
    case19.prixLoyer=15;
    case19.prixloy1maison=75;
    case19.prixloy2maison=225;
    case19.prixloy3maison=562;
    case19.prixloy4maison=843;
    case19.prixloyhotel=1265;

    strcpy(case20.nomCase,"Bespin");
    case20.position = 20;
    case20.prix_case=325;
    case20.famille=6;
    case20.proprieteDe=0;
    case20.nbMaison=0;
    case20.nbHotel=0;
    case20.typeCase=1;
    case20.prixLoyer=16;
    case20.prixloy1maison=81;
    case20.prixloy2maison=243;
    case20.prixloy3maison=609;
    case20.prixloy4maison=914;
    case20.prixloyhotel=1160;

    strcpy(case21.nomCase,"Arrestation");
    case21.position = 21;
    case21.prix_case=0;
    case21.famille=0;
    case21.proprieteDe=0;
    case21.nbMaison=0;
    case21.nbHotel=0;
    case21.typeCase=5;
    case21.prixLoyer=0;

    strcpy(case22.nomCase,"Yavin 4");
    case22.position = 22;
    case22.prix_case=350;
    case22.famille=7;
    case22.proprieteDe=0;
    case22.nbMaison=0;
    case22.nbHotel=0;
    case22.typeCase=1;
    case22.prixLoyer=18;
    case22.prixloy1maison=87;
    case22.prixloy2maison=262;
    case22.prixloy3maison=659;
    case22.prixloy4maison=984;
    case22.prixloyhotel=1371;

    strcpy(case23.nomCase,"Alliance Sith");
    case23.position = 23;
    case23.prix_case=0;
    case23.famille=0;
    case23.proprieteDe=0;
    case23.nbMaison=0;
    case23.nbHotel=0;
    case23.typeCase=6;
    case23.prixLoyer=0;

    strcpy(case24.nomCase,"Naboo");
    case24.position = 24;
    case24.prix_case=375;
    case24.famille=7;
    case24.proprieteDe=0;
    case24.nbMaison=0;
    case24.nbHotel=0;
    case24.typeCase=1;
    case24.prixLoyer=19;
    case24.prixloy1maison=93;
    case24.prixloy2maison=281;
    case24.prixloy3maison=703;
    case24.prixloy4maison=1054;
    case24.prixloyhotel=1582;

    strcpy(case25.nomCase,"Spatioport IV");
    case25.position = 25;
    case25.prix_case=200;
    case25.famille=9;
    case25.proprieteDe=0;
    case25.nbMaison=0;
    case25.nbHotel=0;
    case25.typeCase=2;
    case25.prixLoyer=50;

    strcpy(case26.nomCase,"Alderaan");
    case26.position = 26;
    case26.prix_case=400;
    case26.famille=8;
    case26.proprieteDe=0;
    case26.nbMaison=0;
    case26.nbHotel=0;
    case26.typeCase=1;
    case26.prixLoyer=20;
    case26.prixloy1maison=100;
    case26.prixloy2maison=300;
    case26.prixloy3maison=750;
    case26.prixloy4maison=1125;
    case26.prixloyhotel=1687;

    strcpy(case27.nomCase,"Corusant");
    case27.position = 27;
    case27.prix_case=450;
    case27.famille=8;
    case27.proprieteDe=0;
    case27.nbMaison=0;
    case27.nbHotel=0;
    case27.typeCase=1;
    case27.prixLoyer=23;
    case26.prixloy1maison=112;
    case26.prixloy2maison=337;
    case26.prixloy3maison=843;
    case26.prixloy4maison=1265;
    case26.prixloyhotel=1898;


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
