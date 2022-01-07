#include "header.h"

///Sous programme pour afficher le menu et les différents choix possibles

void menu(int* choix)//menu
{
    Color(14,0);
    for (int i=0; i<=0; i++) //pour le nombre de lignes
    {
        Sleep(50);
        printf("**************************************************************************************************************************************************************************\n");
    }
    Sleep(30);
    printf("\n***********************************************************************");
    Sleep(30);
    Color(3,0);
    printf("   MONOPOLY STAR WARS EDITION   ");
    Sleep(30);
    Color(14,0);
    printf("*******************************************************************\n\n");
    for (int i=0; i<=0; i++)
    {
        Sleep(30);
        printf("**************************************************************************************************************************************************************************\n");
    }
    Color(3,0);
    Sleep(30);
    printf("|      ________   .       .           .                 .        .            .    .                          .    .     .            .                  .          .   \n");
    Sleep(30);
    printf("|     |________|       .                    .              .                      .        ..           .                .               .                .            .\n");
    Sleep(30);
    printf("|     |  ___ | .           .             .       .            .    .           .         .  .           .           .               .           .   .   .\n");
    Sleep(30);
    printf("|   =[________]========-------[]<--.          .           .   .               .         .         .     .        .          .               .       .\n");
    Sleep(30);
    printf("|     |==|  ||.      .           .                     .          . .          .        .    .          .           .      . .              .         .\n|     |==| _| |.          .         ..           .          .              .            .              .                .     .\n");
    Sleep(30);
    printf("|     |  ||   |    .            .          .         .                      .             .     .       .               .       .               .       .\n");
    Sleep(30);
    printf("|     |==||   |.      .              .          .               .          .       .        .                   .           .        .      .   .       .\n");
    Sleep(30);
    printf("|     |  ||    |.           .             .                   .                .             .              .               .           .\n|     |  ~~    |");
    Color(3,0);
    printf("     .            .              .             .                 .             .           .          TAPEZ:.      .         .            .     .\n");
    Color(3,0);
    Sleep(30);
    printf("|   __L________\_    .                        .                 .              .     ");
    Color(3,0);
    printf("        .      .            .  1: Charger une partie sauvegardee .          .       .\n");
    Sleep(30);
    Color(3,0);
    printf("|  <_|_L___/   | |,       .         .   .     .            .          .             ");
    Sleep(30);
    Color(3,0);
    printf("  .             .         .    2: Commencer une nouvelle partie        .        .  \n");
    Color(3,0);
    printf("|    |__\_____|_|___   .      .      .        .   .               .          .       ");
    Sleep(30);
    Color(3,0);
    printf("  .         .       .        . 3: Sauvegarder la partie en cours.   .           .   \n");
    Color(3,0);
    printf("|   /L___________   `---._________  .          .           .             . ");
    Sleep(30);
    Color(3,0);
    printf(" .     .    .          .               .4: Credits    .       .       .   .   .   .\n");
    Sleep(30);
    Color(3,0);
    Sleep(30);
    printf("|   | | .----. _  |---v--.______ _ `-------------.--.__ ");
    Color(3,0);
    printf("        .       .       .    .            .     .    .     5: Quitter .   .               .       .");
    Sleep(30);
    printf("\n|  [| | |    |(_) |]__[_____]____________________]__ __]");
    Color(3,0);
    printf("   .           .        .             .        .       .   6: Lire les regles .   .   ..          .");
    Sleep(30);
    printf("\n|   | |___________|---^--'_________.-------------`--'   ..      .   .           .       .   .   .");
    printf("                  7: Reprendre la partie en cours   .           .        .\n");
    Sleep(30);
    printf("|   __|__/_    | |    .           .               .             .           .           .       .     .       .       .  .          .               .   .               .\n");
    Sleep(30);
    printf("|    \L______________.---'    .           .                 .           .           .     .                 .           .           .         .       .         .       .\n");
    Sleep(30);
    printf("|  <_|_L___\___|_|'       .           .           .       .               .       .                 .               .           .       .               .   .         .\n");
    Sleep(30);
    printf("|     L________/\n|     |        |        .           .           .               ..          .             .           .           .       .   .           .        .\n");
    Sleep(30);
    printf("|     |   _    |      .               .               .           .           .               .         .           .           .                       .           .   .\n");
    Sleep(30);
    printf("|     |  ||    |      .               .           .           .           .           .       . .               .             .         .               .       .     .\n");
    Sleep(30);
    printf("|     |  ||   |       .           .           .       .               .                   .             .               .                       .                     .\n");
    Sleep(30);
    printf("|     |==||_  |.  .       .               .       .       .       .           .           .         .               .           .                       .          .\n");
    Sleep(30);
    printf("|     |==|  | |.              .           .                   .           .       .   .         .       .               .           .           .               .   \n");
    Sleep(30);
    printf("|     |==|__||            .                           .                  .          .           .           .           .   .       .                .           .\n");
    Sleep(30);
    printf("|         |______|                            .               .                 .           .           .           .                   .            .           .\n");
    Sleep(30);
    printf("|    =[________]========-------[]<--                                  .           ..              .             .           .                    .          .      \n");
    Color(14,0);
    printf("\n**************************************************************************************************************************************************************************\n");
    printf("Donnez votre choix jeune padawan\n");
    fflush(stdin);
    Color(3,0);
    scanf("%d",choix);
    if(*choix<1||*choix>7)//blindage
    {
        do//on demande
        {
            Color(14,0);
            printf("Non acceptee, cette valeur est. Retaper, tu dois.\n");
            fflush(stdin);
            Color(3,0);
            scanf("%d",&choix);
        }while(*choix<1 || *choix>7); //tant que l'on a pas de resultat entre 1 et
    }
}

///Sous programme pour les choix du menu
void choixmenu(int* choixDumenu,joueur_t tab_joueur[], caseMonop tableauDeCase[], joueur_t OrdreDesJoueursAcharger[],int* nombreDeJoueurAJouer,int* nombreCarteSith, int* nombreCarteChance)//va traiter les choix du menu de la valeur deja blindée
{
    int a,chargementPossibleOuNon,reprisePossibleOuNon,sauvegardePossibleOuNon;

    switch(*choixDumenu)
    {
    case 1:
    {
        //Verification si une partie a été chargée
        chargementPossibleOuNon = testPartieChargee();

        if(chargementPossibleOuNon != 1)
        {
            printf("Aucune partie n'a ete sauvegardee.\n");
            Sleep(2000);
            system("cls");
            menu(choixDumenu);
            choixmenu(choixDumenu,tab_joueur,tableauDeCase,OrdreDesJoueursAcharger, nombreDeJoueurAJouer,nombreCarteSith,nombreCarteChance);
        }
        else
        {

            chargerNombreJoueur(nombreDeJoueurAJouer);
            Sleep(1000);
            chargerOrdreJoueur(OrdreDesJoueursAcharger);
            SauvegardeVerifPartieCommencee();
            *nombreCarteChance = ChargerNombreCarteChance();
            *nombreCarteSith = ChargerNombreCarteSith();

            printf("Chargement en cours");
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".\n");
            Sleep(1000);
            printf("Partie chargee.\n");
            Sleep(2000);
        }
        break;
    }
    case 2:
    {
        creer_nouveau_joueur(tab_joueur, nombreDeJoueurAJouer);
        break;
    }
    case 3:
    {
        sauvegardePossibleOuNon = testPartieCommencee();
        if(sauvegardePossibleOuNon != 1)
        {
            printf("La sauvegarde est impossible car aucune partie n'a ete commencee");
            Sleep(2000);
            system("cls");
            menu(choixDumenu);
            choixmenu(choixDumenu,tab_joueur,tableauDeCase,OrdreDesJoueursAcharger,nombreDeJoueurAJouer,nombreCarteSith,nombreCarteChance);
        }
        else if (sauvegardePossibleOuNon == 1)
        {
            sauvegardeNombreJoueur(*nombreDeJoueurAJouer);
            sauvegarderOrdreJoueur(OrdreDesJoueursAcharger);
            SauvegardeVerifPartieSauv();
            SauvegardeNombreCarteChance(*nombreCarteChance);
            SauvegardeNombreCarteSith(*nombreCarteSith);

            printf("Sauvegarde en cours");
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".\n");
            Sleep(1000);
            printf("Partie sauvegardee.\n");
            Sleep(2000);
            system("cls");
            menu(choixDumenu);
            choixmenu(choixDumenu,tab_joueur,tableauDeCase,OrdreDesJoueursAcharger,nombreDeJoueurAJouer,nombreCarteSith,nombreCarteChance);
        }

        break;
    }
    case 4:
    {
        credits(tab_joueur, nombreDeJoueurAJouer,tableauDeCase,OrdreDesJoueursAcharger,nombreCarteSith, nombreCarteChance);

        break;
    }
    case 5:
    {
        printf("Vous avez bien appuye sur quitter.\n");
        printf("Au revoir Padawan.\n");
        SauvegardeVerifPartiePasCommencee();
        Sleep(2000);
        return(0);
    }
    case 6:
    {
        regle_Du_jeu(tab_joueur,nombreDeJoueurAJouer,tableauDeCase,OrdreDesJoueursAcharger,nombreCarteSith, nombreCarteChance);
        break;
    }
    case 7:
    {
        reprisePossibleOuNon = testPartieCommencee();
        if(reprisePossibleOuNon != 1)
        {
            printf("Aucune partie n'a ete commencee.\n");
            Sleep(2000);
            system("cls");
            menu(choixDumenu);
            choixmenu(choixDumenu,tab_joueur,tableauDeCase,OrdreDesJoueursAcharger,nombreDeJoueurAJouer,nombreCarteSith, nombreCarteChance);
        }
        break;
    }

    }

}
