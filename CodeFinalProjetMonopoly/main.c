#include "header.h"

int main()
{
///déclaration des variables
    int choixDuMenuPrincipal,choixIntermediaire,nombreDeJoueur, nbr,deNumeroUn, deNumeroDeux,sommeDesLance,retournerMenu,positionDesJoueurs[4];
    int quitterLaBoucle = 0;
    joueur_t joueur1, joueur2, joueur3, joueur4, tableauDeJoueur[4] = {joueur1, joueur2, joueur3, joueur4};
    joueur_t ordreDePassageDesJoueurs[4];
    joueur1.numeroJoueur = 1;
    joueur2.numeroJoueur = 2;
    joueur3.numeroJoueur = 3;
    joueur4.numeroJoueur = 4;
    caseMonop TableauDesCasesDuMonopoly[28];

///Ouverture de la console en plein écran
    pleinEcran();

///Introduction du début du jeu
    //intro();

///Affichage et saisie dans le menu
    menu(&choixDuMenuPrincipal); //Affichage du menu
    choixmenu(&choixDuMenuPrincipal, tableauDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs,&nombreDeJoueur);
    Sleep(1000);

/// ////////////////////////////////////////////////////////////////////
///Boucle qui tourne tant que l'utilisateur ne demande pas de quitter///
/// ////////////////////////////////////////////////////////////////////

    while(choixDuMenuPrincipal != 5 /*&& (choixDuMenuPrincipal == 1 || choixDuMenuPrincipal == 2 || choixDuMenuPrincipal ==7)*/)
    {
        /// //////////////////////////////////////////////////////////////
        ///Si l'utilisateur veut lancer une partie commencée auparavant///
        /// //////////////////////////////////////////////////////////////

        while(choixDuMenuPrincipal == 1 && quitterLaBoucle == 0)
        {
            //On appelle le sous programme pour enregistrer qu'une partie est en cours
            SauvegardeVerifPartieCommencee();

            //On redonne les positions des joueurs et on affiche le plateau
            for (int i=0; i<nombreDeJoueur; i++)
            {
                positionDesJoueurs[i]=ordreDePassageDesJoueurs[i].position;
            }
            plateau(positionDesJoueurs,nombreDeJoueur);

            //Lancement des tours
            for(int t=0 ; t<=nombreDeJoueur ; t++)
            {
                //Si on a atteint le nombre de joueur, on remet t à zéro pour continuer la partie
                if(t==(nombreDeJoueur))
                {
                    t=0;
                }
                gotoligcol(11,115);
                printf("C'est a %s de jouer !",ordreDePassageDesJoueurs[t].nomJoueur);

                //On lance les dés une première fois
                ordreDePassageDesJoueurs[t].doubleOuNon = 0;
                lancerDeDes(&deNumeroUn,&deNumeroDeux);
                afficherDe(deNumeroUn,deNumeroDeux);
                sommeDesLance = deNumeroUn + deNumeroDeux;

                //On actualise la position
                ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,ordreDePassageDesJoueurs[t]);
                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                Sleep(1000);

                //Actualisation du plateau avec les nouvelles positions
                gotoligcol(21,115);
                printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                fflush(stdin);
                getchar();

                //On efface toutes les données des dés
                for(int l=5 ; l<22 ; l++)
                {
                    for(int c = 115 ; c<160 ; c++)
                    {
                        gotoligcol(l,c);
                        printf(" ");
                    }
                }

                //Actualisation du plateau
                plateau(positionDesJoueurs,nombreDeJoueur);

                //Action case

                //Cette boucle est utilisée ssi un double à été fait
                while(deNumeroDeux == deNumeroUn)
                {
                    if(ordreDePassageDesJoueurs[t].doubleOuNon == 2)
                    {
                        gotoligcol(22,115);
                        printf("Vous allez en prison ! \n");
                        ordreDePassageDesJoueurs[t].doubleOuNon = 0;
                        gotoligcol(21,115);
                        printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                        fflush(stdin);
                        getchar();

                        //On efface toutes les données des dés
                        for(int l=5 ; l<22 ; l++)
                        {
                            for(int c = 115 ; c<160 ; c++)
                            {
                                gotoligcol(l,c);
                                printf(" ");
                            }
                        }

                        //Actualisation du plateau
                        plateau(positionDesJoueurs,nombreDeJoueur);
                        break;
                    }

                    if(ordreDePassageDesJoueurs[t].doubleOuNon == 1)
                    {
                        lancerDeDes(&deNumeroUn,&deNumeroDeux);
                        afficherDe(deNumeroUn,deNumeroDeux);
                        sommeDesLance = deNumeroUn + deNumeroDeux;
                        ordreDePassageDesJoueurs[t].doubleOuNon = 2;
                        ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,ordreDePassageDesJoueurs[t]);
                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                        gotoligcol(21,115);
                        printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                        fflush(stdin);
                        getchar();

                        //On efface toutes les données des dés
                        for(int l=5 ; l<22 ; l++)
                        {
                            for(int c = 115 ; c<160 ; c++)
                            {
                                gotoligcol(l,c);
                                printf(" ");
                            }
                        }

                        //Actualisation du plateau
                        plateau(positionDesJoueurs,nombreDeJoueur);
                    }

                    if(ordreDePassageDesJoueurs[t].doubleOuNon == 0)
                    {
                        lancerDeDes(&deNumeroUn,&deNumeroDeux);
                        afficherDe(deNumeroUn,deNumeroDeux);
                        sommeDesLance = deNumeroUn + deNumeroDeux;
                        ordreDePassageDesJoueurs[t].doubleOuNon = 1;
                        ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,ordreDePassageDesJoueurs[t]);
                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                        gotoligcol(21,115);
                        printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                        fflush(stdin);
                        getchar();

                        //On efface toutes les données des dés
                        for(int l=5 ; l<22 ; l++)
                        {
                            for(int c = 115 ; c<160 ; c++)
                            {
                                gotoligcol(l,c);
                                printf(" ");
                            }
                        }

                        //Actualisation du plateau
                        plateau(positionDesJoueurs,nombreDeJoueur);
                    }
                }




                //Cette boucle permet de demander à l'utilisateur s'il veut revenir au programme principal à la fin du tour
                if(t==(nombreDeJoueur-1))
                {
                    do
                    {
                        gotoligcol(11,115);
                        printf("revenir au menu principal ? || OUI : 1 || NON : 0 || : ");
                        fflush(stdin);
                        scanf("%d",&retournerMenu);
                    }
                    while(retournerMenu != 0 && retournerMenu !=1);

                    if(retournerMenu == 1)
                    {
                        quitterLaBoucle = 1;
                        break;
                    }
                    if(retournerMenu == 0)
                    {
                        gotoligcol(3,115);
                        printf("                                                         ");
                        quitterLaBoucle = 0;
                    }

                }
            }

        }


        /// //////////////////////////////////////////////////////////////
        /// ////Si l'utilisateur veut lancer une partie nouvelle//////////
        /// //////////////////////////////////////////////////////////////

        while(choixDuMenuPrincipal == 2 && quitterLaBoucle == 0)
        {
            //On sauvegarde le fait qu'une partie a été lancé
            SauvegardeVerifPartieCommencee();

            //Suppression du retour chariot à la fin des noms pour faciliter l'affichage
            for(int i=0 ; i<nombreDeJoueur ; i++)
            {
                int j=0;
                while(tableauDeJoueur[i].nomJoueur[j] != '\n')
                {
                    j++;
                }
                tableauDeJoueur[i].nomJoueur[j] = '\0';
            }

            //Mise en place de l'ordre des joueurs
            srand(time(NULL));
            choisirQuiCommence(ordreDePassageDesJoueurs,tableauDeJoueur,nombreDeJoueur);

            //On initialise les données des joueurs
            for (int i=0; i<nombreDeJoueur; i++)
            {
                positionDesJoueurs[i]=0;
                for(int j=0 ; j<28 ; j++)
                {
                    ordreDePassageDesJoueurs[i].possessions[j] = 0;
                }

                ordreDePassageDesJoueurs[i].position = 0;
                ordreDePassageDesJoueurs[i].argent = 1500;
                ordreDePassageDesJoueurs[i].tourPrison = 0;
                ordreDePassageDesJoueurs[i].libertePrison = 0;
                for(int k=0 ; k<10 ; k++)
                {
                    ordreDePassageDesJoueurs[i].familles[k] = 0;
                }
                ordreDePassageDesJoueurs[i].doubleOuNon = 0;
                ordreDePassageDesJoueurs[i].nbPropriete = 0;

            }
            //On actualise le plateau
            plateau(positionDesJoueurs,nombreDeJoueur);

            //Lancement des tours
            for(int t=0 ; t<=nombreDeJoueur ; t++)
            {
                //Si on a atteint le nombre de joueur, on remet t à zéro pour continuer la partie
                if(t==(nombreDeJoueur))
                {
                    t=0;
                }
                gotoligcol(11,115);
                printf("C'est a %s de jouer !",ordreDePassageDesJoueurs[t].nomJoueur);

                //On lance les dés une première fois
                ordreDePassageDesJoueurs[t].doubleOuNon = 0;
                lancerDeDes(&deNumeroUn,&deNumeroDeux);
                afficherDe(deNumeroUn,deNumeroDeux);
                sommeDesLance = deNumeroUn + deNumeroDeux;

                //On actualise la position des joueurs
                ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,ordreDePassageDesJoueurs[t]);
                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                Sleep(500);

                gotoligcol(21,115);
                printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                fflush(stdin);
                getchar();

                //Actualisation du plateau
                plateau(positionDesJoueurs,nombreDeJoueur);

                //Action case

                //Cette boucle est utilisée ssi un double a été fait
                while(deNumeroDeux == deNumeroUn)
                {
                    if(ordreDePassageDesJoueurs[t].doubleOuNon == 2)
                    {
                        gotoligcol(22,115);
                        printf("Vous allez en prison ! \n");
                        ordreDePassageDesJoueurs[t].doubleOuNon = 0;
                        gotoligcol(21,115);
                        printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                        fflush(stdin);
                        getchar();

                        //On efface toutes les données des dés
                        for(int l=5 ; l<22 ; l++)
                        {
                            for(int c = 115 ; c<160 ; c++)
                            {
                                gotoligcol(l,c);
                                printf(" ");
                            }
                        }

                        //Actualisation du plateau
                        plateau(positionDesJoueurs,nombreDeJoueur);
                        break;
                    }

                    if(ordreDePassageDesJoueurs[t].doubleOuNon == 1)
                    {
                        lancerDeDes(&deNumeroUn,&deNumeroDeux);
                        afficherDe(deNumeroUn,deNumeroDeux);
                        sommeDesLance = deNumeroUn + deNumeroDeux;
                        ordreDePassageDesJoueurs[t].doubleOuNon = 2;
                        ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,ordreDePassageDesJoueurs[t]);
                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                        gotoligcol(21,115);
                        printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                        fflush(stdin);
                        getchar();

                        //On efface toutes les données des dés
                        for(int l=5 ; l<22 ; l++)
                        {
                            for(int c = 115 ; c<160 ; c++)
                            {
                                gotoligcol(l,c);
                                printf(" ");
                            }
                        }

                        //Actualisation du plateau
                        plateau(positionDesJoueurs,nombreDeJoueur);
                    }

                    if(ordreDePassageDesJoueurs[t].doubleOuNon == 0)
                    {
                        lancerDeDes(&deNumeroUn,&deNumeroDeux);
                        afficherDe(deNumeroUn,deNumeroDeux);
                        sommeDesLance = deNumeroUn + deNumeroDeux;
                        ordreDePassageDesJoueurs[t].doubleOuNon = 1;
                        ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,ordreDePassageDesJoueurs[t]);
                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                        gotoligcol(21,115);
                        printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                        fflush(stdin);
                        getchar();

                        //On efface toutes les données des dés
                        for(int l=5 ; l<22 ; l++)
                        {
                            for(int c = 115 ; c<160 ; c++)
                            {
                                gotoligcol(l,c);
                                printf(" ");
                            }
                        }

                        //Actualisation du plateau
                        plateau(positionDesJoueurs,nombreDeJoueur);
                    }
                }

                //On demande à l'utilisateur à la fin du tour s'il veut revenir au menu principal
                if(t==(nombreDeJoueur-1))
                {
                    do
                    {
                        gotoligcol(3,115);
                        printf("revenir au menu principal ? || OUI : 1 || NON : 0 || : ");
                        fflush(stdin);
                        scanf("%d",&retournerMenu);
                    }
                    while(retournerMenu != 0 && retournerMenu !=1);

                    if(retournerMenu == 1)
                    {
                        quitterLaBoucle = 1;
                        break;
                    }
                    if(retournerMenu == 0)
                    {
                        gotoligcol(3,115);
                        printf("                                                         ");
                        quitterLaBoucle = 0;
                    }
                }
            }
        }

        /// //////////////////////////////////////////////////////////////
        ///Si l'utilisateur veut reprendre une partie qui est en cours////
        /// //////////////////////////////////////////////////////////////

        while(choixDuMenuPrincipal == 7 && quitterLaBoucle == 0)
        {
            //On actualise le plateau
            plateau(positionDesJoueurs,nombreDeJoueur);

            //Lancement des tours
            for(int t=0 ; t<=nombreDeJoueur ; t++)
            {
                //Si on a atteint le nombre de joueur, on remet t à zéro pour continuer la partie
                if(t==(nombreDeJoueur))
                {
                    t=0;
                }
                gotoligcol(5,115);
                printf("C'est a %s de jouer !",ordreDePassageDesJoueurs[t].nomJoueur);

                //On lance une premuère fois les dés
                lancerDeDes(&deNumeroUn,&deNumeroDeux);
                afficherDe(deNumeroUn,deNumeroDeux);
                sommeDesLance = deNumeroUn + deNumeroDeux;

                //On actualise la position des joueurs
                ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,ordreDePassageDesJoueurs[t]);
                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                Sleep(1000);

                gotoligcol(21,115);
                printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                fflush(stdin);
                getchar();

                //On efface toutes les données des dés
                for(int l=5 ; l<22 ; l++)
                {
                    for(int c = 115 ; c<160 ; c++)
                    {
                        gotoligcol(l,c);
                        printf(" ");
                    }
                }

                //Actualisation du plateau
                plateau(positionDesJoueurs,nombreDeJoueur);

                //Action case

                //Cette boucle s'effectue ssi un double a été effectué
                while(deNumeroDeux == deNumeroUn)
                {
                    if(ordreDePassageDesJoueurs[t].doubleOuNon == 2)
                    {
                        gotoligcol(22,115);
                        printf("Vous allez en prison ! \n");
                        ordreDePassageDesJoueurs[t].doubleOuNon = 0;
                        gotoligcol(21,115);
                        printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                        fflush(stdin);
                        getchar();

                        //On efface toutes les données des dés
                        for(int l=5 ; l<22 ; l++)
                        {
                            for(int c = 115 ; c<160 ; c++)
                            {
                                gotoligcol(l,c);
                                printf(" ");
                            }
                        }

                        //Actualisation du plateau
                        plateau(positionDesJoueurs,nombreDeJoueur);
                        break;
                    }

                    if(ordreDePassageDesJoueurs[t].doubleOuNon == 1)
                    {
                        lancerDeDes(&deNumeroUn,&deNumeroDeux);
                        afficherDe(deNumeroUn,deNumeroDeux);
                        sommeDesLance = deNumeroUn + deNumeroDeux;
                        ordreDePassageDesJoueurs[t].doubleOuNon = 2;
                        ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,ordreDePassageDesJoueurs[t]);
                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                        gotoligcol(21,115);
                        printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                        fflush(stdin);
                        getchar();

                        //On efface toutes les données des dés
                        for(int l=5 ; l<22 ; l++)
                        {
                            for(int c = 115 ; c<160 ; c++)
                            {
                                gotoligcol(l,c);
                                printf(" ");
                            }
                        }

                        //Actualisation du plateau
                        plateau(positionDesJoueurs,nombreDeJoueur);
                    }

                    if(ordreDePassageDesJoueurs[t].doubleOuNon == 0)
                    {
                        lancerDeDes(&deNumeroUn,&deNumeroDeux);
                        afficherDe(deNumeroUn,deNumeroDeux);
                        sommeDesLance = deNumeroUn + deNumeroDeux;
                        ordreDePassageDesJoueurs[t].doubleOuNon = 1;
                        ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,ordreDePassageDesJoueurs[t]);
                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                        gotoligcol(21,115);
                        printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                        fflush(stdin);
                        getchar();



                        //Actualisation du plateau
                        plateau(positionDesJoueurs,nombreDeJoueur);
                    }
                }

                //A la fin du tour, on demande à l'utilisateur s'il veut revenir au menu principal
                if(t==(nombreDeJoueur-1))
                {
                    do
                    {
                        gotoligcol(3,115);
                        printf("revenir au menu principal ? || OUI : 1 || NON : 0 || : ");
                        fflush(stdin);
                        scanf("%d",&retournerMenu);
                    }
                    while(retournerMenu != 0 && retournerMenu !=1);
                    if(retournerMenu == 1)
                    {
                        quitterLaBoucle = 1;
                        break;
                    }
                    if(retournerMenu == 0)
                    {
                        gotoligcol(3,115);
                        printf("                                                         ");
                        quitterLaBoucle = 0;
                    }

                }
            }

        }

        //Si l'utilisateur sort de la boucle, on affiche le menu principal
        system("cls");
        menu(&choixDuMenuPrincipal);
        choixmenu(&choixDuMenuPrincipal,tableauDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs,&nombreDeJoueur);
        quitterLaBoucle = 0;
    }
    return 0;
}
