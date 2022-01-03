#include "header.h"

int main()
{
///déclaration des variables
    int choixDuMenuPrincipal,nombreDeJoueur, nbr,deNumeroUn, deNumeroDeux,sommeDesLance,retournerMenu,positionDesJoueurs[4];
    joueur_t joueur1, joueur2, joueur3, joueur4, tableauDeJoueur[4] = {joueur1, joueur2, joueur3, joueur4};
    joueur_t ordreDePassageDesJoueurs[4];
    joueur1.numeroJoueur = 1;
    joueur2.numeroJoueur = 2;
    joueur3.numeroJoueur = 3;
    joueur4.numeroJoueur = 4;
    joueur1.doubleOuNon = 0;
    joueur2.doubleOuNon = 0;
    joueur3.doubleOuNon = 0;
    joueur4.doubleOuNon = 0;
    joueur1.position = 0;
    joueur2.position = 0;
    joueur3.position = 0;
    joueur4.position = 0;
    caseMonop TableauDesCasesDuMonopoly[28];

///Ouverture de la console en plein écran
    pleinEcran();

///Introduction du début du jeu
    //intro();

///Affichage et saisie dans le menu
    choixDuMenuPrincipal = menu(); //Affichage du menu
    nbr = choixmenu(choixDuMenuPrincipal, tableauDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

///Actualisation du nombre de joueur
    nombreDeJoueur = nbr;



    while(choixDuMenuPrincipal != 5)
    {
        ///Si l'utilisateur demande de Lancer une partie déja chargée
        while(choixDuMenuPrincipal == 1)
        {
            SauvegardeVerifPartieCommencee();
            ///Lancement de la partie
            for (int i=0;i<nombreDeJoueur;i++)
            {
                positionDesJoueurs[i]=ordreDePassageDesJoueurs[i].position;
            }
            plateau(positionDesJoueurs,nombreDeJoueur);

            ///Lancement des tours
            for(int t=0 ;t<=nombreDeJoueur ;t++)
            {
                if(t==(nombreDeJoueur))
                {
                    t=0;
                }
                gotoligcol(11,115);
                printf("C'est a %s de jouer !",ordreDePassageDesJoueurs[t].nomJoueur);

                //Lancement des dés
                lanceDesGlobal(&deNumeroUn,&deNumeroDeux,&sommeDesLance,ordreDePassageDesJoueurs[t]);
                Sleep(1000);

                //Déplacement du joueur

                ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,ordreDePassageDesJoueurs[t]);
                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                gotoligcol(21,115);
                printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                fflush(stdin);
                getchar();

                //On efface toutes les données des dés
                for(int l=5 ; l<22 ;l++)
                {
                    for(int c = 115 ; c<160 ; c++)
                    {
                        gotoligcol(l,c);
                        printf(" ");
                    }
                }

                //Actualisation du plateau
                plateau(positionDesJoueurs,nombreDeJoueur);

                //Si le joueur veut revenir au menu principal
                if(t==(nombreDeJoueur-1))
                {
                    do
                    {
                        gotoligcol(11,115);
                        printf("revenir au menu principal ? || OUI : 1 || NON : 0 || : ");
                        fflush(stdin);
                        scanf("%d",&retournerMenu);
                    }while(retournerMenu != 0 && retournerMenu !=1);
                    if(retournerMenu == 1)
                    {
                        system("cls");
                        choixDuMenuPrincipal = menu();
                        choixmenu(choixDuMenuPrincipal,tableauDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                        break;
                    }
                    if(retournerMenu == 0)
                    {
                        gotoligcol(3,115);
                        printf("                                                         ");
                    }

                }
            }

        }


    ///Si l'utilisateur demande de Lancer une nouvelle partie

        if(choixDuMenuPrincipal == 2)
        {
            SauvegardeVerifPartieCommencee();
            ///Suppression du retour chariot à la fin des noms

            for(int i=0 ; i<nombreDeJoueur ; i++)
            {
                 int j=0;
                 while(tableauDeJoueur[i].nomJoueur[j] != '\n')
                 {
                     j++;
                 }
                 tableauDeJoueur[i].nomJoueur[j] = '\0';
            }

            ///Mise en place de l'ordre des joueurs
            srand(time(NULL));
            choisirQuiCommence(ordreDePassageDesJoueurs,tableauDeJoueur,nombreDeJoueur);

            ///Lancement de la partie
            for (int i=0;i<nombreDeJoueur;i++)
            {
                positionDesJoueurs[i]=0;
                ordreDePassageDesJoueurs[i].position = 0;
            }
            plateau(positionDesJoueurs,nombreDeJoueur);

            ///Lancement des tours
            for(int t=0 ;t<=nombreDeJoueur ;t++)
            {
                if(t==(nombreDeJoueur))
                {
                    t=0;
                }
                gotoligcol(11,115);
                printf("C'est a %s de jouer !",ordreDePassageDesJoueurs[t].nomJoueur);

                //Lancement des dés
                lanceDesGlobal(&deNumeroUn,&deNumeroDeux,&sommeDesLance,ordreDePassageDesJoueurs[t]);
                Sleep(1000);
                //Déplacement du joueur


                ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,ordreDePassageDesJoueurs[t]);
                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                gotoligcol(21,115);
                printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                fflush(stdin);
                getchar();

                //On efface toutes les données des dés
                for(int l=5 ; l<22 ;l++)
                {
                    for(int c = 115 ; c<160 ; c++)
                    {
                        gotoligcol(l,c);
                        printf(" ");
                    }
                }

                //Actualisation du plateau
                plateau(positionDesJoueurs,nombreDeJoueur);

                // le joueur veut revenir au menu principal
                if(t==(nombreDeJoueur-1))
                {
                    do
                    {
                        gotoligcol(3,115);
                        printf("revenir au menu principal ? || OUI : 1 || NON : 0 || : ");
                        fflush(stdin);
                        scanf("%d",&retournerMenu);
                    }while(retournerMenu != 0 && retournerMenu !=1);
                    if(retournerMenu == 1)
                    {
                        system("cls");
                        choixDuMenuPrincipal = menu();
                        choixmenu(choixDuMenuPrincipal,tableauDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                        break;
                    }
                    if(retournerMenu == 0)
                    {
                        gotoligcol(3,115);
                        printf("                                                         ");
                    }
                }
            }
        }

        ///Si l'utilisateur revient au menu et demande à reprendre la partie en cours;
        while(choixDuMenuPrincipal == 7)
        {
            ///Lancement de la partie
            for (int i=0;i<nombreDeJoueur;i++)
            {
                positionDesJoueurs[i]=ordreDePassageDesJoueurs[i].position;
            }
            plateau(positionDesJoueurs,nombreDeJoueur);

            ///Lancement des tours
            for(int t=0 ;t<=nombreDeJoueur ;t++)
            {
                if(t==(nombreDeJoueur))
                {
                    t=0;
                }
                gotoligcol(5,115);
                printf("C'est a %s de jouer !",ordreDePassageDesJoueurs[t].nomJoueur);

                //Lancement des dés
                lanceDesGlobal(&deNumeroUn,&deNumeroDeux,&sommeDesLance,ordreDePassageDesJoueurs[t]);
                Sleep(1000);

                //Déplacement du joueur

                ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,ordreDePassageDesJoueurs[t]);
                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                gotoligcol(21,115);
                printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                fflush(stdin);
                getchar();

                //On efface toutes les données des dés
                for(int l=5 ; l<22 ;l++)
                {
                    for(int c = 115 ; c<160 ; c++)
                    {
                        gotoligcol(l,c);
                        printf(" ");
                    }
                }

                //Actualisation du plateau
                plateau(positionDesJoueurs,nombreDeJoueur);

                //Si le joueur veut revenir au menu principal
                if(t==(nombreDeJoueur-1))
                {
                    do
                    {
                        gotoligcol(3,115);
                        printf("revenir au menu principal ? || OUI : 1 || NON : 0 || : ");
                        fflush(stdin);
                        scanf("%d",&retournerMenu);
                    }while(retournerMenu != 0 && retournerMenu !=1);
                    if(retournerMenu == 1)
                    {
                        system("cls");
                        choixDuMenuPrincipal = menu();
                        choixmenu(choixDuMenuPrincipal,tableauDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                        break;
                    }
                    if(retournerMenu == 0)
                    {
                        gotoligcol(3,115);
                        printf("                                                         ");
                    }

                }
            }

        }
    }





    return 0;
}
