#include "header.h"

///Sous programme pour afficher le menu et les différents choix possibles

int menu()//menu
{
  int choix;//creation d'une variable choix
  Color(14,0);
  for (int i=0;i<=0;i++)//pour le nombre de lignes
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
  printf("********************************************************************\n\n");
  for (int i=0;i<=0;i++)
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
  printf("|     |  ___ | .           .             .       .            .    .           .         .\n");
  Sleep(30);
  printf("|   =[________]========-------[]<--.          .           .   .               .         .         .\n");
  Sleep(30);
  printf("|     |==|  ||.      .           .                     .          . .          .        .    .          .           .      . .              .         .\n|     |==| _| |.          .         ..           .          .              .            .              .                .     .\n");
  Sleep(30);
  printf("|     |  ||   |    .            .          .         .                      .             .\n");
  Sleep(30);
  printf("|     |==||   |.      .              .          .               .          .       .        .\n");
  Sleep(30);
  printf("|     |  ||    |.           .             .                   .                .             .\n|     |  ~~    |");
  Color(3,0);
  printf("     .                           .                               .                         .          TAPEZ:       .         .            .     .\n");
  Color(3,0);
  Sleep(30);
  printf("|   __L________\_    .                        .                 .              .     ");
  Color(3,0);
  printf("                               1: Reprendre la partie en cours .             .       .\n");
  Sleep(30);
  Color(3,0);
  printf("|  <_|_L___/   | |,                                                                 ");
  Sleep(30);
  Color(3,0);
  printf("                               2: Commencer une nouvelle partie        .        .  \n");
  Color(3,0);
  printf("|    |__\_____|_|___                                                                 ");
  Sleep(30);
  Color(3,0);
  printf("                               3: Sauvegarder la partie en cours\n");
  Color(3,0);
  printf("|   /L___________   `---._________                                         ");
  Sleep(30);
  Color(3,0);
  printf("                                        4: Credits\n");
  Sleep(30);
  Color(3,0);
  Sleep(30);
  printf("|   | | .----. _  |---v--.______ _ `-------------.--.__ ");
  Color(3,0);
  printf("                                                           5: Quitter");
  Sleep(30);
  printf("\n|  [| | |    |(_) |]__[_____]____________________]__ __]");
  printf("                                                           6: Afficher les regles du jeu\n");
  Sleep(30);
  printf("|   | |___________|---^--'_________.-------------`--'\n");
  Sleep(30);
  printf("|   __|__/_    | |\n");
  Sleep(30);
  printf("|    \L______________.---'\n");
  Sleep(30);
  printf("|  <_|_L___\___|_|'\n");
  Sleep(30);
  printf("|     L________/\n|     |        |\n");
  Sleep(30);
  printf("|     |   _    |\n");
  Sleep(30);
  printf("|     |  ||    |\n");
  Sleep(30);
  printf("|     |  ||   |\n");
  Sleep(30);
  printf("|     |==||_  |\n");
  Sleep(30);
  printf("|     |==|  | |\n");
  Sleep(30);
  printf("|     |==|__||\n");
  Sleep(30);
  printf("|         |______|\n");
  Sleep(30);
  printf("|    =[________]========-------[]<--\n");
  Color(14,0);
  printf("\n**************************************************************************************************************************************************************************\n");
  printf("Donnez votre choix jeune padawan\n");
  fflush(stdin);
  Color(3,0);
  scanf("%d",&choix);
  if(choix<1||choix>6)//blindage
  {
        do//on demande
            {
                Color(14,0);
                printf("Non acceptee, cette valeur est. Retaper, tu dois.\n");
                fflush(stdin);
                Color(3,0);
                scanf("%d",&choix);
            }while(choix<1||choix>6);//tant que l'on a pas de resultat entre 1 et 5
  }
  return(choix);//on retourne le choix
}

///Sous programme pour les choix du menu
int choixmenu(int choixDumenu,joueur_t tab_joueur[])//va traiter les choix du menu de la valeur deja blindée
{
    int a;
    int nombreDeJoueurAJouer;
    switch(choixDumenu)
    {
    case 1:
        {
            //prog reprendre partie
            break;
        }
    case 2:
        {
            //lancement partie choix du nombre de joueurs
            int pos[4];

            creer_nouveau_joueur(tab_joueur, &nombreDeJoueurAJouer);

           /* for (int i=0;i<nombre_joueur;i++)
                {
                    pos[i]=0;
                }
            plateau(pos,nombre_joueur);*/
            break;
        }
    case 3:
        {
            sauvegardeGlobale(nombreDeJoueurAJouer,tab_joueur[0],tab_joueur[1],tab_joueur[2],tab_joueur[3]);
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
            break;
        }
    case 4:
        {
            credits(tab_joueur, &nombreDeJoueurAJouer);

            break;
        }
    case 5:
        {
            printf("Vous avez bien appuye sur quitter.\n");
            printf("Sauvegarde en cours");
            sauvegardeGlobale(nombreDeJoueurAJouer,tab_joueur[0],tab_joueur[1],tab_joueur[2],tab_joueur[3]);
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".\n");
            Sleep(1000);
            printf("Partie sauvegardee, au revoir Padawan.\n");
            Sleep(2000);
            return(0);
        }
    case 6:
        {
            regle_Du_jeu(tab_joueur,&nombreDeJoueurAJouer);
            break;
        }

    }
    return nombreDeJoueurAJouer;

}
