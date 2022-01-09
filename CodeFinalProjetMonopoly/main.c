#include "header.h"

int main()
{
///Permet d'obtenir une valeur aléatoire toujours différente
    srand(time(NULL));
///déclaration des variables
    int choixDuMenuPrincipal,choixIntermediaire,nombreDeJoueur, nbr,deNumeroUn, deNumeroDeux,sommeDesLance,retournerMenu,choixPrison,positionDesJoueurs[4];
    int quitterLaBoucle = 0, compteurMaisons = 0, compteurHotels = 0;
    int numeroCarteSith = rand() % 15;
    int numeroCarteChance = rand() % 15;
    int positionTemporaire;
    int joueurEnFaillite[4];
    int compteurFaillite = 0;
    char choixT;
    joueur_t joueur1, joueur2, joueur3, joueur4, tableauDeJoueur[4] = {joueur1, joueur2, joueur3, joueur4};
    joueur_t ordreDePassageDesJoueurs[4];
    joueur1.numeroJoueur = 1;
    joueur2.numeroJoueur = 2;
    joueur3.numeroJoueur = 3;
    joueur4.numeroJoueur = 4;
    caseMonop TableauDesCasesDuMonopoly[28];
    remplirTableauDeCase(TableauDesCasesDuMonopoly);

///Ouverture de la console en plein écran
    pleinEcran();

///Introduction du début du jeu
    //intro();

///Affichage et saisie dans le menu
    menu(&choixDuMenuPrincipal); //Affichage du menu
    choixmenu(&choixDuMenuPrincipal, tableauDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs,&nombreDeJoueur,&numeroCarteSith,&numeroCarteChance,joueurEnFaillite,compteurFaillite);
    Sleep(1000);

/// ////////////////////////////////////////////////////////////////////
///Boucle qui tourne tant que l'utilisateur ne demande pas de quitter///
/// ////////////////////////////////////////////////////////////////////

    while(choixDuMenuPrincipal != 5)
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
            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

            //Lancement des tours
            for(int t=0 ; t<=nombreDeJoueur ; t++)
            {
                //Si on a atteint le nombre de joueur, on remet t à zéro pour continuer la partie
                if(t==(nombreDeJoueur))
                {
                    t=0;
                }
                if(joueurEnFaillite[t] != 0)
                {
                    t++;
                }
                while(compteurFaillite == (nombreDeJoueur-1))
                {
                    system("cls");
                    printf("La Partie est terminee !\n");
                    printf("%s, vous avez gagne",ordreDePassageDesJoueurs[t].nomJoueur);
                    Sleep(5000);
                    system("cls");
                    menu(&choixDuMenuPrincipal); //Affichage du menu
                    choixmenu(&choixDuMenuPrincipal, tableauDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs,&nombreDeJoueur,&numeroCarteSith,&numeroCarteChance,joueurEnFaillite,compteurFaillite);
                }

                //Si le joueur qui doit joueur n'est pas en prison
                if(ordreDePassageDesJoueurs[t].tourPrison == 0)
                {
                    //Affichage du nom du joueur qui doit jouer
                    gotoligcol(3,115);
                    printf("C'est a %s de jouer !",ordreDePassageDesJoueurs[t].nomJoueur);

                    //Affichage de l'argent du joueur
                    gotoligcol(43, 73);
                    Color(15,0);
                    printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                    Color(12,0);

                    //On propose les différents choix
                    ordreDePassageDesJoueurs[t].doubleOuNon = 0;
                    do
                    {
                        do
                        {
                            gotoligcol(5,115);
                            printf("Selectionner choix :");
                            gotoligcol(6,115);
                            printf("L pour lancer les des");
                            gotoligcol(7,115);
                            printf("G pour acheter ou vendre des maisons");
                            gotoligcol(8,115);
                            printf("E pour proceder a des echanges ");
                            gotoligcol(9,115);
                            printf("H pour acceder au menu de l'hypotheque");
                            gotoligcol(10,115);
                            fflush(stdin);
                            scanf("%c",&choixT);
                        }
                        while(choixT!='L' && choixT!='G' && choixT!='H' && choixT!='E');

                        //boucle qui s'execute si l'utilisateur veut acheter ou vendre des maisons
                        if (choixT == 'G')
                        {
                            system("cls");
                            gestion_Prop(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t);
                            Sleep(1500);
                            system("cls");
                        }
                        //Boucle qui s'execute si l'utilisateur veut hypothequer une propriété
                        else if (choixT == 'H')
                        {
                            system("cls");
                            hypotheque(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t);
                            Sleep(1500);
                            system("cls");
                        }
                        //Boucle qui s'execute si l'utilisateur veut faire des échanges
                        else if (choixT == 'E')
                        {
                            system("cls");
                            echange(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t, nombreDeJoueur);
                            Sleep(1500);
                            system("cls");
                        }
                        //Actualisation du plateau
                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                        //Affichage de l'argent du joueur
                        gotoligcol(43, 73);
                        Color(15,0);
                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                        Color(12,0);
                    }
                    while(choixT!='L');

                    if(ordreDePassageDesJoueurs[t].argent < 0)
                    {
                        joueurEnFaillite[t] = 1;
                        compteurFaillite ++ ;
                        system("cls");
                        printf("Vous avez perdu !");
                        Sleep(2000);

                    }

                    if(ordreDePassageDesJoueurs[t].argent > 0)
                    {
                        //On lance les dés une première fois
                        int deNumeroDeux = rand() % 6 + 1;
                        int deNumeroUn = rand() % 6 + 1;
                        afficherDe(deNumeroUn,deNumeroDeux);
                        sommeDesLance = deNumeroUn + deNumeroDeux;

                        //On actualise la position
                        ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                        Sleep(1500);

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
                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                        //Affichage de l'argent du joueur
                        gotoligcol(43, 73);
                        Color(15,0);
                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                        Color(12,0);

                        //Action case
                        positionTemporaire = ordreDePassageDesJoueurs[t].position;
                        actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                        //On vérifie si le joueur était sur une case avec une carte
                        if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                        {
                            gotoligcol(3,115);
                            printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                            fflush(stdin);
                            getchar();

                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);

                        }
                        if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                        {
                            //On resauvegarde les bonnes positions
                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);
                            //On lance le sous programme action case
                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                        }
                        if(ordreDePassageDesJoueurs[t].argent < 0)
                        {
                            joueurEnFaillite[t] = 1;
                            compteurFaillite ++ ;
                            system("cls");
                            printf("Vous avez perdu !");
                            Sleep(2000);

                        }
                        if(ordreDePassageDesJoueurs[t].argent > 0)
                        {
                            //On resauvegarde les bonnes positions
                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);

                            //Cette boucle est utilisée ssi un double à été fait
                            while(deNumeroDeux == deNumeroUn)
                            {
                                if(ordreDePassageDesJoueurs[t].doubleOuNon == 1)
                                {
                                    //On lance les dés
                                    lancerDeDes(&deNumeroUn,&deNumeroDeux);
                                    afficherDe(deNumeroUn,deNumeroDeux);
                                    Sleep(1500);
                                    sommeDesLance = deNumeroUn + deNumeroDeux;
                                    ordreDePassageDesJoueurs[t].doubleOuNon = 2;
                                    ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                                    positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                    if(deNumeroDeux != deNumeroUn)
                                    {
                                        gotoligcol(43,1);
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
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);

                                        //Action case
                                        positionTemporaire = ordreDePassageDesJoueurs[t].position;
                                        actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                                        //On vérifie si le joueur était sur une case avec une carte
                                        if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                                        {
                                            gotoligcol(3,115);
                                            printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                                            fflush(stdin);
                                            getchar();

                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);

                                        }
                                        if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                                        {
                                            //On resauvegarde les bonnes positions
                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);
                                            //On lance le sous programme action case
                                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                                        }
                                        if(ordreDePassageDesJoueurs[t].argent < 0)
                                        {
                                            joueurEnFaillite[t] = 1;
                                            compteurFaillite ++ ;
                                            system("cls");
                                            printf("Vous avez perdu !");
                                            Sleep(2000);
                                            break;

                                        }
                                        //On resauvegarde les bonnes positions
                                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                        //Actualisation du plateau
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);
                                    }
                                    else if(deNumeroUn == deNumeroDeux)
                                    {
                                        gotoligcol(22,115);
                                        printf("Vous allez en prison ! \n");
                                        ordreDePassageDesJoueurs[t].doubleOuNon = 0;


                                        gotoligcol(43,1);
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
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);


                                        break;
                                    }



                                }

                                if(ordreDePassageDesJoueurs[t].doubleOuNon == 0)
                                {
                                    lancerDeDes(&deNumeroUn,&deNumeroDeux);
                                    afficherDe(deNumeroUn,deNumeroDeux);
                                    Sleep(1500);
                                    sommeDesLance = deNumeroUn + deNumeroDeux;
                                    ordreDePassageDesJoueurs[t].doubleOuNon = 1;
                                    ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                                    positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

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
                                    plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                    //Affichage de l'argent du joueur
                                    gotoligcol(43, 73);
                                    Color(15,0);
                                    printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                    Color(12,0);

                                    //Action case
                                    positionTemporaire = ordreDePassageDesJoueurs[t].position;
                                    actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                                    //On vérifie si le joueur était sur une case avec une carte
                                    if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                                    {
                                        gotoligcol(3,115);
                                        printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                                        fflush(stdin);
                                        getchar();

                                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                        //Actualisation du plateau
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);

                                    }
                                    if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                                    {
                                        //On resauvegarde les bonnes positions
                                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                        //Actualisation du plateau
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);
                                        //On lance le sous programme action case
                                        actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                                    }
                                    if(ordreDePassageDesJoueurs[t].argent < 0)
                                    {
                                        joueurEnFaillite[t] = 1;
                                        compteurFaillite ++ ;
                                        system("cls");
                                        printf("Vous avez perdu !");
                                        Sleep(2000);
                                        break;

                                    }
                                    //On resauvegarde les bonnes positions
                                    positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                    //Actualisation du plateau
                                    plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                    //Affichage de l'argent du joueur
                                    gotoligcol(43, 73);
                                    Color(15,0);
                                    printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                    Color(12,0);

                                }
                            }

                            //Cette boucle permet de demander à l'utilisateur s'il veut revenir au programme principal à la fin du tour
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

                }
                //Si le joueur est en prison
                else if(ordreDePassageDesJoueurs[t].tourPrison != 0 )
                {
                    //On lance le programme des tours prison
                    prisonChoix(&choixPrison);
                    prison(choixPrison,ordreDePassageDesJoueurs,t,nombreDeJoueur);

                    //Si jamais on a fait 3 tours
                    if(ordreDePassageDesJoueurs[t].tourPrison == 4 && choixPrison != 3)
                    {
                        printf("\nVous sortez de prison en payant 50 credits !");
                        ordreDePassageDesJoueurs[t].argent -= 50;
                        ordreDePassageDesJoueurs[t].tourPrison = 0;
                        system("cls");
                        //Affichage du nom du joueur qui doit jouer
                        gotoligcol(3,115);
                        printf("C'est a %s de jouer !",ordreDePassageDesJoueurs[t].nomJoueur);

                        //Affichage de l'argent du joueur
                        gotoligcol(43, 73);
                        Color(15,0);
                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                        Color(12,0);

                        //On propose les différents choix
                        ordreDePassageDesJoueurs[t].doubleOuNon = 0;
                        do
                        {
                            do
                            {
                                gotoligcol(5,115);
                                printf("Selectionner choix :");
                                gotoligcol(6,115);
                                printf("L pour lancer les des");
                                gotoligcol(7,115);
                                printf("G pour acheter ou vendre des maisons");
                                gotoligcol(8,115);
                                printf("E pour proceder a des echanges ");
                                gotoligcol(9,115);
                                printf("H pour acceder au menu de l'hypotheque");
                                gotoligcol(10,115);
                                fflush(stdin);
                                scanf("%c",&choixT);
                            }
                            while(choixT!='L' && choixT!='G' && choixT!='H' && choixT!='E');

                            //boucle qui s'execute si l'utilisateur veut acheter ou vendre des maisons
                            if (choixT == 'G')
                            {
                                system("cls");
                                gestion_Prop(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t);
                                Sleep(1500);
                                system("cls");
                            }
                            //Boucle qui s'execute si l'utilisateur veut hypothequer une propriété
                            else if (choixT == 'H')
                            {
                                system("cls");
                                hypotheque(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t);
                                Sleep(1500);
                                system("cls");
                            }
                            //Boucle qui s'execute si l'utilisateur veut faire des échanges
                            else if (choixT == 'E')
                            {
                                system("cls");
                                echange(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t, nombreDeJoueur);
                                Sleep(1500);
                                system("cls");
                            }
                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);
                        }
                        while(choixT!='L');

                        if(ordreDePassageDesJoueurs[t].argent < 0)
                        {
                            joueurEnFaillite[t] = 1;
                            compteurFaillite ++ ;
                            system("cls");
                            printf("Vous avez perdu !");
                            Sleep(2000);

                        }

                        if(ordreDePassageDesJoueurs[t].argent > 0)
                        {
                            //On lance les dés une première fois
                            int deNumeroDeux = rand() % 6 + 1;
                            int deNumeroUn = rand() % 6 + 1;
                            afficherDe(deNumeroUn,deNumeroDeux);
                            sommeDesLance = deNumeroUn + deNumeroDeux;

                            //On actualise la position
                            ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                            Sleep(1500);

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
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);

                            //Action case
                            positionTemporaire = ordreDePassageDesJoueurs[t].position;
                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                            //On vérifie si le joueur était sur une case avec une carte
                            if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                            {
                                gotoligcol(3,115);
                                printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                                fflush(stdin);
                                getchar();

                                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                //Actualisation du plateau
                                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                //Affichage de l'argent du joueur
                                gotoligcol(43, 73);
                                Color(15,0);
                                printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                Color(12,0);

                            }
                            if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                            {
                                //On resauvegarde les bonnes positions
                                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                //Actualisation du plateau
                                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                //Affichage de l'argent du joueur
                                gotoligcol(43, 73);
                                Color(15,0);
                                printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                Color(12,0);
                                //On lance le sous programme action case
                                actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                            }
                            if(ordreDePassageDesJoueurs[t].argent < 0)
                            {
                                joueurEnFaillite[t] = 1;
                                compteurFaillite ++ ;
                                system("cls");
                                printf("Vous avez perdu !");
                                Sleep(2000);

                            }
                            if(ordreDePassageDesJoueurs[t].argent > 0)
                            {
                                //On resauvegarde les bonnes positions
                                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                //Actualisation du plateau
                                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                //Affichage de l'argent du joueur
                                gotoligcol(43, 73);
                                Color(15,0);
                                printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                Color(12,0);

                                //Cette boucle est utilisée ssi un double à été fait
                                while(deNumeroDeux == deNumeroUn)
                                {
                                    if(ordreDePassageDesJoueurs[t].doubleOuNon == 1)
                                    {
                                        //On lance les dés
                                        lancerDeDes(&deNumeroUn,&deNumeroDeux);
                                        afficherDe(deNumeroUn,deNumeroDeux);
                                        Sleep(1500);
                                        sommeDesLance = deNumeroUn + deNumeroDeux;
                                        ordreDePassageDesJoueurs[t].doubleOuNon = 2;
                                        ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                        if(deNumeroDeux != deNumeroUn)
                                        {
                                            gotoligcol(43,1);
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
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);

                                            //Action case
                                            positionTemporaire = ordreDePassageDesJoueurs[t].position;
                                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                                            //On vérifie si le joueur était sur une case avec une carte
                                            if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                                            {
                                                gotoligcol(3,115);
                                                printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                                                fflush(stdin);
                                                getchar();

                                                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                                //Actualisation du plateau
                                                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                                //Affichage de l'argent du joueur
                                                gotoligcol(43, 73);
                                                Color(15,0);
                                                printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                                Color(12,0);

                                            }
                                            if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                                            {
                                                //On resauvegarde les bonnes positions
                                                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                                //Actualisation du plateau
                                                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                                //Affichage de l'argent du joueur
                                                gotoligcol(43, 73);
                                                Color(15,0);
                                                printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                                Color(12,0);
                                                //On lance le sous programme action case
                                                actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                                            }
                                            if(ordreDePassageDesJoueurs[t].argent < 0)
                                            {
                                                joueurEnFaillite[t] = 1;
                                                compteurFaillite ++ ;
                                                system("cls");
                                                printf("Vous avez perdu !");
                                                Sleep(2000);
                                                break;

                                            }
                                            //On resauvegarde les bonnes positions
                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);
                                        }
                                        else if(deNumeroUn == deNumeroDeux)
                                        {
                                            gotoligcol(22,115);
                                            printf("Vous allez en prison ! \n");
                                            ordreDePassageDesJoueurs[t].doubleOuNon = 0;


                                            gotoligcol(43,1);
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
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);


                                            break;
                                        }



                                    }

                                    if(ordreDePassageDesJoueurs[t].doubleOuNon == 0)
                                    {
                                        lancerDeDes(&deNumeroUn,&deNumeroDeux);
                                        afficherDe(deNumeroUn,deNumeroDeux);
                                        Sleep(1500);
                                        sommeDesLance = deNumeroUn + deNumeroDeux;
                                        ordreDePassageDesJoueurs[t].doubleOuNon = 1;
                                        ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

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
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);

                                        //Action case
                                        positionTemporaire = ordreDePassageDesJoueurs[t].position;
                                        actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                                        //On vérifie si le joueur était sur une case avec une carte
                                        if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                                        {
                                            gotoligcol(3,115);
                                            printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                                            fflush(stdin);
                                            getchar();

                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);

                                        }
                                        if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                                        {
                                            //On resauvegarde les bonnes positions
                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);
                                            //On lance le sous programme action case
                                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                                        }
                                        if(ordreDePassageDesJoueurs[t].argent < 0)
                                        {
                                            joueurEnFaillite[t] = 1;
                                            compteurFaillite ++ ;
                                            system("cls");
                                            printf("Vous avez perdu !");
                                            Sleep(2000);
                                            break;

                                        }
                                        if(ordreDePassageDesJoueurs[t].argent > 0)
                                        {

                                            //On resauvegarde les bonnes positions
                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);
                                        }

                                    }
                                }


                            }

                        }

                    }

                    //Si on a fait un double
                    if(choixPrison == 3)
                    {
                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                        //Action case
                        positionTemporaire = ordreDePassageDesJoueurs[t].position;
                        actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                        //On vérifie si le joueur était sur une case avec une carte
                        if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                        {
                            gotoligcol(3,115);
                            printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                            fflush(stdin);
                            getchar();

                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);

                        }
                        if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                        {
                            //On resauvegarde les bonnes positions
                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);
                            //On lance le sous programme action case
                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                        }
                        if(ordreDePassageDesJoueurs[t].argent < 0)
                        {
                            joueurEnFaillite[t] = 1;
                            compteurFaillite ++ ;
                            system("cls");
                            printf("Vous avez perdu !");
                            Sleep(2000);
                            break;

                        }
                        if(ordreDePassageDesJoueurs[t].argent > 0)
                        {
                            //On resauvegarde les bonnes positions
                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);
                        }


                    }

                    //Si on choisit d'attendre
                    if(choixPrison == 5 || choixPrison == 1 || choixPrison == 2 || choixPrison == 4)
                    {
                        system("cls");
                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                    }
                    //Cette boucle permet de demander à l'utilisateur s'il veut revenir au programme principal à la fin du tour
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
                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

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
                ordreDePassageDesJoueurs[i].numeroJoueur = i+1;
                for(int k=0 ; k<10 ; k++)
                {
                    ordreDePassageDesJoueurs[i].familles[k] = 0;
                }
                ordreDePassageDesJoueurs[i].doubleOuNon = 0;
                ordreDePassageDesJoueurs[i].nbPropriete = 0;
                joueurEnFaillite[i]=0;

            }

            ordreDePassageDesJoueurs[0].argent = -510;
            //On actualise le plateau
            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

            //Lancement des tours
            for(int t=0 ; t<=nombreDeJoueur ; t++)
            {
                //Si on a atteint le nombre de joueur, on remet t à zéro pour continuer la partie
                if(t==(nombreDeJoueur))
                {
                    t=0;
                }
                if(joueurEnFaillite[t] != 0)
                {
                    t++;
                }
                while(compteurFaillite == (nombreDeJoueur-1))
                {
                    system("cls");
                    printf("La Partie est terminee !\n");
                    printf("%s, vous avez gagne",ordreDePassageDesJoueurs[t].nomJoueur);
                    Sleep(5000);
                    system("cls");
                    menu(&choixDuMenuPrincipal); //Affichage du menu
                    choixmenu(&choixDuMenuPrincipal, tableauDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs,&nombreDeJoueur,&numeroCarteSith,&numeroCarteChance,joueurEnFaillite,compteurFaillite);
                }

                //Si le joueur qui doit joueur n'est pas en prison
                if(ordreDePassageDesJoueurs[t].tourPrison == 0)
                {
                    //Affichage du nom du joueur qui doit jouer
                    gotoligcol(3,115);
                    printf("C'est a %s de jouer !",ordreDePassageDesJoueurs[t].nomJoueur);

                    //Affichage de l'argent du joueur
                    gotoligcol(43, 73);
                    Color(15,0);
                    printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                    Color(12,0);

                    //On propose les différents choix
                    ordreDePassageDesJoueurs[t].doubleOuNon = 0;
                    do
                    {
                        do
                        {
                            gotoligcol(5,115);
                            printf("Selectionner choix :");
                            gotoligcol(6,115);
                            printf("L pour lancer les des");
                            gotoligcol(7,115);
                            printf("G pour acheter ou vendre des maisons");
                            gotoligcol(8,115);
                            printf("E pour proceder a des echanges ");
                            gotoligcol(9,115);
                            printf("H pour acceder au menu de l'hypotheque");
                            gotoligcol(10,115);
                            fflush(stdin);
                            scanf("%c",&choixT);
                        }
                        while(choixT!='L' && choixT!='G' && choixT!='H' && choixT!='E');

                        //boucle qui s'execute si l'utilisateur veut acheter ou vendre des maisons
                        if (choixT == 'G')
                        {
                            system("cls");
                            gestion_Prop(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t);
                            Sleep(1500);
                            system("cls");
                        }
                        //Boucle qui s'execute si l'utilisateur veut hypothequer une propriété
                        else if (choixT == 'H')
                        {
                            system("cls");
                            hypotheque(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t);
                            Sleep(1500);
                            system("cls");
                        }
                        //Boucle qui s'execute si l'utilisateur veut faire des échanges
                        else if (choixT == 'E')
                        {
                            system("cls");
                            echange(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t, nombreDeJoueur);
                            Sleep(1500);
                            system("cls");
                        }
                        //Actualisation du plateau
                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                        //Affichage de l'argent du joueur
                        gotoligcol(43, 73);
                        Color(15,0);
                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                        Color(12,0);
                    }
                    while(choixT!='L');

                    if(ordreDePassageDesJoueurs[t].argent < 0)
                    {
                        joueurEnFaillite[t] = 1;
                        compteurFaillite ++ ;
                        system("cls");
                        printf("Vous avez perdu !");
                        Sleep(2000);

                    }

                    if(ordreDePassageDesJoueurs[t].argent > 0)
                    {
                        //On lance les dés une première fois
                        int deNumeroDeux = rand() % 6 + 1;
                        int deNumeroUn = rand() % 6 + 1;
                        afficherDe(deNumeroUn,deNumeroDeux);
                        sommeDesLance = deNumeroUn + deNumeroDeux;

                        //On actualise la position
                        ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                        Sleep(1500);

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
                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                        //Affichage de l'argent du joueur
                        gotoligcol(43, 73);
                        Color(15,0);
                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                        Color(12,0);

                        //Action case
                        positionTemporaire = ordreDePassageDesJoueurs[t].position;
                        actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                        //On vérifie si le joueur était sur une case avec une carte
                        if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                        {
                            gotoligcol(3,115);
                            printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                            fflush(stdin);
                            getchar();

                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);

                        }
                        if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                        {
                            //On resauvegarde les bonnes positions
                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);
                            //On lance le sous programme action case
                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                        }
                        if(ordreDePassageDesJoueurs[t].argent < 0)
                        {
                            joueurEnFaillite[t] = 1;
                            compteurFaillite ++ ;
                            system("cls");
                            printf("Vous avez perdu !");
                            Sleep(2000);

                        }
                        if(ordreDePassageDesJoueurs[t].argent > 0)
                        {
                            //On resauvegarde les bonnes positions
                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);

                            //Cette boucle est utilisée ssi un double à été fait
                            while(deNumeroDeux == deNumeroUn)
                            {
                                if(ordreDePassageDesJoueurs[t].doubleOuNon == 1)
                                {
                                    //On lance les dés
                                    lancerDeDes(&deNumeroUn,&deNumeroDeux);
                                    afficherDe(deNumeroUn,deNumeroDeux);
                                    Sleep(1500);
                                    sommeDesLance = deNumeroUn + deNumeroDeux;
                                    ordreDePassageDesJoueurs[t].doubleOuNon = 2;
                                    ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                                    positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                    if(deNumeroDeux != deNumeroUn)
                                    {
                                        gotoligcol(43,1);
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
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);

                                        //Action case
                                        positionTemporaire = ordreDePassageDesJoueurs[t].position;
                                        actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                                        //On vérifie si le joueur était sur une case avec une carte
                                        if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                                        {
                                            gotoligcol(3,115);
                                            printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                                            fflush(stdin);
                                            getchar();

                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);

                                        }
                                        if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                                        {
                                            //On resauvegarde les bonnes positions
                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);
                                            //On lance le sous programme action case
                                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                                        }
                                        if(ordreDePassageDesJoueurs[t].argent < 0)
                                        {
                                            joueurEnFaillite[t] = 1;
                                            compteurFaillite ++ ;
                                            system("cls");
                                            printf("Vous avez perdu !");
                                            Sleep(2000);
                                            break;

                                        }
                                        //On resauvegarde les bonnes positions
                                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                        //Actualisation du plateau
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);
                                    }
                                    else if(deNumeroUn == deNumeroDeux)
                                    {
                                        gotoligcol(22,115);
                                        printf("Vous allez en prison ! \n");
                                        ordreDePassageDesJoueurs[t].doubleOuNon = 0;


                                        gotoligcol(43,1);
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
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);


                                        break;
                                    }



                                }

                                if(ordreDePassageDesJoueurs[t].doubleOuNon == 0)
                                {
                                    lancerDeDes(&deNumeroUn,&deNumeroDeux);
                                    afficherDe(deNumeroUn,deNumeroDeux);
                                    Sleep(1500);
                                    sommeDesLance = deNumeroUn + deNumeroDeux;
                                    ordreDePassageDesJoueurs[t].doubleOuNon = 1;
                                    ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                                    positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

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
                                    plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                    //Affichage de l'argent du joueur
                                    gotoligcol(43, 73);
                                    Color(15,0);
                                    printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                    Color(12,0);

                                    //Action case
                                    positionTemporaire = ordreDePassageDesJoueurs[t].position;
                                    actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                                    //On vérifie si le joueur était sur une case avec une carte
                                    if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                                    {
                                        gotoligcol(3,115);
                                        printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                                        fflush(stdin);
                                        getchar();

                                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                        //Actualisation du plateau
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);

                                    }
                                    if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                                    {
                                        //On resauvegarde les bonnes positions
                                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                        //Actualisation du plateau
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);
                                        //On lance le sous programme action case
                                        actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                                    }
                                    if(ordreDePassageDesJoueurs[t].argent < 0)
                                    {
                                        joueurEnFaillite[t] = 1;
                                        compteurFaillite ++ ;
                                        system("cls");
                                        printf("Vous avez perdu !");
                                        Sleep(2000);
                                        break;

                                    }
                                    //On resauvegarde les bonnes positions
                                    positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                    //Actualisation du plateau
                                    plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                    //Affichage de l'argent du joueur
                                    gotoligcol(43, 73);
                                    Color(15,0);
                                    printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                    Color(12,0);

                                }
                            }

                            //Cette boucle permet de demander à l'utilisateur s'il veut revenir au programme principal à la fin du tour
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

                }
                //Si le joueur est en prison
                else if(ordreDePassageDesJoueurs[t].tourPrison != 0 )
                {
                    //On lance le programme des tours prison
                    prisonChoix(&choixPrison);
                    prison(choixPrison,ordreDePassageDesJoueurs,t,nombreDeJoueur);

                    //Si jamais on a fait 3 tours
                    if(ordreDePassageDesJoueurs[t].tourPrison == 4 && choixPrison != 3)
                    {
                        printf("\nVous sortez de prison en payant 50 credits !");
                        ordreDePassageDesJoueurs[t].argent -= 50;
                        ordreDePassageDesJoueurs[t].tourPrison = 0;
                        system("cls");
                        //Affichage du nom du joueur qui doit jouer
                        gotoligcol(3,115);
                        printf("C'est a %s de jouer !",ordreDePassageDesJoueurs[t].nomJoueur);

                        //Affichage de l'argent du joueur
                        gotoligcol(43, 73);
                        Color(15,0);
                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                        Color(12,0);

                        //On propose les différents choix
                        ordreDePassageDesJoueurs[t].doubleOuNon = 0;
                        do
                        {
                            do
                            {
                                gotoligcol(5,115);
                                printf("Selectionner choix :");
                                gotoligcol(6,115);
                                printf("L pour lancer les des");
                                gotoligcol(7,115);
                                printf("G pour acheter ou vendre des maisons");
                                gotoligcol(8,115);
                                printf("E pour proceder a des echanges ");
                                gotoligcol(9,115);
                                printf("H pour acceder au menu de l'hypotheque");
                                gotoligcol(10,115);
                                fflush(stdin);
                                scanf("%c",&choixT);
                            }
                            while(choixT!='L' && choixT!='G' && choixT!='H' && choixT!='E');

                            //boucle qui s'execute si l'utilisateur veut acheter ou vendre des maisons
                            if (choixT == 'G')
                            {
                                system("cls");
                                gestion_Prop(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t);
                                Sleep(1500);
                                system("cls");
                            }
                            //Boucle qui s'execute si l'utilisateur veut hypothequer une propriété
                            else if (choixT == 'H')
                            {
                                system("cls");
                                hypotheque(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t);
                                Sleep(1500);
                                system("cls");
                            }
                            //Boucle qui s'execute si l'utilisateur veut faire des échanges
                            else if (choixT == 'E')
                            {
                                system("cls");
                                echange(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t, nombreDeJoueur);
                                Sleep(1500);
                                system("cls");
                            }
                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);
                        }
                        while(choixT!='L');

                        if(ordreDePassageDesJoueurs[t].argent < 0)
                        {
                            joueurEnFaillite[t] = 1;
                            compteurFaillite ++ ;
                            system("cls");
                            printf("Vous avez perdu !");
                            Sleep(2000);

                        }

                        if(ordreDePassageDesJoueurs[t].argent > 0)
                        {
                            //On lance les dés une première fois
                            int deNumeroDeux = rand() % 6 + 1;
                            int deNumeroUn = rand() % 6 + 1;
                            afficherDe(deNumeroUn,deNumeroDeux);
                            sommeDesLance = deNumeroUn + deNumeroDeux;

                            //On actualise la position
                            ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                            Sleep(1500);

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
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);

                            //Action case
                            positionTemporaire = ordreDePassageDesJoueurs[t].position;
                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                            //On vérifie si le joueur était sur une case avec une carte
                            if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                            {
                                gotoligcol(3,115);
                                printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                                fflush(stdin);
                                getchar();

                                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                //Actualisation du plateau
                                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                //Affichage de l'argent du joueur
                                gotoligcol(43, 73);
                                Color(15,0);
                                printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                Color(12,0);

                            }
                            if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                            {
                                //On resauvegarde les bonnes positions
                                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                //Actualisation du plateau
                                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                //Affichage de l'argent du joueur
                                gotoligcol(43, 73);
                                Color(15,0);
                                printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                Color(12,0);
                                //On lance le sous programme action case
                                actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                            }
                            if(ordreDePassageDesJoueurs[t].argent < 0)
                            {
                                joueurEnFaillite[t] = 1;
                                compteurFaillite ++ ;
                                system("cls");
                                printf("Vous avez perdu !");
                                Sleep(2000);

                            }
                            if(ordreDePassageDesJoueurs[t].argent > 0)
                            {
                                //On resauvegarde les bonnes positions
                                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                //Actualisation du plateau
                                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                //Affichage de l'argent du joueur
                                gotoligcol(43, 73);
                                Color(15,0);
                                printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                Color(12,0);

                                //Cette boucle est utilisée ssi un double à été fait
                                while(deNumeroDeux == deNumeroUn)
                                {
                                    if(ordreDePassageDesJoueurs[t].doubleOuNon == 1)
                                    {
                                        //On lance les dés
                                        lancerDeDes(&deNumeroUn,&deNumeroDeux);
                                        afficherDe(deNumeroUn,deNumeroDeux);
                                        Sleep(1500);
                                        sommeDesLance = deNumeroUn + deNumeroDeux;
                                        ordreDePassageDesJoueurs[t].doubleOuNon = 2;
                                        ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                        if(deNumeroDeux != deNumeroUn)
                                        {
                                            gotoligcol(43,1);
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
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);

                                            //Action case
                                            positionTemporaire = ordreDePassageDesJoueurs[t].position;
                                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                                            //On vérifie si le joueur était sur une case avec une carte
                                            if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                                            {
                                                gotoligcol(3,115);
                                                printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                                                fflush(stdin);
                                                getchar();

                                                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                                //Actualisation du plateau
                                                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                                //Affichage de l'argent du joueur
                                                gotoligcol(43, 73);
                                                Color(15,0);
                                                printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                                Color(12,0);

                                            }
                                            if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                                            {
                                                //On resauvegarde les bonnes positions
                                                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                                //Actualisation du plateau
                                                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                                //Affichage de l'argent du joueur
                                                gotoligcol(43, 73);
                                                Color(15,0);
                                                printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                                Color(12,0);
                                                //On lance le sous programme action case
                                                actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                                            }
                                            if(ordreDePassageDesJoueurs[t].argent < 0)
                                            {
                                                joueurEnFaillite[t] = 1;
                                                compteurFaillite ++ ;
                                                system("cls");
                                                printf("Vous avez perdu !");
                                                Sleep(2000);
                                                break;

                                            }
                                            //On resauvegarde les bonnes positions
                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);
                                        }
                                        else if(deNumeroUn == deNumeroDeux)
                                        {
                                            gotoligcol(22,115);
                                            printf("Vous allez en prison ! \n");
                                            ordreDePassageDesJoueurs[t].doubleOuNon = 0;


                                            gotoligcol(43,1);
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
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);


                                            break;
                                        }



                                    }

                                    if(ordreDePassageDesJoueurs[t].doubleOuNon == 0)
                                    {
                                        lancerDeDes(&deNumeroUn,&deNumeroDeux);
                                        afficherDe(deNumeroUn,deNumeroDeux);
                                        Sleep(1500);
                                        sommeDesLance = deNumeroUn + deNumeroDeux;
                                        ordreDePassageDesJoueurs[t].doubleOuNon = 1;
                                        ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

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
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);

                                        //Action case
                                        positionTemporaire = ordreDePassageDesJoueurs[t].position;
                                        actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                                        //On vérifie si le joueur était sur une case avec une carte
                                        if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                                        {
                                            gotoligcol(3,115);
                                            printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                                            fflush(stdin);
                                            getchar();

                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);

                                        }
                                        if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                                        {
                                            //On resauvegarde les bonnes positions
                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);
                                            //On lance le sous programme action case
                                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                                        }
                                        if(ordreDePassageDesJoueurs[t].argent < 0)
                                        {
                                            joueurEnFaillite[t] = 1;
                                            compteurFaillite ++ ;
                                            system("cls");
                                            printf("Vous avez perdu !");
                                            Sleep(2000);
                                            break;

                                        }
                                        if(ordreDePassageDesJoueurs[t].argent > 0)
                                        {

                                            //On resauvegarde les bonnes positions
                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);
                                        }

                                    }
                                }


                            }

                        }

                    }

                    //Si on a fait un double
                    if(choixPrison == 3)
                    {
                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                        //Action case
                        positionTemporaire = ordreDePassageDesJoueurs[t].position;
                        actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                        //On vérifie si le joueur était sur une case avec une carte
                        if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                        {
                            gotoligcol(3,115);
                            printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                            fflush(stdin);
                            getchar();

                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);

                        }
                        if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                        {
                            //On resauvegarde les bonnes positions
                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);
                            //On lance le sous programme action case
                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                        }
                        if(ordreDePassageDesJoueurs[t].argent < 0)
                        {
                            joueurEnFaillite[t] = 1;
                            compteurFaillite ++ ;
                            system("cls");
                            printf("Vous avez perdu !");
                            Sleep(2000);
                            break;

                        }
                        if(ordreDePassageDesJoueurs[t].argent > 0)
                        {
                            //On resauvegarde les bonnes positions
                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);
                        }


                    }

                    //Si on choisit d'attendre
                    if(choixPrison == 5 || choixPrison == 1 || choixPrison == 2 || choixPrison == 4)
                    {
                        system("cls");
                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                    }
                    //Cette boucle permet de demander à l'utilisateur s'il veut revenir au programme principal à la fin du tour
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
                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

            }
        }

        /// //////////////////////////////////////////////////////////////
        ///Si l'utilisateur veut reprendre une partie qui est en cours////
        /// //////////////////////////////////////////////////////////////

        while(choixDuMenuPrincipal == 7 && quitterLaBoucle == 0)
        {
            //On actualise le plateau
            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

            //Lancement des tours
            for(int t=0 ; t<=nombreDeJoueur ; t++)
            {
                //Si on a atteint le nombre de joueur, on remet t à zéro pour continuer la partie
                if(t==(nombreDeJoueur))
                {
                    t=0;
                }
                if(joueurEnFaillite[t] != 0)
                {
                    t++;
                }
                while(compteurFaillite == (nombreDeJoueur-1))
                {
                    system("cls");
                    printf("La Partie est terminee !\n");
                    printf("%s, vous avez gagne",ordreDePassageDesJoueurs[t].nomJoueur);
                    Sleep(5000);
                    system("cls");
                    menu(&choixDuMenuPrincipal); //Affichage du menu
                    choixmenu(&choixDuMenuPrincipal, tableauDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs,&nombreDeJoueur,&numeroCarteSith,&numeroCarteChance,joueurEnFaillite,compteurFaillite);
                }

                //Si le joueur qui doit joueur n'est pas en prison
                if(ordreDePassageDesJoueurs[t].tourPrison == 0)
                {
                    //Affichage du nom du joueur qui doit jouer
                    gotoligcol(3,115);
                    printf("C'est a %s de jouer !",ordreDePassageDesJoueurs[t].nomJoueur);

                    //Affichage de l'argent du joueur
                    gotoligcol(43, 73);
                    Color(15,0);
                    printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                    Color(12,0);

                    //On propose les différents choix
                    ordreDePassageDesJoueurs[t].doubleOuNon = 0;
                    do
                    {
                        do
                        {
                            gotoligcol(5,115);
                            printf("Selectionner choix :");
                            gotoligcol(6,115);
                            printf("L pour lancer les des");
                            gotoligcol(7,115);
                            printf("G pour acheter ou vendre des maisons");
                            gotoligcol(8,115);
                            printf("E pour proceder a des echanges ");
                            gotoligcol(9,115);
                            printf("H pour acceder au menu de l'hypotheque");
                            gotoligcol(10,115);
                            fflush(stdin);
                            scanf("%c",&choixT);
                        }
                        while(choixT!='L' && choixT!='G' && choixT!='H' && choixT!='E');

                        //boucle qui s'execute si l'utilisateur veut acheter ou vendre des maisons
                        if (choixT == 'G')
                        {
                            system("cls");
                            gestion_Prop(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t);
                            Sleep(1500);
                            system("cls");
                        }
                        //Boucle qui s'execute si l'utilisateur veut hypothequer une propriété
                        else if (choixT == 'H')
                        {
                            system("cls");
                            hypotheque(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t);
                            Sleep(1500);
                            system("cls");
                        }
                        //Boucle qui s'execute si l'utilisateur veut faire des échanges
                        else if (choixT == 'E')
                        {
                            system("cls");
                            echange(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t, nombreDeJoueur);
                            Sleep(1500);
                            system("cls");
                        }
                        //Actualisation du plateau
                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                        //Affichage de l'argent du joueur
                        gotoligcol(43, 73);
                        Color(15,0);
                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                        Color(12,0);
                    }
                    while(choixT!='L');

                    if(ordreDePassageDesJoueurs[t].argent < 0)
                    {
                        joueurEnFaillite[t] = 1;
                        compteurFaillite ++ ;
                        system("cls");
                        printf("Vous avez perdu !");
                        Sleep(2000);

                    }

                    if(ordreDePassageDesJoueurs[t].argent > 0)
                    {
                        //On lance les dés une première fois
                        int deNumeroDeux = rand() % 6 + 1;
                        int deNumeroUn = rand() % 6 + 1;
                        afficherDe(deNumeroUn,deNumeroDeux);
                        sommeDesLance = deNumeroUn + deNumeroDeux;

                        //On actualise la position
                        ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                        Sleep(1500);

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
                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                        //Affichage de l'argent du joueur
                        gotoligcol(43, 73);
                        Color(15,0);
                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                        Color(12,0);

                        //Action case
                        positionTemporaire = ordreDePassageDesJoueurs[t].position;
                        actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                        //On vérifie si le joueur était sur une case avec une carte
                        if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                        {
                            gotoligcol(3,115);
                            printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                            fflush(stdin);
                            getchar();

                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);

                        }
                        if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                        {
                            //On resauvegarde les bonnes positions
                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);
                            //On lance le sous programme action case
                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                        }
                        if(ordreDePassageDesJoueurs[t].argent < 0)
                        {
                            joueurEnFaillite[t] = 1;
                            compteurFaillite ++ ;
                            system("cls");
                            printf("Vous avez perdu !");
                            Sleep(2000);

                        }
                        if(ordreDePassageDesJoueurs[t].argent > 0)
                        {
                            //On resauvegarde les bonnes positions
                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);

                            //Cette boucle est utilisée ssi un double à été fait
                            while(deNumeroDeux == deNumeroUn)
                            {
                                if(ordreDePassageDesJoueurs[t].doubleOuNon == 1)
                                {
                                    //On lance les dés
                                    lancerDeDes(&deNumeroUn,&deNumeroDeux);
                                    afficherDe(deNumeroUn,deNumeroDeux);
                                    Sleep(1500);
                                    sommeDesLance = deNumeroUn + deNumeroDeux;
                                    ordreDePassageDesJoueurs[t].doubleOuNon = 2;
                                    ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                                    positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                    if(deNumeroDeux != deNumeroUn)
                                    {
                                        gotoligcol(43,1);
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
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);

                                        //Action case
                                        positionTemporaire = ordreDePassageDesJoueurs[t].position;
                                        actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                                        //On vérifie si le joueur était sur une case avec une carte
                                        if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                                        {
                                            gotoligcol(3,115);
                                            printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                                            fflush(stdin);
                                            getchar();

                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);

                                        }
                                        if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                                        {
                                            //On resauvegarde les bonnes positions
                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);
                                            //On lance le sous programme action case
                                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                                        }
                                        if(ordreDePassageDesJoueurs[t].argent < 0)
                                        {
                                            joueurEnFaillite[t] = 1;
                                            compteurFaillite ++ ;
                                            system("cls");
                                            printf("Vous avez perdu !");
                                            Sleep(2000);
                                            break;

                                        }
                                        //On resauvegarde les bonnes positions
                                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                        //Actualisation du plateau
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);
                                    }
                                    else if(deNumeroUn == deNumeroDeux)
                                    {
                                        gotoligcol(22,115);
                                        printf("Vous allez en prison ! \n");
                                        ordreDePassageDesJoueurs[t].doubleOuNon = 0;


                                        gotoligcol(43,1);
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
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);


                                        break;
                                    }



                                }

                                if(ordreDePassageDesJoueurs[t].doubleOuNon == 0)
                                {
                                    lancerDeDes(&deNumeroUn,&deNumeroDeux);
                                    afficherDe(deNumeroUn,deNumeroDeux);
                                    Sleep(1500);
                                    sommeDesLance = deNumeroUn + deNumeroDeux;
                                    ordreDePassageDesJoueurs[t].doubleOuNon = 1;
                                    ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                                    positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

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
                                    plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                    //Affichage de l'argent du joueur
                                    gotoligcol(43, 73);
                                    Color(15,0);
                                    printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                    Color(12,0);

                                    //Action case
                                    positionTemporaire = ordreDePassageDesJoueurs[t].position;
                                    actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                                    //On vérifie si le joueur était sur une case avec une carte
                                    if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                                    {
                                        gotoligcol(3,115);
                                        printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                                        fflush(stdin);
                                        getchar();

                                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                        //Actualisation du plateau
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);

                                    }
                                    if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                                    {
                                        //On resauvegarde les bonnes positions
                                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                        //Actualisation du plateau
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);
                                        //On lance le sous programme action case
                                        actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                                    }
                                    if(ordreDePassageDesJoueurs[t].argent < 0)
                                    {
                                        joueurEnFaillite[t] = 1;
                                        compteurFaillite ++ ;
                                        system("cls");
                                        printf("Vous avez perdu !");
                                        Sleep(2000);
                                        break;

                                    }
                                    //On resauvegarde les bonnes positions
                                    positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                    //Actualisation du plateau
                                    plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                    //Affichage de l'argent du joueur
                                    gotoligcol(43, 73);
                                    Color(15,0);
                                    printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                    Color(12,0);

                                }
                            }

                            //Cette boucle permet de demander à l'utilisateur s'il veut revenir au programme principal à la fin du tour
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

                }
                //Si le joueur est en prison
                else if(ordreDePassageDesJoueurs[t].tourPrison != 0 )
                {
                    //On lance le programme des tours prison
                    prisonChoix(&choixPrison);
                    prison(choixPrison,ordreDePassageDesJoueurs,t,nombreDeJoueur);

                    //Si jamais on a fait 3 tours
                    if(ordreDePassageDesJoueurs[t].tourPrison == 4 && choixPrison != 3)
                    {
                        printf("\nVous sortez de prison en payant 50 credits !");
                        ordreDePassageDesJoueurs[t].argent -= 50;
                        ordreDePassageDesJoueurs[t].tourPrison = 0;
                        system("cls");
                        //Affichage du nom du joueur qui doit jouer
                        gotoligcol(3,115);
                        printf("C'est a %s de jouer !",ordreDePassageDesJoueurs[t].nomJoueur);

                        //Affichage de l'argent du joueur
                        gotoligcol(43, 73);
                        Color(15,0);
                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                        Color(12,0);

                        //On propose les différents choix
                        ordreDePassageDesJoueurs[t].doubleOuNon = 0;
                        do
                        {
                            do
                            {
                                gotoligcol(5,115);
                                printf("Selectionner choix :");
                                gotoligcol(6,115);
                                printf("L pour lancer les des");
                                gotoligcol(7,115);
                                printf("G pour acheter ou vendre des maisons");
                                gotoligcol(8,115);
                                printf("E pour proceder a des echanges ");
                                gotoligcol(9,115);
                                printf("H pour acceder au menu de l'hypotheque");
                                gotoligcol(10,115);
                                fflush(stdin);
                                scanf("%c",&choixT);
                            }
                            while(choixT!='L' && choixT!='G' && choixT!='H' && choixT!='E');

                            //boucle qui s'execute si l'utilisateur veut acheter ou vendre des maisons
                            if (choixT == 'G')
                            {
                                system("cls");
                                gestion_Prop(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t);
                                Sleep(1500);
                                system("cls");
                            }
                            //Boucle qui s'execute si l'utilisateur veut hypothequer une propriété
                            else if (choixT == 'H')
                            {
                                system("cls");
                                hypotheque(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t);
                                Sleep(1500);
                                system("cls");
                            }
                            //Boucle qui s'execute si l'utilisateur veut faire des échanges
                            else if (choixT == 'E')
                            {
                                system("cls");
                                echange(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,&compteurMaisons, &compteurHotels, t, nombreDeJoueur);
                                Sleep(1500);
                                system("cls");
                            }
                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);
                        }
                        while(choixT!='L');

                        if(ordreDePassageDesJoueurs[t].argent < 0)
                        {
                            joueurEnFaillite[t] = 1;
                            compteurFaillite ++ ;
                            system("cls");
                            printf("Vous avez perdu !");
                            Sleep(2000);

                        }

                        if(ordreDePassageDesJoueurs[t].argent > 0)
                        {
                            //On lance les dés une première fois
                            int deNumeroDeux = rand() % 6 + 1;
                            int deNumeroUn = rand() % 6 + 1;
                            afficherDe(deNumeroUn,deNumeroDeux);
                            sommeDesLance = deNumeroUn + deNumeroDeux;

                            //On actualise la position
                            ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                            Sleep(1500);

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
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);

                            //Action case
                            positionTemporaire = ordreDePassageDesJoueurs[t].position;
                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                            //On vérifie si le joueur était sur une case avec une carte
                            if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                            {
                                gotoligcol(3,115);
                                printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                                fflush(stdin);
                                getchar();

                                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                //Actualisation du plateau
                                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                //Affichage de l'argent du joueur
                                gotoligcol(43, 73);
                                Color(15,0);
                                printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                Color(12,0);

                            }
                            if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                            {
                                //On resauvegarde les bonnes positions
                                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                //Actualisation du plateau
                                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                //Affichage de l'argent du joueur
                                gotoligcol(43, 73);
                                Color(15,0);
                                printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                Color(12,0);
                                //On lance le sous programme action case
                                actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                            }
                            if(ordreDePassageDesJoueurs[t].argent < 0)
                            {
                                joueurEnFaillite[t] = 1;
                                compteurFaillite ++ ;
                                system("cls");
                                printf("Vous avez perdu !");
                                Sleep(2000);

                            }
                            if(ordreDePassageDesJoueurs[t].argent > 0)
                            {
                                //On resauvegarde les bonnes positions
                                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                //Actualisation du plateau
                                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                //Affichage de l'argent du joueur
                                gotoligcol(43, 73);
                                Color(15,0);
                                printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                Color(12,0);

                                //Cette boucle est utilisée ssi un double à été fait
                                while(deNumeroDeux == deNumeroUn)
                                {
                                    if(ordreDePassageDesJoueurs[t].doubleOuNon == 1)
                                    {
                                        //On lance les dés
                                        lancerDeDes(&deNumeroUn,&deNumeroDeux);
                                        afficherDe(deNumeroUn,deNumeroDeux);
                                        Sleep(1500);
                                        sommeDesLance = deNumeroUn + deNumeroDeux;
                                        ordreDePassageDesJoueurs[t].doubleOuNon = 2;
                                        ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                        if(deNumeroDeux != deNumeroUn)
                                        {
                                            gotoligcol(43,1);
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
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);

                                            //Action case
                                            positionTemporaire = ordreDePassageDesJoueurs[t].position;
                                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                                            //On vérifie si le joueur était sur une case avec une carte
                                            if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                                            {
                                                gotoligcol(3,115);
                                                printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                                                fflush(stdin);
                                                getchar();

                                                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                                //Actualisation du plateau
                                                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                                //Affichage de l'argent du joueur
                                                gotoligcol(43, 73);
                                                Color(15,0);
                                                printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                                Color(12,0);

                                            }
                                            if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                                            {
                                                //On resauvegarde les bonnes positions
                                                positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                                //Actualisation du plateau
                                                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                                //Affichage de l'argent du joueur
                                                gotoligcol(43, 73);
                                                Color(15,0);
                                                printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                                Color(12,0);
                                                //On lance le sous programme action case
                                                actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                                            }
                                            if(ordreDePassageDesJoueurs[t].argent < 0)
                                            {
                                                joueurEnFaillite[t] = 1;
                                                compteurFaillite ++ ;
                                                system("cls");
                                                printf("Vous avez perdu !");
                                                Sleep(2000);
                                                break;

                                            }
                                            //On resauvegarde les bonnes positions
                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);
                                        }
                                        else if(deNumeroUn == deNumeroDeux)
                                        {
                                            gotoligcol(22,115);
                                            printf("Vous allez en prison ! \n");
                                            ordreDePassageDesJoueurs[t].doubleOuNon = 0;


                                            gotoligcol(43,1);
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
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);


                                            break;
                                        }



                                    }

                                    if(ordreDePassageDesJoueurs[t].doubleOuNon == 0)
                                    {
                                        lancerDeDes(&deNumeroUn,&deNumeroDeux);
                                        afficherDe(deNumeroUn,deNumeroDeux);
                                        Sleep(1500);
                                        sommeDesLance = deNumeroUn + deNumeroDeux;
                                        ordreDePassageDesJoueurs[t].doubleOuNon = 1;
                                        ordreDePassageDesJoueurs[t].position = deplanbrjr(sommeDesLance,&ordreDePassageDesJoueurs[t]);
                                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

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
                                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                        //Affichage de l'argent du joueur
                                        gotoligcol(43, 73);
                                        Color(15,0);
                                        printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                        Color(12,0);

                                        //Action case
                                        positionTemporaire = ordreDePassageDesJoueurs[t].position;
                                        actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                                        //On vérifie si le joueur était sur une case avec une carte
                                        if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                                        {
                                            gotoligcol(3,115);
                                            printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                                            fflush(stdin);
                                            getchar();

                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);

                                        }
                                        if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                                        {
                                            //On resauvegarde les bonnes positions
                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);
                                            //On lance le sous programme action case
                                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                                        }
                                        if(ordreDePassageDesJoueurs[t].argent < 0)
                                        {
                                            joueurEnFaillite[t] = 1;
                                            compteurFaillite ++ ;
                                            system("cls");
                                            printf("Vous avez perdu !");
                                            Sleep(2000);
                                            break;

                                        }
                                        if(ordreDePassageDesJoueurs[t].argent > 0)
                                        {

                                            //On resauvegarde les bonnes positions
                                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                                            //Actualisation du plateau
                                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                                            //Affichage de l'argent du joueur
                                            gotoligcol(43, 73);
                                            Color(15,0);
                                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                                            Color(12,0);
                                        }

                                    }
                                }


                            }

                        }

                    }

                    //Si on a fait un double
                    if(choixPrison == 3)
                    {
                        positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                        //Action case
                        positionTemporaire = ordreDePassageDesJoueurs[t].position;
                        actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);

                        //On vérifie si le joueur était sur une case avec une carte
                        if(positionTemporaire == 2 || positionTemporaire == 12 || positionTemporaire == 23 || positionTemporaire == 16)
                        {
                            gotoligcol(3,115);
                            printf("Appuyer sur Entrer pour actualiser le plateau de jeu ");
                            fflush(stdin);
                            getchar();

                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;

                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);

                        }
                        if(positionTemporaire != ordreDePassageDesJoueurs[t].position)
                        {
                            //On resauvegarde les bonnes positions
                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);
                            //On lance le sous programme action case
                            actioncase(ordreDePassageDesJoueurs,TableauDesCasesDuMonopoly,t,&numeroCarteSith,&numeroCarteChance,positionDesJoueurs, &compteurMaisons, &compteurHotels);
                        }
                        if(ordreDePassageDesJoueurs[t].argent < 0)
                        {
                            joueurEnFaillite[t] = 1;
                            compteurFaillite ++ ;
                            system("cls");
                            printf("Vous avez perdu !");
                            Sleep(2000);
                            break;

                        }
                        if(ordreDePassageDesJoueurs[t].argent > 0)
                        {
                            //On resauvegarde les bonnes positions
                            positionDesJoueurs[t] = ordreDePassageDesJoueurs[t].position;
                            //Actualisation du plateau
                            plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                            //Affichage de l'argent du joueur
                            gotoligcol(43, 73);
                            Color(15,0);
                            printf("ARGENT DU JOUEUR : %d",ordreDePassageDesJoueurs[t].argent);
                            Color(12,0);
                        }


                    }

                    //Si on choisit d'attendre
                    if(choixPrison == 5 || choixPrison == 1 || choixPrison == 2 || choixPrison == 4)
                    {
                        system("cls");
                        plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);
                    }
                    //Cette boucle permet de demander à l'utilisateur s'il veut revenir au programme principal à la fin du tour
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
                plateau(positionDesJoueurs,nombreDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs);

            }
        }

        //Si l'utilisateur sort de la boucle, on affiche le menu principal
        system("cls");
        menu(&choixDuMenuPrincipal);
        choixmenu(&choixDuMenuPrincipal,tableauDeJoueur,TableauDesCasesDuMonopoly,ordreDePassageDesJoueurs,&nombreDeJoueur,&numeroCarteSith,&numeroCarteChance,joueurEnFaillite,compteurFaillite);
        quitterLaBoucle = 0;
    }
    return 0;
}
