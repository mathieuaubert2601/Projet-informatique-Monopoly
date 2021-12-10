#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "header.h"


int menu()//menu
{
  int choixmenu;//creation d'une variable choix
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
  printf("     .                           .                               .                         .          TAPEZ:.      .         .            .     .\n");
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
  printf("|   /L___________   `---._________                                                  ");
  Sleep(30);
  Color(3,0);
  printf("                               4: Credits\n");
  Sleep(30);
  Color(3,0);
  Sleep(30);
  printf("|   | | .----. _  |---v--.______ _ `-------------.--.__\n");
  Sleep(30);
  printf("|  [| | |    |(_) |]__[_____]____________________]__ __]\n");
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
  scanf("%d",&choixmenu);
  if(choixmenu<1||choixmenu>4)//blindage
  {
        do//on demande
            {
                Color(14,0);
                printf("Non acceptee, cette valeur est. Retaper, tu dois.\n");
                fflush(stdin);
                Color(3,0);
                scanf("%d",&choixmenu);
            }while(choixmenu<1||choixmenu>4);//tant que l'on a pas de resultat entre 1 et 2
  }

  return(choixmenu);//on retourne le choix
}
