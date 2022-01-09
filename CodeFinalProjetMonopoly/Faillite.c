#include "header.h"

void faillite_case (joueur_t Tabjoueur[],caseMonop tabc[],int* compteurMaisons,int* compteurHotels, int tour, int prix, int prop_DE, int compteur)
{
    int choixF,choixH;
    gotoligcol(15,114);
    printf("Vous n'avez pas assez d'argent pour payer ce loyer");
    do
    {
        gotoligcol(16,114);
        printf("Abandonner(0)? ou hypothequer(1)?");
        fflush(stdin);
        scanf("%d",&choixF);
    }
    while(choixF!=0 || choixF!=1);
    if(choixF==1)
    {
        if (Tabjoueur[tour].nbPropriete>0)
        {
            while(Tabjoueur[tour].argent<=prix && compteur<Tabjoueur[tour].nbPropriete)
            {
                hypotheque_faillite(Tabjoueur,tabc, compteurMaisons, compteurHotels, tour);
            }
            if (Tabjoueur[tour].argent>=prix)
            {
                Tabjoueur[tour].argent-= prix;
                Tabjoueur[prop_DE].argent += prix;
                gotoligcol(15,114);
                printf("                                              ");
                gotoligcol(16,114);
                printf("                                              ");
                gotoligcol(15,114);
                printf("%s a paye %d credits a %s", Tabjoueur[tour].nomJoueur,prix, Tabjoueur[prop_DE].nomJoueur);
            }
            else if (Tabjoueur[tour].argent<=prix && compteur==Tabjoueur[tour].nbPropriete)
            {
                gotoligcol(15,114);
                printf("                                              ");
                gotoligcol(16,114);
                printf("                                              ");
                gotoligcol(15,114);
                printf("Vous n'avez plus de propriete a hypothequer");
                gotoligcol(16,114);
                printf("%s a fait faillite !", Tabjoueur[tour]);
                Sleep(1500);

                Tabjoueur[prop_DE].argent+= Tabjoueur[tour].argent;
                Tabjoueur[tour].argent = -100;
                for (int d=1; d<28; d++)
                {
                    if (Tabjoueur[tour].possessions[d]==d)
                    {
                        if (tabc[d].hypotheque==0)
                        {
                            tabc[d].proprieteDe = Tabjoueur[prop_DE].numeroJoueur;
                            Tabjoueur[prop_DE].familles[tabc[d].famille] +=1 ;
                            Tabjoueur[tour].familles[tabc[d].famille] -=1;
                            Tabjoueur[tour].possessions[d] = 0;
                            Tabjoueur[prop_DE].possessions[d] = d;
                            *compteurHotels -= tabc[d].nbHotel;
                            *compteurMaisons -= tabc[d].nbMaison;
                            tabc[d].nbMaison=0;
                            tabc[d].nbHotel=0;

                        }
                        else if (tabc[d].hypotheque==1)
                        {
                            gotoligcol(15,114);
                            printf("                                              ");
                            gotoligcol(16,114);
                            printf("                                              ");
                            gotoligcol(15,114);
                            tabc[d].proprieteDe = Tabjoueur[prop_DE].numeroJoueur;
                            Tabjoueur[prop_DE].familles[tabc[d].famille] +=1 ;
                            Tabjoueur[tour].familles[tabc[d].famille] -=1;
                            Tabjoueur[tour].possessions[d] = 0;
                            Tabjoueur[prop_DE].possessions[d] = d;

                            do
                            {
                                gotoligcol(15,114);
                                printf("%s est hypothequee", tabc[d].nomCase);
                                gotoligcol(16,114);
                                printf("%s souhaitez vous lever l'hypotheque pour %d credits(1)", (tabc[d].prix_case)+tabc[d].prix_case*0.1);
                                gotoligcol(17,114);
                                printf("ou payer %d credits et lever l'hypotheque plus tard(2)?",tabc[d].prix_case*0.1);
                                fflush(stdin);
                                scanf("%d",&choixH);
                            }
                            while(choixH!=1 || choixH!=0);
                            if (choixH == 1)
                            {
                                Tabjoueur[prop_DE].argent -= (tabc[d].prix_case)+tabc[d].prix_case*0.1;
                                tabc[d].hypotheque = 0;
                            }
                            else if (choixH == 0)
                            {
                                Tabjoueur[prop_DE].argent -= tabc[d].prix_case*0.1;
                            }
                        }
                    }
                }
            }
        }
        else if (Tabjoueur[tour].nbPropriete==0)
        {
            {
                gotoligcol(15,114);
                printf("                                              ");
                gotoligcol(16,114);
                printf("                                              ");
                gotoligcol(15,114);
                printf("Vous n'avez pas de propriete a hypothequer");
                gotoligcol(16,114);
                printf("%s a fait faillite !", Tabjoueur[tour]);
                Sleep(1500);

                Tabjoueur[prop_DE].argent+= Tabjoueur[tour].argent;
                Tabjoueur[tour].argent = -100;
                for (int d=1; d<28; d++)
                {
                    if (Tabjoueur[tour].possessions[d]==d)
                    {
                        if (tabc[d].hypotheque==0)
                        {
                            tabc[d].proprieteDe = Tabjoueur[prop_DE].numeroJoueur;
                            Tabjoueur[prop_DE].familles[tabc[d].famille] +=1 ;
                            Tabjoueur[tour].familles[tabc[d].famille] -=1;
                            Tabjoueur[tour].possessions[d] = 0;
                            Tabjoueur[prop_DE].possessions[d] = d;
                            *compteurHotels -= tabc[d].nbHotel;
                            *compteurMaisons -= tabc[d].nbMaison;
                            tabc[d].nbMaison=0;
                            tabc[d].nbHotel=0;

                        }
                        else if (tabc[d].hypotheque==1)
                        {
                            gotoligcol(15,114);
                            printf("                                              ");
                            gotoligcol(16,114);
                            printf("                                              ");
                            gotoligcol(15,114);
                            tabc[d].proprieteDe = Tabjoueur[prop_DE].numeroJoueur;
                            Tabjoueur[prop_DE].familles[tabc[d].famille] +=1 ;
                            Tabjoueur[tour].familles[tabc[d].famille] -=1;
                            Tabjoueur[tour].possessions[d] = 0;
                            Tabjoueur[prop_DE].possessions[d] = d;

                            do
                            {
                                gotoligcol(15,114);
                                printf("%s est hypothequee", tabc[d].nomCase);
                                gotoligcol(16,114);
                                printf("%s souhaitez vous lever l'hypotheque pour %d credits(1)", (tabc[d].prix_case)+tabc[d].prix_case*0.1);
                                gotoligcol(17,114);
                                printf("ou payer %d credits et lever l'hypotheque plus tard(2)?",tabc[d].prix_case*0.1);
                                fflush(stdin);
                                scanf("%d",&choixH);
                            }
                            while(choixH!=1 || choixH!=0);
                            if (choixH == 1)
                            {
                                Tabjoueur[prop_DE].argent -= (tabc[d].prix_case)+tabc[d].prix_case*0.1;
                                tabc[d].hypotheque = 0;
                            }
                            else if (choixH == 0)
                            {
                                Tabjoueur[prop_DE].argent -= tabc[d].prix_case*0.1;
                            }
                        }
                    }
                }
            }
        }

    }
    else if (choixF==0)
    {
        {
            gotoligcol(15,114);
            printf("                                              ");
            gotoligcol(16,114);
            printf("                                              ");
            gotoligcol(16,114);
            printf("%s a fait faillite !", Tabjoueur[tour]);
            Sleep(1500);

            Tabjoueur[prop_DE].argent+= Tabjoueur[tour].argent;
            Tabjoueur[tour].argent = -100;
            for (int d=1; d<28; d++)
            {
                if (Tabjoueur[tour].possessions[d]==d)
                {
                    if (tabc[d].hypotheque==0)
                    {
                        tabc[d].proprieteDe = Tabjoueur[prop_DE].numeroJoueur;
                        Tabjoueur[prop_DE].familles[tabc[d].famille] +=1 ;
                        Tabjoueur[tour].familles[tabc[d].famille] -=1;
                        Tabjoueur[tour].possessions[d] = 0;
                        Tabjoueur[prop_DE].possessions[d] = d;

                    }
                    else if (tabc[d].hypotheque==1)
                    {
                        gotoligcol(15,114);
                        printf("                                              ");
                        gotoligcol(16,114);
                        printf("                                              ");
                        gotoligcol(15,114);
                        tabc[d].proprieteDe = Tabjoueur[prop_DE].numeroJoueur;
                        Tabjoueur[prop_DE].familles[tabc[d].famille] +=1 ;
                        Tabjoueur[tour].familles[tabc[d].famille] -=1;
                        Tabjoueur[tour].possessions[d] = 0;
                        Tabjoueur[prop_DE].possessions[d] = d;
                        *compteurHotels -= tabc[d].nbHotel;
                        *compteurMaisons -= tabc[d].nbMaison;
                        tabc[d].nbMaison=0;
                        tabc[d].nbHotel=0;

                        do
                        {
                            gotoligcol(15,114);
                            printf("%s est hypothequee", tabc[d].nomCase);
                            gotoligcol(16,114);
                            printf("%s souhaitez vous lever l'hypotheque pour %d credits(1)", (tabc[d].prix_case)+tabc[d].prix_case*0.1);
                            gotoligcol(17,114);
                            printf("ou payer %d credits et lever l'hypotheque plus tard(2)?",tabc[d].prix_case*0.1);
                            fflush(stdin);
                            scanf("%d",&choixH);
                        }
                        while(choixH!=1 || choixH!=0);
                        if (choixH == 1)
                        {
                            Tabjoueur[prop_DE].argent -= (tabc[d].prix_case)+tabc[d].prix_case*0.1;
                            tabc[d].hypotheque = 0;
                        }
                        else if (choixH == 0)
                        {
                            Tabjoueur[prop_DE].argent -= tabc[d].prix_case*0.1;
                        }
                    }
                }
            }
        }
    }
}


void faillite_carte (joueur_t Tabjoueur[],caseMonop tabc[],int* compteurMaisons,int* compteurHotels, int tour, int prix, int compteur)
{
    int choixF,choixH;
    gotoligcol(15,114);
    printf("Vous n'avez pas assez d'argent pour payer cette taxe");
    do
    {
        gotoligcol(16,114);
        printf("Abandonner(0)? ou hypothequer(1)?");
        fflush(stdin);
        scanf("%d",&choixF);
    }
    while(choixF!=0 || choixF!=1);
    if(choixF==1)
    {
        if (Tabjoueur[tour].nbPropriete>0)
        {
            while(Tabjoueur[tour].argent<=prix && compteur<Tabjoueur[tour].nbPropriete)
            {
                hypotheque_faillite(Tabjoueur,tabc, compteurMaisons, compteurHotels, tour);
            }
            if (Tabjoueur[tour].argent>=prix)
            {
                Tabjoueur[tour].argent-= prix;
                gotoligcol(15,114);
                printf("                                              ");
                gotoligcol(16,114);
                printf("                                              ");
                gotoligcol(15,114);
                printf("%s a paye %d credits ", Tabjoueur[tour].nomJoueur,prix);
            }
            else if (Tabjoueur[tour].argent<=prix && compteur==Tabjoueur[tour].nbPropriete)
            {
                gotoligcol(15,114);
                printf("                                              ");
                gotoligcol(16,114);
                printf("                                              ");
                gotoligcol(15,114);
                printf("Vous n'avez plus de propriete a hypothequer");
                gotoligcol(16,114);
                printf("%s a fait faillite !", Tabjoueur[tour]);
                Sleep(1500);
                Tabjoueur[tour].argent = -100;
                for (int d=1; d<28; d++)
                {
                    if (Tabjoueur[tour].possessions[d]==d)
                    {
                            tabc[d].proprieteDe = 0;
                            Tabjoueur[tour].familles[tabc[d].famille] =0;
                            Tabjoueur[tour].possessions[d] = 0;
                            *compteurHotels -= tabc[d].nbHotel;
                            *compteurMaisons -= tabc[d].nbMaison;
                            tabc[d].nbMaison=0;
                            tabc[d].nbHotel=0;
                            tabc[d].hypotheque=0;

                        }

                    }

            }
        }
        else if (Tabjoueur[tour].nbPropriete==0)
        {
            {
                gotoligcol(15,114);
                printf("                                              ");
                gotoligcol(16,114);
                printf("                                              ");
                gotoligcol(15,114);
                printf("Vous n'avez plus de propriete a hypothequer");
                gotoligcol(16,114);
                printf("%s a fait faillite !", Tabjoueur[tour]);
                Sleep(1500);
                Tabjoueur[tour].argent = -100;
                for (int d=1; d<28; d++)
                {
                    if (Tabjoueur[tour].possessions[d]==d)
                    {
                            tabc[d].proprieteDe = 0;
                            Tabjoueur[tour].familles[tabc[d].famille] =0;
                            Tabjoueur[tour].possessions[d] = 0;
                            *compteurHotels -= tabc[d].nbHotel;
                            *compteurMaisons -= tabc[d].nbMaison;
                            tabc[d].nbMaison=0;
                            tabc[d].nbHotel=0;
                            tabc[d].hypotheque=0;

                        }

                    }

            }
        }
    }
    else if (choixF==0)
    {
        {
                gotoligcol(15,114);
                printf("                                              ");
                gotoligcol(16,114);
                printf("                                              ");
                gotoligcol(15,114);
                printf("Vous n'avez plus de propriete a hypothequer");
                gotoligcol(16,114);
                printf("%s a fait faillite !", Tabjoueur[tour]);
                Sleep(1500);
                Tabjoueur[tour].argent = -100;
                for (int d=1; d<28; d++)
                {
                    if (Tabjoueur[tour].possessions[d]==d)
                    {
                            tabc[d].proprieteDe = 0;
                            Tabjoueur[tour].familles[tabc[d].famille] =0;
                            Tabjoueur[tour].possessions[d] = 0;
                            *compteurHotels -= tabc[d].nbHotel;
                            *compteurMaisons -= tabc[d].nbMaison;
                            tabc[d].nbMaison=0;
                            tabc[d].nbHotel=0;
                            tabc[d].hypotheque=0;

                        }

                    }

            }
        }

}
