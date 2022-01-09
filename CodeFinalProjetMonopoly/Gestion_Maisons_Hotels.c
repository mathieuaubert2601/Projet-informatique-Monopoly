#include "header.h"

void achat( joueur_t tabJoueur[], caseMonop Tabcase[], int *compteurMaison, int *compteurHotel, int nbrMaison, int choixP, int i)
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

void vente(joueur_t tabJoueur[], caseMonop Tabcase[], int *compteurMaison, int *compteurHotel, int nbrMaison, int choixP, int i)
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



void gestion_Prop(joueur_t joueur[], caseMonop caseMonopoly[], int *compteurMaison, int *compteurHotel, int i)
{

    int choixM, choixP, choixNbMaison = 0, valid, somme_prop;

    //Menu principal permettant de choisir l'action a faire
    if (joueur[i].nbPropriete == 0)
    {
        printf("Vous ne possedez aucune propriete.");
    }
    else if (joueur[i].nbPropriete != 0)
    {
        do
        {
            do
            {
                printf("Souhaitez vous acheter une/des maisons(1), vendre une/des maisons(2) ou quitter ce menu(0) ?\n");
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

                if (caseMonopoly[choixP].nbMaison == 0 && caseMonopoly[choixP].nbHotel == 0)
                {
                    printf("vous ne possedez pas de maisons sur cette propriete, vous ne pouvez donc pas vendre de maisons.\n");
                }

                ///Si il y a un hotel sur la case selectionnee///
                else if (caseMonopoly[choixP].nbHotel == 1 && caseMonopoly[choixP].nbMaison == 0)
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
        while(choixM!=0); ///on effectue le programme tant que le choix initial est different de 0
    }

}
