#include "header.h"

///Carte chance 1
void f1(joueur_t Tabjoueur[],caseMonop tabc[],int* compteurMaisons,int* compteurHotels, int tour, int compteur)
{

    system("cls");

Color(15,0);
printf("\n");
printf("\n");
printf("                                OOOOOOOOOOOOOOOO \n");
printf("                         OOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
printf("                     OOOOOOOOOOO               OOOOOOOOOOO\n");
printf("                  OOOOOOOO                           OOOOOOOOO \n");
printf("               OOOOOOO                                    OOOOOO\n");
printf("             OOOOOO                    O                    OOOOOOO \n");
printf("           OOOOO      OO               O               OO      OOOOOO \n");
printf("         OOOOO      OOO                O                OOO      OOOOOO\n");
printf("        OOOO       OOO                 O                 OOO       OOOOO \n");
printf("      OOOOO      OOOOO                 O                 OOOOO       OOOO\n");
printf("     OOOO       OOOOO                  O                  OOOOO       OOOOO\n");
printf("    OOOO        OOOOOO                 O                 OOOOOO         OOOO\n");
printf("   OOOO        OOOOOOO                OO                 OOOOOOO  O      OOOO\n");
printf("   OOO     O   OOOOOOO                OO                OOOOOOOO   O     OOOO\n");
printf("  OOOO    OO  OOOOOOOOO               OO                OOOOOOOOO  OO     OOOO\n");
printf("  OOO     OO  OOOOOOOOOO              OO               OOOOOOOOOO  OO      OOOO\n");
printf(" OOOO    OOO  OOOOOOOOOOOO            OO             OOOOOOOOOOOO  OOO     OOOO\n");
printf(" OOO     OOO  OOOOOOOOOOOOO           OO            OOOOOOOOOOOOO  OOO      OOO\n");
printf("OOOO     OOOO  OOOOOOOOOOOO           OO            OOOOOOOOOOOO  OOOO      OOOO\n");
printf("OOOO     OOOOO OOOOOOOOOOO            OOO            OOOOOOOOOO  OOOOO      OOOO\n");
printf(" OOO     OOOOOO OOOOOOOOO             OOO             OOOOOOOOO OOOOOO      OOOO\n");
printf(" OOO      OOOOOO OOOOOOO              OOO             OOOOOOOO OOOOOO       OOO\n");
printf(" OOOO     OOOOOOOOOOOOOO          OO  OOO  OO          OOOOOOOOOOOOO       OOOO\n");
printf("  OOO    O OOOOOOOOOOOOO           OO OOO OO           OOOOOOOOOOOOO O     OOOO\n");
printf("  OOOO    O OOOOOOOOOOOO            OOOOOOO           OOOOOOOOOOOOO O     OOOO\n");
printf("   OOOO    OOOOOOOOOOOOOO      OOOOOOOOOOOOOOOOO      OOOOOOOOOOOOOO      OOOO\n");
printf("   OOOO     OOOOOOOOOOOOOO          OOOOOOO          OOOOOOOOOOOOOO      OOOO\n");
printf("    OOOO     OOOOOOOOOOOOO         OO OOOOO         OOOOOOOOOOOOOO      OOOO\n");
printf("      OOOOO     OOOOOOOOOOOOO         OOO         OOOOOOOOOOOOO      OOOOO\n");
printf("        OOOO      OOOOOOOOOOOOO       OOO       OOOOOOOOOOOO        OOOO\n");
printf("         OOOOO       OOOOOOOOOOOO     OOO     OOOOOOOOOOOO        OOOOO\n");
printf("           OOOOO         OOOOOOOOOOO  OOO  OOOOOOOOOOO          OOOOO\n");
printf("             OOOOOO          OOOOOOOOOOOOOOOOOOOOO           OOOOOO\n");
printf("               OOOOOOO                 OO                 OOOOOOO\n");
printf("                  OOOOOOOOO                           OOOOOOOO\n");
printf("                     OOOOOOOOOOO                OOOOOOOOOOO\n");
printf("                          OOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
printf("                                OOOOOOOOOOOOOOOO\n");

    gotoligcol(22,115);
    printf(" C A R T E  J E D I :");

    gotoligcol(24,95);
    printf(" V O U S  O F F R E Z  L E  C O I F F E U R  A  C H E W B A C A,");

    gotoligcol(26,105);
    printf(" P A Y E Z  1 0 0  A  L A  B A N Q U E");

    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }




    if(Tabjoueur[tour].argent - 100 < 0)
    {
        faillite_carte(Tabjoueur,tabc,compteurMaisons,compteurHotels,tour,100,compteur);
    }
    else
    {
        Tabjoueur[tour].argent -= 100;
    }

}

///Carte chance 2

void f2(joueur_t Tabjoueur[],caseMonop tabc[],int* compteurMaisons,int* compteurHotels, int tour, int compteur)
{

    system("cls");

Color(15,0);
printf("\n");
printf("\n");
printf("                                OOOOOOOOOOOOOOOO \n");
printf("                         OOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
printf("                     OOOOOOOOOOO               OOOOOOOOOOO\n");
printf("                  OOOOOOOO                           OOOOOOOOO \n");
printf("               OOOOOOO                                    OOOOOO\n");
printf("             OOOOOO                    O                    OOOOOOO \n");
printf("           OOOOO      OO               O               OO      OOOOOO \n");
printf("         OOOOO      OOO                O                OOO      OOOOOO\n");
printf("        OOOO       OOO                 O                 OOO       OOOOO \n");
printf("      OOOOO      OOOOO                 O                 OOOOO       OOOO\n");
printf("     OOOO       OOOOO                  O                  OOOOO       OOOOO\n");
printf("    OOOO        OOOOOO                 O                 OOOOOO         OOOO\n");
printf("   OOOO        OOOOOOO                OO                 OOOOOOO  O      OOOO\n");
printf("   OOO     O   OOOOOOO                OO                OOOOOOOO   O     OOOO\n");
printf("  OOOO    OO  OOOOOOOOO               OO                OOOOOOOOO  OO     OOOO\n");
printf("  OOO     OO  OOOOOOOOOO              OO               OOOOOOOOOO  OO      OOOO\n");
printf(" OOOO    OOO  OOOOOOOOOOOO            OO             OOOOOOOOOOOO  OOO     OOOO\n");
printf(" OOO     OOO  OOOOOOOOOOOOO           OO            OOOOOOOOOOOOO  OOO      OOO\n");
printf("OOOO     OOOO  OOOOOOOOOOOO           OO            OOOOOOOOOOOO  OOOO      OOOO\n");
printf("OOOO     OOOOO OOOOOOOOOOO            OOO            OOOOOOOOOO  OOOOO      OOOO\n");
printf(" OOO     OOOOOO OOOOOOOOO             OOO             OOOOOOOOO OOOOOO      OOOO\n");
printf(" OOO      OOOOOO OOOOOOO              OOO             OOOOOOOO OOOOOO       OOO\n");
printf(" OOOO     OOOOOOOOOOOOOO          OO  OOO  OO          OOOOOOOOOOOOO       OOOO\n");
printf("  OOO    O OOOOOOOOOOOOO           OO OOO OO           OOOOOOOOOOOOO O     OOOO\n");
printf("  OOOO    O OOOOOOOOOOOO            OOOOOOO           OOOOOOOOOOOOO O     OOOO\n");
printf("   OOOO    OOOOOOOOOOOOOO      OOOOOOOOOOOOOOOOO      OOOOOOOOOOOOOO      OOOO\n");
printf("   OOOO     OOOOOOOOOOOOOO          OOOOOOO          OOOOOOOOOOOOOO      OOOO\n");
printf("    OOOO     OOOOOOOOOOOOO         OO OOOOO         OOOOOOOOOOOOOO      OOOO\n");
printf("      OOOOO     OOOOOOOOOOOOO         OOO         OOOOOOOOOOOOO      OOOOO\n");
printf("        OOOO      OOOOOOOOOOOOO       OOO       OOOOOOOOOOOO        OOOO\n");
printf("         OOOOO       OOOOOOOOOOOO     OOO     OOOOOOOOOOOO        OOOOO\n");
printf("           OOOOO         OOOOOOOOOOO  OOO  OOOOOOOOOOO          OOOOO\n");
printf("             OOOOOO          OOOOOOOOOOOOOOOOOOOOO           OOOOOO\n");
printf("               OOOOOOO                 OO                 OOOOOOO\n");
printf("                  OOOOOOOOO                           OOOOOOOO\n");
printf("                     OOOOOOOOOOO                OOOOOOOOOOO\n");
printf("                          OOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
printf("                                OOOOOOOOOOOOOOOO\n");

    gotoligcol(22,115);
    printf(" C A R T E  J E D I :");

    gotoligcol(24,95);
    printf(" U N  C H A S S E U R  D E  P R I M E  V O U S  C H E R C H E");

    gotoligcol(26,99);
    printf(" P A Y E R  2 0 0   C R E D I T  P O U R  V I V R E ");


    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }
    if(Tabjoueur[tour].argent - 200 < 0)
    {
        faillite_carte(Tabjoueur,tabc,compteurMaisons,compteurHotels,tour,200,compteur);
    }
    else
    {
        Tabjoueur[tour].argent -= 200;
    }
}

///Carte chance 3
void f3(joueur_t Tabjoueur[],caseMonop tabc[],int* compteurMaisons,int* compteurHotels, int tour, int compteur)
{

    system("cls");
Color(15,0);
printf("\n");
printf("\n");
printf("                                OOOOOOOOOOOOOOOO \n");
printf("                         OOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
printf("                     OOOOOOOOOOO               OOOOOOOOOOO\n");
printf("                  OOOOOOOO                           OOOOOOOOO \n");
printf("               OOOOOOO                                    OOOOOO\n");
printf("             OOOOOO                    O                    OOOOOOO \n");
printf("           OOOOO      OO               O               OO      OOOOOO \n");
printf("         OOOOO      OOO                O                OOO      OOOOOO\n");
printf("        OOOO       OOO                 O                 OOO       OOOOO \n");
printf("      OOOOO      OOOOO                 O                 OOOOO       OOOO\n");
printf("     OOOO       OOOOO                  O                  OOOOO       OOOOO\n");
printf("    OOOO        OOOOOO                 O                 OOOOOO         OOOO\n");
printf("   OOOO        OOOOOOO                OO                 OOOOOOO  O      OOOO\n");
printf("   OOO     O   OOOOOOO                OO                OOOOOOOO   O     OOOO\n");
printf("  OOOO    OO  OOOOOOOOO               OO                OOOOOOOOO  OO     OOOO\n");
printf("  OOO     OO  OOOOOOOOOO              OO               OOOOOOOOOO  OO      OOOO\n");
printf(" OOOO    OOO  OOOOOOOOOOOO            OO             OOOOOOOOOOOO  OOO     OOOO\n");
printf(" OOO     OOO  OOOOOOOOOOOOO           OO            OOOOOOOOOOOOO  OOO      OOO\n");
printf("OOOO     OOOO  OOOOOOOOOOOO           OO            OOOOOOOOOOOO  OOOO      OOOO\n");
printf("OOOO     OOOOO OOOOOOOOOOO            OOO            OOOOOOOOOO  OOOOO      OOOO\n");
printf(" OOO     OOOOOO OOOOOOOOO             OOO             OOOOOOOOO OOOOOO      OOOO\n");
printf(" OOO      OOOOOO OOOOOOO              OOO             OOOOOOOO OOOOOO       OOO\n");
printf(" OOOO     OOOOOOOOOOOOOO          OO  OOO  OO          OOOOOOOOOOOOO       OOOO\n");
printf("  OOO    O OOOOOOOOOOOOO           OO OOO OO           OOOOOOOOOOOOO O     OOOO\n");
printf("  OOOO    O OOOOOOOOOOOO            OOOOOOO           OOOOOOOOOOOOO O     OOOO\n");
printf("   OOOO    OOOOOOOOOOOOOO      OOOOOOOOOOOOOOOOO      OOOOOOOOOOOOOO      OOOO\n");
printf("   OOOO     OOOOOOOOOOOOOO          OOOOOOO          OOOOOOOOOOOOOO      OOOO\n");
printf("    OOOO     OOOOOOOOOOOOO         OO OOOOO         OOOOOOOOOOOOOO      OOOO\n");
printf("      OOOOO     OOOOOOOOOOOOO         OOO         OOOOOOOOOOOOO      OOOOO\n");
printf("        OOOO      OOOOOOOOOOOOO       OOO       OOOOOOOOOOOO        OOOO\n");
printf("         OOOOO       OOOOOOOOOOOO     OOO     OOOOOOOOOOOO        OOOOO\n");
printf("           OOOOO         OOOOOOOOOOO  OOO  OOOOOOOOOOO          OOOOO\n");
printf("             OOOOOO          OOOOOOOOOOOOOOOOOOOOO           OOOOOO\n");
printf("               OOOOOOO                 OO                 OOOOOOO\n");
printf("                  OOOOOOOOO                           OOOOOOOO\n");
printf("                     OOOOOOOOOOO                OOOOOOOOOOO\n");
printf("                          OOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
printf("                                OOOOOOOOOOOOOOOO\n");


    gotoligcol(22,115);
    printf(" C A R T E  J E D I :");

    gotoligcol(24,95);
    printf(" V O U S  O F F R E Z  L E  T R A N S P O R T  A  H A N  S O L O,");

    gotoligcol(26,105);
    printf(" P A Y E Z  1 0 0  A  L A  B A N Q U E");

    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }


    if(Tabjoueur[tour].argent - 100 < 0)
    {
        faillite_carte(Tabjoueur,tabc,compteurMaisons,compteurHotels,tour,100,compteur);
    }
    else
    {
        Tabjoueur[tour].argent -= 100;
    }

}

///Carte chance 4
void f4(joueur_t Tabjoueur[], int tour, int compteur)
{

    system("cls");


Color(15,0);
printf("\n");
printf("\n");
printf("                                OOOOOOOOOOOOOOOO \n");
printf("                         OOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
printf("                     OOOOOOOOOOO               OOOOOOOOOOO\n");
printf("                  OOOOOOOO                           OOOOOOOOO \n");
printf("               OOOOOOO                                    OOOOOO\n");
printf("             OOOOOO                    O                    OOOOOOO \n");
printf("           OOOOO      OO               O               OO      OOOOOO \n");
printf("         OOOOO      OOO                O                OOO      OOOOOO\n");
printf("        OOOO       OOO                 O                 OOO       OOOOO \n");
printf("      OOOOO      OOOOO                 O                 OOOOO       OOOO\n");
printf("     OOOO       OOOOO                  O                  OOOOO       OOOOO\n");
printf("    OOOO        OOOOOO                 O                 OOOOOO         OOOO\n");
printf("   OOOO        OOOOOOO                OO                 OOOOOOO  O      OOOO\n");
printf("   OOO     O   OOOOOOO                OO                OOOOOOOO   O     OOOO\n");
printf("  OOOO    OO  OOOOOOOOO               OO                OOOOOOOOO  OO     OOOO\n");
printf("  OOO     OO  OOOOOOOOOO              OO               OOOOOOOOOO  OO      OOOO\n");
printf(" OOOO    OOO  OOOOOOOOOOOO            OO             OOOOOOOOOOOO  OOO     OOOO\n");
printf(" OOO     OOO  OOOOOOOOOOOOO           OO            OOOOOOOOOOOOO  OOO      OOO\n");
printf("OOOO     OOOO  OOOOOOOOOOOO           OO            OOOOOOOOOOOO  OOOO      OOOO\n");
printf("OOOO     OOOOO OOOOOOOOOOO            OOO            OOOOOOOOOO  OOOOO      OOOO\n");
printf(" OOO     OOOOOO OOOOOOOOO             OOO             OOOOOOOOO OOOOOO      OOOO\n");
printf(" OOO      OOOOOO OOOOOOO              OOO             OOOOOOOO OOOOOO       OOO\n");
printf(" OOOO     OOOOOOOOOOOOOO          OO  OOO  OO          OOOOOOOOOOOOO       OOOO\n");
printf("  OOO    O OOOOOOOOOOOOO           OO OOO OO           OOOOOOOOOOOOO O     OOOO\n");
printf("  OOOO    O OOOOOOOOOOOO            OOOOOOO           OOOOOOOOOOOOO O     OOOO\n");
printf("   OOOO    OOOOOOOOOOOOOO      OOOOOOOOOOOOOOOOO      OOOOOOOOOOOOOO      OOOO\n");
printf("   OOOO     OOOOOOOOOOOOOO          OOOOOOO          OOOOOOOOOOOOOO      OOOO\n");
printf("    OOOO     OOOOOOOOOOOOO         OO OOOOO         OOOOOOOOOOOOOO      OOOO\n");
printf("      OOOOO     OOOOOOOOOOOOO         OOO         OOOOOOOOOOOOO      OOOOO\n");
printf("        OOOO      OOOOOOOOOOOOO       OOO       OOOOOOOOOOOO        OOOO\n");
printf("         OOOOO       OOOOOOOOOOOO     OOO     OOOOOOOOOOOO        OOOOO\n");
printf("           OOOOO         OOOOOOOOOOO  OOO  OOOOOOOOOOO          OOOOO\n");
printf("             OOOOOO          OOOOOOOOOOOOOOOOOOOOO           OOOOOO\n");
printf("               OOOOOOO                 OO                 OOOOOOO\n");
printf("                  OOOOOOOOO                           OOOOOOOO\n");
printf("                     OOOOOOOOOOO                OOOOOOOOOOO\n");
printf("                          OOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
printf("                                OOOOOOOOOOOOOOOO\n");

    gotoligcol(22,115);
    printf(" C A R T E  J E D I :");

    gotoligcol(24,105);
    printf(" P A D M E  V E U T  V O U S  V O I R E");

    gotoligcol(26,110);
    printf(" A L L E Z  S U R  N A B O O");

    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }

    if(Tabjoueur[tour].position > 24)
    {
        Tabjoueur[tour].argent = Tabjoueur[tour].argent + 200;
    }
    Tabjoueur[tour].position= 24;

}

///Carte Chance 5
void f5(joueur_t Tabjoueur[], int tour, int compteur)
{

    system("cls");


Color(15,0);
printf("\n");
printf("\n");
printf("                                OOOOOOOOOOOOOOOO \n");
printf("                         OOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
printf("                     OOOOOOOOOOO               OOOOOOOOOOO\n");
printf("                  OOOOOOOO                           OOOOOOOOO \n");
printf("               OOOOOOO                                    OOOOOO\n");
printf("             OOOOOO                    O                    OOOOOOO \n");
printf("           OOOOO      OO               O               OO      OOOOOO \n");
printf("         OOOOO      OOO                O                OOO      OOOOOO\n");
printf("        OOOO       OOO                 O                 OOO       OOOOO \n");
printf("      OOOOO      OOOOO                 O                 OOOOO       OOOO\n");
printf("     OOOO       OOOOO                  O                  OOOOO       OOOOO\n");
printf("    OOOO        OOOOOO                 O                 OOOOOO         OOOO\n");
printf("   OOOO        OOOOOOO                OO                 OOOOOOO  O      OOOO\n");
printf("   OOO     O   OOOOOOO                OO                OOOOOOOO   O     OOOO\n");
printf("  OOOO    OO  OOOOOOOOO               OO                OOOOOOOOO  OO     OOOO\n");
printf("  OOO     OO  OOOOOOOOOO              OO               OOOOOOOOOO  OO      OOOO\n");
printf(" OOOO    OOO  OOOOOOOOOOOO            OO             OOOOOOOOOOOO  OOO     OOOO\n");
printf(" OOO     OOO  OOOOOOOOOOOOO           OO            OOOOOOOOOOOOO  OOO      OOO\n");
printf("OOOO     OOOO  OOOOOOOOOOOO           OO            OOOOOOOOOOOO  OOOO      OOOO\n");
printf("OOOO     OOOOO OOOOOOOOOOO            OOO            OOOOOOOOOO  OOOOO      OOOO\n");
printf(" OOO     OOOOOO OOOOOOOOO             OOO             OOOOOOOOO OOOOOO      OOOO\n");
printf(" OOO      OOOOOO OOOOOOO              OOO             OOOOOOOO OOOOOO       OOO\n");
printf(" OOOO     OOOOOOOOOOOOOO          OO  OOO  OO          OOOOOOOOOOOOO       OOOO\n");
printf("  OOO    O OOOOOOOOOOOOO           OO OOO OO           OOOOOOOOOOOOO O     OOOO\n");
printf("  OOOO    O OOOOOOOOOOOO            OOOOOOO           OOOOOOOOOOOOO O     OOOO\n");
printf("   OOOO    OOOOOOOOOOOOOO      OOOOOOOOOOOOOOOOO      OOOOOOOOOOOOOO      OOOO\n");
printf("   OOOO     OOOOOOOOOOOOOO          OOOOOOO          OOOOOOOOOOOOOO      OOOO\n");
printf("    OOOO     OOOOOOOOOOOOO         OO OOOOO         OOOOOOOOOOOOOO      OOOO\n");
printf("      OOOOO     OOOOOOOOOOOOO         OOO         OOOOOOOOOOOOO      OOOOO\n");
printf("        OOOO      OOOOOOOOOOOOO       OOO       OOOOOOOOOOOO        OOOO\n");
printf("         OOOOO       OOOOOOOOOOOO     OOO     OOOOOOOOOOOO        OOOOO\n");
printf("           OOOOO         OOOOOOOOOOO  OOO  OOOOOOOOOOO          OOOOO\n");
printf("             OOOOOO          OOOOOOOOOOOOOOOOOOOOO           OOOOOO\n");
printf("               OOOOOOO                 OO                 OOOOOOO\n");
printf("                  OOOOOOOOO                           OOOOOOOO\n");
printf("                     OOOOOOOOOOO                OOOOOOOOOOO\n");
printf("                          OOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
printf("                                OOOOOOOOOOOOOOOO\n");

    gotoligcol(22,115);
    printf(" C A R T E  J E D I :");

    gotoligcol(24,110);
    printf(" V O U S  A L L E Z  A U  Q G");

    gotoligcol(26,108);
    printf(" D I R E C T I O N  Y A V I N  4");

    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }

    if(Tabjoueur[tour].position > 22)
    {
        Tabjoueur[tour].argent = Tabjoueur[tour].argent + 200;
    }
    Tabjoueur[tour].position= 22;
}

///Carte chance 6
void f6(joueur_t Tabjoueur[], int tour, int compteur)
{

    system("cls");


Color(15,0);
printf("\n");
printf("\n");
printf("                                OOOOOOOOOOOOOOOO \n");
printf("                         OOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
printf("                     OOOOOOOOOOO               OOOOOOOOOOO\n");
printf("                  OOOOOOOO                           OOOOOOOOO \n");
printf("               OOOOOOO                                    OOOOOO\n");
printf("             OOOOOO                    O                    OOOOOOO \n");
printf("           OOOOO      OO               O               OO      OOOOOO \n");
printf("         OOOOO      OOO                O                OOO      OOOOOO\n");
printf("        OOOO       OOO                 O                 OOO       OOOOO \n");
printf("      OOOOO      OOOOO                 O                 OOOOO       OOOO\n");
printf("     OOOO       OOOOO                  O                  OOOOO       OOOOO\n");
printf("    OOOO        OOOOOO                 O                 OOOOOO         OOOO\n");
printf("   OOOO        OOOOOOO                OO                 OOOOOOO  O      OOOO\n");
printf("   OOO     O   OOOOOOO                OO                OOOOOOOO   O     OOOO\n");
printf("  OOOO    OO  OOOOOOOOO               OO                OOOOOOOOO  OO     OOOO\n");
printf("  OOO     OO  OOOOOOOOOO              OO               OOOOOOOOOO  OO      OOOO\n");
printf(" OOOO    OOO  OOOOOOOOOOOO            OO             OOOOOOOOOOOO  OOO     OOOO\n");
printf(" OOO     OOO  OOOOOOOOOOOOO           OO            OOOOOOOOOOOOO  OOO      OOO\n");
printf("OOOO     OOOO  OOOOOOOOOOOO           OO            OOOOOOOOOOOO  OOOO      OOOO\n");
printf("OOOO     OOOOO OOOOOOOOOOO            OOO            OOOOOOOOOO  OOOOO      OOOO\n");
printf(" OOO     OOOOOO OOOOOOOOO             OOO             OOOOOOOOO OOOOOO      OOOO\n");
printf(" OOO      OOOOOO OOOOOOO              OOO             OOOOOOOO OOOOOO       OOO\n");
printf(" OOOO     OOOOOOOOOOOOOO          OO  OOO  OO          OOOOOOOOOOOOO       OOOO\n");
printf("  OOO    O OOOOOOOOOOOOO           OO OOO OO           OOOOOOOOOOOOO O     OOOO\n");
printf("  OOOO    O OOOOOOOOOOOO            OOOOOOO           OOOOOOOOOOOOO O     OOOO\n");
printf("   OOOO    OOOOOOOOOOOOOO      OOOOOOOOOOOOOOOOO      OOOOOOOOOOOOOO      OOOO\n");
printf("   OOOO     OOOOOOOOOOOOOO          OOOOOOO          OOOOOOOOOOOOOO      OOOO\n");
printf("    OOOO     OOOOOOOOOOOOO         OO OOOOO         OOOOOOOOOOOOOO      OOOO\n");
printf("      OOOOO     OOOOOOOOOOOOO         OOO         OOOOOOOOOOOOO      OOOOO\n");
printf("        OOOO      OOOOOOOOOOOOO       OOO       OOOOOOOOOOOO        OOOO\n");
printf("         OOOOO       OOOOOOOOOOOO     OOO     OOOOOOOOOOOO        OOOOO\n");
printf("           OOOOO         OOOOOOOOOOO  OOO  OOOOOOOOOOO          OOOOO\n");
printf("             OOOOOO          OOOOOOOOOOOOOOOOOOOOO           OOOOOO\n");
printf("               OOOOOOO                 OO                 OOOOOOO\n");
printf("                  OOOOOOOOO                           OOOOOOOO\n");
printf("                     OOOOOOOOOOO                OOOOOOOOOOO\n");
printf("                          OOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
printf("                                OOOOOOOOOOOOOOOO\n");

    gotoligcol(22,115);
    printf(" C A R T E  J E D I :");

    gotoligcol(24,95);
    printf(" V O U S  R E N D E Z  V I S I T E  A  M A I T R E  Y O D A");

    gotoligcol(26,108);
    printf(" A L L E Z  S U R  D A G O B A H");


    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }


    if(Tabjoueur[tour].position > 1)
    {
        Tabjoueur[tour].argent = Tabjoueur[tour].argent + 200;
    }
    Tabjoueur[tour].position= 1;

}

///Carte chance 7

void f7(joueur_t Tabjoueur[],caseMonop tabc[],int* compteurMaisons,int* compteurHotels, int tour, int compteur)
{

    system("cls");

Color(15,0);
printf("\n");
printf("\n");
printf("                                OOOOOOOOOOOOOOOO \n");
printf("                         OOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
printf("                     OOOOOOOOOOO               OOOOOOOOOOO\n");
printf("                  OOOOOOOO                           OOOOOOOOO \n");
printf("               OOOOOOO                                    OOOOOO\n");
printf("             OOOOOO                    O                    OOOOOOO \n");
printf("           OOOOO      OO               O               OO      OOOOOO \n");
printf("         OOOOO      OOO                O                OOO      OOOOOO\n");
printf("        OOOO       OOO                 O                 OOO       OOOOO \n");
printf("      OOOOO      OOOOO                 O                 OOOOO       OOOO\n");
printf("     OOOO       OOOOO                  O                  OOOOO       OOOOO\n");
printf("    OOOO        OOOOOO                 O                 OOOOOO         OOOO\n");
printf("   OOOO        OOOOOOO                OO                 OOOOOOO  O      OOOO\n");
printf("   OOO     O   OOOOOOO                OO                OOOOOOOO   O     OOOO\n");
printf("  OOOO    OO  OOOOOOOOO               OO                OOOOOOOOO  OO     OOOO\n");
printf("  OOO     OO  OOOOOOOOOO              OO               OOOOOOOOOO  OO      OOOO\n");
printf(" OOOO    OOO  OOOOOOOOOOOO            OO             OOOOOOOOOOOO  OOO     OOOO\n");
printf(" OOO     OOO  OOOOOOOOOOOOO           OO            OOOOOOOOOOOOO  OOO      OOO\n");
printf("OOOO     OOOO  OOOOOOOOOOOO           OO            OOOOOOOOOOOO  OOOO      OOOO\n");
printf("OOOO     OOOOO OOOOOOOOOOO            OOO            OOOOOOOOOO  OOOOO      OOOO\n");
printf(" OOO     OOOOOO OOOOOOOOO             OOO             OOOOOOOOO OOOOOO      OOOO\n");
printf(" OOO      OOOOOO OOOOOOO              OOO             OOOOOOOO OOOOOO       OOO\n");
printf(" OOOO     OOOOOOOOOOOOOO          OO  OOO  OO          OOOOOOOOOOOOO       OOOO\n");
printf("  OOO    O OOOOOOOOOOOOO           OO OOO OO           OOOOOOOOOOOOO O     OOOO\n");
printf("  OOOO    O OOOOOOOOOOOO            OOOOOOO           OOOOOOOOOOOOO O     OOOO\n");
printf("   OOOO    OOOOOOOOOOOOOO      OOOOOOOOOOOOOOOOO      OOOOOOOOOOOOOO      OOOO\n");
printf("   OOOO     OOOOOOOOOOOOOO          OOOOOOO          OOOOOOOOOOOOOO      OOOO\n");
printf("    OOOO     OOOOOOOOOOOOO         OO OOOOO         OOOOOOOOOOOOOO      OOOO\n");
printf("      OOOOO     OOOOOOOOOOOOO         OOO         OOOOOOOOOOOOO      OOOOO\n");
printf("        OOOO      OOOOOOOOOOOOO       OOO       OOOOOOOOOOOO        OOOO\n");
printf("         OOOOO       OOOOOOOOOOOO     OOO     OOOOOOOOOOOO        OOOOO\n");
printf("           OOOOO         OOOOOOOOOOO  OOO  OOOOOOOOOOO          OOOOO\n");
printf("             OOOOOO          OOOOOOOOOOOOOOOOOOOOO           OOOOOO\n");
printf("               OOOOOOO                 OO                 OOOOOOO\n");
printf("                  OOOOOOOOO                           OOOOOOOO\n");
printf("                     OOOOOOOOOOO                OOOOOOOOOOO\n");
printf("                          OOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
printf("                                OOOOOOOOOOOOOOOO\n");

    gotoligcol(22,115);
    printf(" C A R T E  J E D I :");

    gotoligcol(24,85);
    printf(" V O U S  E T E S  A R R E T E S  P A R  L' E M P I R E,  V O U S  S O U D O Y E Z");

    gotoligcol(26,91);
    printf(" L E  G A R D E  P O U R  V O U S  E C H A P P E Z,  P A Y E Z  5 0 0");


    gotoligcol(28,88);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }

    if(Tabjoueur[tour].argent - 500 < 0)
    {
        faillite_carte(Tabjoueur,tabc,compteurMaisons,compteurHotels,tour,500,compteur);
    }
    else
    {
        Tabjoueur[tour].argent -= 500;
    }


}

///Carte chance 8
void f8(joueur_t Tabjoueur[], int tour, int compteur)
{

    system("cls");

Color(15,0);
printf("\n");
printf("\n");
printf("                                OOOOOOOOOOOOOOOO \n");
printf("                         OOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
printf("                     OOOOOOOOOOO               OOOOOOOOOOO\n");
printf("                  OOOOOOOO                           OOOOOOOOO \n");
printf("               OOOOOOO                                    OOOOOO\n");
printf("             OOOOOO                    O                    OOOOOOO \n");
printf("           OOOOO      OO               O               OO      OOOOOO \n");
printf("         OOOOO      OOO                O                OOO      OOOOOO\n");
printf("        OOOO       OOO                 O                 OOO       OOOOO \n");
printf("      OOOOO      OOOOO                 O                 OOOOO       OOOO\n");
printf("     OOOO       OOOOO                  O                  OOOOO       OOOOO\n");
printf("    OOOO        OOOOOO                 O                 OOOOOO         OOOO\n");
printf("   OOOO        OOOOOOO                OO                 OOOOOOO  O      OOOO\n");
printf("   OOO     O   OOOOOOO                OO                OOOOOOOO   O     OOOO\n");
printf("  OOOO    OO  OOOOOOOOO               OO                OOOOOOOOO  OO     OOOO\n");
printf("  OOO     OO  OOOOOOOOOO              OO               OOOOOOOOOO  OO      OOOO\n");
printf(" OOOO    OOO  OOOOOOOOOOOO            OO             OOOOOOOOOOOO  OOO     OOOO\n");
printf(" OOO     OOO  OOOOOOOOOOOOO           OO            OOOOOOOOOOOOO  OOO      OOO\n");
printf("OOOO     OOOO  OOOOOOOOOOOO           OO            OOOOOOOOOOOO  OOOO      OOOO\n");
printf("OOOO     OOOOO OOOOOOOOOOO            OOO            OOOOOOOOOO  OOOOO      OOOO\n");
printf(" OOO     OOOOOO OOOOOOOOO             OOO             OOOOOOOOO OOOOOO      OOOO\n");
printf(" OOO      OOOOOO OOOOOOO              OOO             OOOOOOOO OOOOOO       OOO\n");
printf(" OOOO     OOOOOOOOOOOOOO          OO  OOO  OO          OOOOOOOOOOOOO       OOOO\n");
printf("  OOO    O OOOOOOOOOOOOO           OO OOO OO           OOOOOOOOOOOOO O     OOOO\n");
printf("  OOOO    O OOOOOOOOOOOO            OOOOOOO           OOOOOOOOOOOOO O     OOOO\n");
printf("   OOOO    OOOOOOOOOOOOOO      OOOOOOOOOOOOOOOOO      OOOOOOOOOOOOOO      OOOO\n");
printf("   OOOO     OOOOOOOOOOOOOO          OOOOOOO          OOOOOOOOOOOOOO      OOOO\n");
printf("    OOOO     OOOOOOOOOOOOO         OO OOOOO         OOOOOOOOOOOOOO      OOOO\n");
printf("      OOOOO     OOOOOOOOOOOOO         OOO         OOOOOOOOOOOOO      OOOOO\n");
printf("        OOOO      OOOOOOOOOOOOO       OOO       OOOOOOOOOOOO        OOOO\n");
printf("         OOOOO       OOOOOOOOOOOO     OOO     OOOOOOOOOOOO        OOOOO\n");
printf("           OOOOO         OOOOOOOOOOO  OOO  OOOOOOOOOOO          OOOOO\n");
printf("             OOOOOO          OOOOOOOOOOOOOOOOOOOOO           OOOOOO\n");
printf("               OOOOOOO                 OO                 OOOOOOO\n");
printf("                  OOOOOOOOO                           OOOOOOOO\n");
printf("                     OOOOOOOOOOO                OOOOOOOOOOO\n");
printf("                          OOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
printf("                                OOOOOOOOOOOOOOOO\n");
    gotoligcol(22,115);
    printf(" C A R T E  J E D I :");

    gotoligcol(24,100);
    printf(" P R I M E  P O U R  L A  D E T R U C T I O N  D E");

    gotoligcol(26,98);
    printf("L' E T O I L E  D E  L A  M O R T, R E C E V E Z  4 0 0");



    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }


    Tabjoueur[tour].argent=Tabjoueur[tour].argent+400;
}

///Carte chance 9

void f9(joueur_t Tabjoueur[],caseMonop tabc[],int* compteurMaisons,int* compteurHotels, int tour, int compteur)
{

    system("cls");

Color(15,0);
printf("\n");
printf("\n");
printf("                                OOOOOOOOOOOOOOOO \n");
printf("                         OOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
printf("                     OOOOOOOOOOO               OOOOOOOOOOO\n");
printf("                  OOOOOOOO                           OOOOOOOOO \n");
printf("               OOOOOOO                                    OOOOOO\n");
printf("             OOOOOO                    O                    OOOOOOO \n");
printf("           OOOOO      OO               O               OO      OOOOOO \n");
printf("         OOOOO      OOO                O                OOO      OOOOOO\n");
printf("        OOOO       OOO                 O                 OOO       OOOOO \n");
printf("      OOOOO      OOOOO                 O                 OOOOO       OOOO\n");
printf("     OOOO       OOOOO                  O                  OOOOO       OOOOO\n");
printf("    OOOO        OOOOOO                 O                 OOOOOO         OOOO\n");
printf("   OOOO        OOOOOOO                OO                 OOOOOOO  O      OOOO\n");
printf("   OOO     O   OOOOOOO                OO                OOOOOOOO   O     OOOO\n");
printf("  OOOO    OO  OOOOOOOOO               OO                OOOOOOOOO  OO     OOOO\n");
printf("  OOO     OO  OOOOOOOOOO              OO               OOOOOOOOOO  OO      OOOO\n");
printf(" OOOO    OOO  OOOOOOOOOOOO            OO             OOOOOOOOOOOO  OOO     OOOO\n");
printf(" OOO     OOO  OOOOOOOOOOOOO           OO            OOOOOOOOOOOOO  OOO      OOO\n");
printf("OOOO     OOOO  OOOOOOOOOOOO           OO            OOOOOOOOOOOO  OOOO      OOOO\n");
printf("OOOO     OOOOO OOOOOOOOOOO            OOO            OOOOOOOOOO  OOOOO      OOOO\n");
printf(" OOO     OOOOOO OOOOOOOOO             OOO             OOOOOOOOO OOOOOO      OOOO\n");
printf(" OOO      OOOOOO OOOOOOO              OOO             OOOOOOOO OOOOOO       OOO\n");
printf(" OOOO     OOOOOOOOOOOOOO          OO  OOO  OO          OOOOOOOOOOOOO       OOOO\n");
printf("  OOO    O OOOOOOOOOOOOO           OO OOO OO           OOOOOOOOOOOOO O     OOOO\n");
printf("  OOOO    O OOOOOOOOOOOO            OOOOOOO           OOOOOOOOOOOOO O     OOOO\n");
printf("   OOOO    OOOOOOOOOOOOOO      OOOOOOOOOOOOOOOOO      OOOOOOOOOOOOOO      OOOO\n");
printf("   OOOO     OOOOOOOOOOOOOO          OOOOOOO          OOOOOOOOOOOOOO      OOOO\n");
printf("    OOOO     OOOOOOOOOOOOO         OO OOOOO         OOOOOOOOOOOOOO      OOOO\n");
printf("      OOOOO     OOOOOOOOOOOOO         OOO         OOOOOOOOOOOOO      OOOOO\n");
printf("        OOOO      OOOOOOOOOOOOO       OOO       OOOOOOOOOOOO        OOOO\n");
printf("         OOOOO       OOOOOOOOOOOO     OOO     OOOOOOOOOOOO        OOOOO\n");
printf("           OOOOO         OOOOOOOOOOO  OOO  OOOOOOOOOOO          OOOOO\n");
printf("             OOOOOO          OOOOOOOOOOOOOOOOOOOOO           OOOOOO\n");
printf("               OOOOOOO                 OO                 OOOOOOO\n");
printf("                  OOOOOOOOO                           OOOOOOOO\n");
printf("                     OOOOOOOOOOO                OOOOOOOOOOO\n");
printf("                          OOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
printf("                                OOOOOOOOOOOOOOOO\n");

    gotoligcol(22,115);
    printf(" C A R T E  J E D I :");

    gotoligcol(24,95);
    printf(" V O U S  A V E Z  D E S  D E T T E S  E N V E R S  J A B A H");

    gotoligcol(26,115);
    printf(" P A Y E Z  1 0 0");

    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }

    if(Tabjoueur[tour].argent - 100 < 0)
    {
        faillite_carte(Tabjoueur,tabc,compteurMaisons,compteurHotels,tour,100,compteur);
    }
    else
    {
        Tabjoueur[tour].argent -= 100;
    }

}

///Carte chance 10
void f10(joueur_t Tabjoueur[], int tour, int compteur)
{

    system("cls");

Color(15,0);
printf("\n");
printf("\n");
printf("                                OOOOOOOOOOOOOOOO \n");
printf("                         OOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
printf("                     OOOOOOOOOOO               OOOOOOOOOOO\n");
printf("                  OOOOOOOO                           OOOOOOOOO \n");
printf("               OOOOOOO                                    OOOOOO\n");
printf("             OOOOOO                    O                    OOOOOOO \n");
printf("           OOOOO      OO               O               OO      OOOOOO \n");
printf("         OOOOO      OOO                O                OOO      OOOOOO\n");
printf("        OOOO       OOO                 O                 OOO       OOOOO \n");
printf("      OOOOO      OOOOO                 O                 OOOOO       OOOO\n");
printf("     OOOO       OOOOO                  O                  OOOOO       OOOOO\n");
printf("    OOOO        OOOOOO                 O                 OOOOOO         OOOO\n");
printf("   OOOO        OOOOOOO                OO                 OOOOOOO  O      OOOO\n");
printf("   OOO     O   OOOOOOO                OO                OOOOOOOO   O     OOOO\n");
printf("  OOOO    OO  OOOOOOOOO               OO                OOOOOOOOO  OO     OOOO\n");
printf("  OOO     OO  OOOOOOOOOO              OO               OOOOOOOOOO  OO      OOOO\n");
printf(" OOOO    OOO  OOOOOOOOOOOO            OO             OOOOOOOOOOOO  OOO     OOOO\n");
printf(" OOO     OOO  OOOOOOOOOOOOO           OO            OOOOOOOOOOOOO  OOO      OOO\n");
printf("OOOO     OOOO  OOOOOOOOOOOO           OO            OOOOOOOOOOOO  OOOO      OOOO\n");
printf("OOOO     OOOOO OOOOOOOOOOO            OOO            OOOOOOOOOO  OOOOO      OOOO\n");
printf(" OOO     OOOOOO OOOOOOOOO             OOO             OOOOOOOOO OOOOOO      OOOO\n");
printf(" OOO      OOOOOO OOOOOOO              OOO             OOOOOOOO OOOOOO       OOO\n");
printf(" OOOO     OOOOOOOOOOOOOO          OO  OOO  OO          OOOOOOOOOOOOO       OOOO\n");
printf("  OOO    O OOOOOOOOOOOOO           OO OOO OO           OOOOOOOOOOOOO O     OOOO\n");
printf("  OOOO    O OOOOOOOOOOOO            OOOOOOO           OOOOOOOOOOOOO O     OOOO\n");
printf("   OOOO    OOOOOOOOOOOOOO      OOOOOOOOOOOOOOOOO      OOOOOOOOOOOOOO      OOOO\n");
printf("   OOOO     OOOOOOOOOOOOOO          OOOOOOO          OOOOOOOOOOOOOO      OOOO\n");
printf("    OOOO     OOOOOOOOOOOOO         OO OOOOO         OOOOOOOOOOOOOO      OOOO\n");
printf("      OOOOO     OOOOOOOOOOOOO         OOO         OOOOOOOOOOOOO      OOOOO\n");
printf("        OOOO      OOOOOOOOOOOOO       OOO       OOOOOOOOOOOO        OOOO\n");
printf("         OOOOO       OOOOOOOOOOOO     OOO     OOOOOOOOOOOO        OOOOO\n");
printf("           OOOOO         OOOOOOOOOOO  OOO  OOOOOOOOOOO          OOOOO\n");
printf("             OOOOOO          OOOOOOOOOOOOOOOOOOOOO           OOOOOO\n");
printf("               OOOOOOO                 OO                 OOOOOOO\n");
printf("                  OOOOOOOOO                           OOOOOOOO\n");
printf("                     OOOOOOOOOOO                OOOOOOOOOOO\n");
printf("                          OOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
printf("                                OOOOOOOOOOOOOOOO\n");
    gotoligcol(22,115);
    printf(" C A R T E  J E D I :");

    gotoligcol(24,95);
    printf(" V O U S  E T E S  R E C H E R C H E S  P A R  L' E M P I R E,");

    gotoligcol(26,105);
    printf(" C A C H E Z  V O U S  S U R  M U S T A F A R");

    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,0);


    if(Tabjoueur[tour].position > 8)
    {
        Tabjoueur[tour].argent = Tabjoueur[tour].argent + 200;
    }
    Tabjoueur[tour].position= 8;

}

///Carte chance 11
void f11(joueur_t Tabjoueur[], int tour, int compteur)
{

    system("cls");

Color(15,0);
printf("\n");
printf("\n");
printf("                                OOOOOOOOOOOOOOOO \n");
printf("                         OOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
printf("                     OOOOOOOOOOO               OOOOOOOOOOO\n");
printf("                  OOOOOOOO                           OOOOOOOOO \n");
printf("               OOOOOOO                                    OOOOOO\n");
printf("             OOOOOO                    O                    OOOOOOO \n");
printf("           OOOOO      OO               O               OO      OOOOOO \n");
printf("         OOOOO      OOO                O                OOO      OOOOOO\n");
printf("        OOOO       OOO                 O                 OOO       OOOOO \n");
printf("      OOOOO      OOOOO                 O                 OOOOO       OOOO\n");
printf("     OOOO       OOOOO                  O                  OOOOO       OOOOO\n");
printf("    OOOO        OOOOOO                 O                 OOOOOO         OOOO\n");
printf("   OOOO        OOOOOOO                OO                 OOOOOOO  O      OOOO\n");
printf("   OOO     O   OOOOOOO                OO                OOOOOOOO   O     OOOO\n");
printf("  OOOO    OO  OOOOOOOOO               OO                OOOOOOOOO  OO     OOOO\n");
printf("  OOO     OO  OOOOOOOOOO              OO               OOOOOOOOOO  OO      OOOO\n");
printf(" OOOO    OOO  OOOOOOOOOOOO            OO             OOOOOOOOOOOO  OOO     OOOO\n");
printf(" OOO     OOO  OOOOOOOOOOOOO           OO            OOOOOOOOOOOOO  OOO      OOO\n");
printf("OOOO     OOOO  OOOOOOOOOOOO           OO            OOOOOOOOOOOO  OOOO      OOOO\n");
printf("OOOO     OOOOO OOOOOOOOOOO            OOO            OOOOOOOOOO  OOOOO      OOOO\n");
printf(" OOO     OOOOOO OOOOOOOOO             OOO             OOOOOOOOO OOOOOO      OOOO\n");
printf(" OOO      OOOOOO OOOOOOO              OOO             OOOOOOOO OOOOOO       OOO\n");
printf(" OOOO     OOOOOOOOOOOOOO          OO  OOO  OO          OOOOOOOOOOOOO       OOOO\n");
printf("  OOO    O OOOOOOOOOOOOO           OO OOO OO           OOOOOOOOOOOOO O     OOOO\n");
printf("  OOOO    O OOOOOOOOOOOO            OOOOOOO           OOOOOOOOOOOOO O     OOOO\n");
printf("   OOOO    OOOOOOOOOOOOOO      OOOOOOOOOOOOOOOOO      OOOOOOOOOOOOOO      OOOO\n");
printf("   OOOO     OOOOOOOOOOOOOO          OOOOOOO          OOOOOOOOOOOOOO      OOOO\n");
printf("    OOOO     OOOOOOOOOOOOO         OO OOOOO         OOOOOOOOOOOOOO      OOOO\n");
printf("      OOOOO     OOOOOOOOOOOOO         OOO         OOOOOOOOOOOOO      OOOOO\n");
printf("        OOOO      OOOOOOOOOOOOO       OOO       OOOOOOOOOOOO        OOOO\n");
printf("         OOOOO       OOOOOOOOOOOO     OOO     OOOOOOOOOOOO        OOOOO\n");
printf("           OOOOO         OOOOOOOOOOO  OOO  OOOOOOOOOOO          OOOOO\n");
printf("             OOOOOO          OOOOOOOOOOOOOOOOOOOOO           OOOOOO\n");
printf("               OOOOOOO                 OO                 OOOOOOO\n");
printf("                  OOOOOOOOO                           OOOOOOOO\n");
printf("                     OOOOOOOOOOO                OOOOOOOOOOO\n");
printf("                          OOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
printf("                                OOOOOOOOOOOOOOOO\n");

    gotoligcol(22,115);
    printf(" C A R T E  J E D I :");

    gotoligcol(24,99);
    printf(" VE N T E S  D E  P I E C E S  D E T A C H E E S,");

    gotoligcol(26,114);
    printf(" R E C E V E Z   2 0 0");

    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,0);


    Tabjoueur[tour].argent=Tabjoueur[tour].argent+200;
}

///Carte chance 12
void f12(joueur_t Tabjoueur[], int tour, int compteur)
{

    system("cls");

Color(15,0);
printf("\n");
printf("\n");
printf("                                OOOOOOOOOOOOOOOO \n");
printf("                         OOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
printf("                     OOOOOOOOOOO               OOOOOOOOOOO\n");
printf("                  OOOOOOOO                           OOOOOOOOO \n");
printf("               OOOOOOO                                    OOOOOO\n");
printf("             OOOOOO                    O                    OOOOOOO \n");
printf("           OOOOO      OO               O               OO      OOOOOO \n");
printf("         OOOOO      OOO                O                OOO      OOOOOO\n");
printf("        OOOO       OOO                 O                 OOO       OOOOO \n");
printf("      OOOOO      OOOOO                 O                 OOOOO       OOOO\n");
printf("     OOOO       OOOOO                  O                  OOOOO       OOOOO\n");
printf("    OOOO        OOOOOO                 O                 OOOOOO         OOOO\n");
printf("   OOOO        OOOOOOO                OO                 OOOOOOO  O      OOOO\n");
printf("   OOO     O   OOOOOOO                OO                OOOOOOOO   O     OOOO\n");
printf("  OOOO    OO  OOOOOOOOO               OO                OOOOOOOOO  OO     OOOO\n");
printf("  OOO     OO  OOOOOOOOOO              OO               OOOOOOOOOO  OO      OOOO\n");
printf(" OOOO    OOO  OOOOOOOOOOOO            OO             OOOOOOOOOOOO  OOO     OOOO\n");
printf(" OOO     OOO  OOOOOOOOOOOOO           OO            OOOOOOOOOOOOO  OOO      OOO\n");
printf("OOOO     OOOO  OOOOOOOOOOOO           OO            OOOOOOOOOOOO  OOOO      OOOO\n");
printf("OOOO     OOOOO OOOOOOOOOOO            OOO            OOOOOOOOOO  OOOOO      OOOO\n");
printf(" OOO     OOOOOO OOOOOOOOO             OOO             OOOOOOOOO OOOOOO      OOOO\n");
printf(" OOO      OOOOOO OOOOOOO              OOO             OOOOOOOO OOOOOO       OOO\n");
printf(" OOOO     OOOOOOOOOOOOOO          OO  OOO  OO          OOOOOOOOOOOOO       OOOO\n");
printf("  OOO    O OOOOOOOOOOOOO           OO OOO OO           OOOOOOOOOOOOO O     OOOO\n");
printf("  OOOO    O OOOOOOOOOOOO            OOOOOOO           OOOOOOOOOOOOO O     OOOO\n");
printf("   OOOO    OOOOOOOOOOOOOO      OOOOOOOOOOOOOOOOO      OOOOOOOOOOOOOO      OOOO\n");
printf("   OOOO     OOOOOOOOOOOOOO          OOOOOOO          OOOOOOOOOOOOOO      OOOO\n");
printf("    OOOO     OOOOOOOOOOOOO         OO OOOOO         OOOOOOOOOOOOOO      OOOO\n");
printf("      OOOOO     OOOOOOOOOOOOO         OOO         OOOOOOOOOOOOO      OOOOO\n");
printf("        OOOO      OOOOOOOOOOOOO       OOO       OOOOOOOOOOOO        OOOO\n");
printf("         OOOOO       OOOOOOOOOOOO     OOO     OOOOOOOOOOOO        OOOOO\n");
printf("           OOOOO         OOOOOOOOOOO  OOO  OOOOOOOOOOO          OOOOO\n");
printf("             OOOOOO          OOOOOOOOOOOOOOOOOOOOO           OOOOOO\n");
printf("               OOOOOOO                 OO                 OOOOOOO\n");
printf("                  OOOOOOOOO                           OOOOOOOO\n");
printf("                     OOOOOOOOOOO                OOOOOOOOOOO\n");
printf("                          OOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
printf("                                OOOOOOOOOOOOOOOO\n");

    gotoligcol(22,115);
    printf(" C A R T E  J E D I :");

    gotoligcol(24,92);
    printf(" L' A L L I A N C E  R E B E L L E  V O U S  R E M E R C I E  P O U R ");

    gotoligcol(26,100);
    printf("V O S  B O N N E S  A C T I O N S, R E C E V E Z  50");

    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,0);


    Tabjoueur[tour].argent=Tabjoueur[tour].argent+50;

}

///Carte chance 13
void f13(joueur_t Tabjoueur[], int tour, int compteur)
{

    system("cls");

Color(15,0);
printf("\n");
printf("\n");
printf("                                OOOOOOOOOOOOOOOO \n");
printf("                         OOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
printf("                     OOOOOOOOOOO               OOOOOOOOOOO\n");
printf("                  OOOOOOOO                           OOOOOOOOO \n");
printf("               OOOOOOO                                    OOOOOO\n");
printf("             OOOOOO                    O                    OOOOOOO \n");
printf("           OOOOO      OO               O               OO      OOOOOO \n");
printf("         OOOOO      OOO                O                OOO      OOOOOO\n");
printf("        OOOO       OOO                 O                 OOO       OOOOO \n");
printf("      OOOOO      OOOOO                 O                 OOOOO       OOOO\n");
printf("     OOOO       OOOOO                  O                  OOOOO       OOOOO\n");
printf("    OOOO        OOOOOO                 O                 OOOOOO         OOOO\n");
printf("   OOOO        OOOOOOO                OO                 OOOOOOO  O      OOOO\n");
printf("   OOO     O   OOOOOOO                OO                OOOOOOOO   O     OOOO\n");
printf("  OOOO    OO  OOOOOOOOO               OO                OOOOOOOOO  OO     OOOO\n");
printf("  OOO     OO  OOOOOOOOOO              OO               OOOOOOOOOO  OO      OOOO\n");
printf(" OOOO    OOO  OOOOOOOOOOOO            OO             OOOOOOOOOOOO  OOO     OOOO\n");
printf(" OOO     OOO  OOOOOOOOOOOOO           OO            OOOOOOOOOOOOO  OOO      OOO\n");
printf("OOOO     OOOO  OOOOOOOOOOOO           OO            OOOOOOOOOOOO  OOOO      OOOO\n");
printf("OOOO     OOOOO OOOOOOOOOOO            OOO            OOOOOOOOOO  OOOOO      OOOO\n");
printf(" OOO     OOOOOO OOOOOOOOO             OOO             OOOOOOOOO OOOOOO      OOOO\n");
printf(" OOO      OOOOOO OOOOOOO              OOO             OOOOOOOO OOOOOO       OOO\n");
printf(" OOOO     OOOOOOOOOOOOOO          OO  OOO  OO          OOOOOOOOOOOOO       OOOO\n");
printf("  OOO    O OOOOOOOOOOOOO           OO OOO OO           OOOOOOOOOOOOO O     OOOO\n");
printf("  OOOO    O OOOOOOOOOOOO            OOOOOOO           OOOOOOOOOOOOO O     OOOO\n");
printf("   OOOO    OOOOOOOOOOOOOO      OOOOOOOOOOOOOOOOO      OOOOOOOOOOOOOO      OOOO\n");
printf("   OOOO     OOOOOOOOOOOOOO          OOOOOOO          OOOOOOOOOOOOOO      OOOO\n");
printf("    OOOO     OOOOOOOOOOOOO         OO OOOOO         OOOOOOOOOOOOOO      OOOO\n");
printf("      OOOOO     OOOOOOOOOOOOO         OOO         OOOOOOOOOOOOO      OOOOO\n");
printf("        OOOO      OOOOOOOOOOOOO       OOO       OOOOOOOOOOOO        OOOO\n");
printf("         OOOOO       OOOOOOOOOOOO     OOO     OOOOOOOOOOOO        OOOOO\n");
printf("           OOOOO         OOOOOOOOOOO  OOO  OOOOOOOOOOO          OOOOO\n");
printf("             OOOOOO          OOOOOOOOOOOOOOOOOOOOO           OOOOOO\n");
printf("               OOOOOOO                 OO                 OOOOOOO\n");
printf("                  OOOOOOOOO                           OOOOOOOO\n");
printf("                     OOOOOOOOOOO                OOOOOOOOOOO\n");
printf("                          OOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
printf("                                OOOOOOOOOOOOOOOO\n");

    gotoligcol(22,115);
    printf(" C A R T E  J E D I :");

    gotoligcol(24,95);
    printf(" A L L E Z  A U  S P A T I O P O R T  L E  P L U S  P R O C H E");



    gotoligcol(26,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }

    if(Tabjoueur[tour].position >= 1 && Tabjoueur[tour].position <= 7)
    {
        Tabjoueur[tour].position = 4;
    }
    if(Tabjoueur[tour].position > 7 && Tabjoueur[tour].position <= 13)
    {
        Tabjoueur[tour].position = 10;
    }
    if(Tabjoueur[tour].position > 13 && Tabjoueur[tour].position <= 22)
    {
        Tabjoueur[tour].position = 18;
    }
    if((Tabjoueur[tour].position > 22 && Tabjoueur[tour].position <= 27) || Tabjoueur[tour].position == 0)
    {
        if(Tabjoueur[tour].position == 0)
        {
            Tabjoueur[tour].argent = Tabjoueur[tour].argent + 200;
        }
        Tabjoueur[tour].position = 25;
    }

}

///Carte chance 14
void f14(joueur_t Tabjoueur[], int tour, int compteur)
{

    system("cls");


Color(15,0);
printf("\n");
printf("\n");
printf("                                OOOOOOOOOOOOOOOO \n");
printf("                         OOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
printf("                     OOOOOOOOOOO               OOOOOOOOOOO\n");
printf("                  OOOOOOOO                           OOOOOOOOO \n");
printf("               OOOOOOO                                    OOOOOO\n");
printf("             OOOOOO                    O                    OOOOOOO \n");
printf("           OOOOO      OO               O               OO      OOOOOO \n");
printf("         OOOOO      OOO                O                OOO      OOOOOO\n");
printf("        OOOO       OOO                 O                 OOO       OOOOO \n");
printf("      OOOOO      OOOOO                 O                 OOOOO       OOOO\n");
printf("     OOOO       OOOOO                  O                  OOOOO       OOOOO\n");
printf("    OOOO        OOOOOO                 O                 OOOOOO         OOOO\n");
printf("   OOOO        OOOOOOO                OO                 OOOOOOO  O      OOOO\n");
printf("   OOO     O   OOOOOOO                OO                OOOOOOOO   O     OOOO\n");
printf("  OOOO    OO  OOOOOOOOO               OO                OOOOOOOOO  OO     OOOO\n");
printf("  OOO     OO  OOOOOOOOOO              OO               OOOOOOOOOO  OO      OOOO\n");
printf(" OOOO    OOO  OOOOOOOOOOOO            OO             OOOOOOOOOOOO  OOO     OOOO\n");
printf(" OOO     OOO  OOOOOOOOOOOOO           OO            OOOOOOOOOOOOO  OOO      OOO\n");
printf("OOOO     OOOO  OOOOOOOOOOOO           OO            OOOOOOOOOOOO  OOOO      OOOO\n");
printf("OOOO     OOOOO OOOOOOOOOOO            OOO            OOOOOOOOOO  OOOOO      OOOO\n");
printf(" OOO     OOOOOO OOOOOOOOO             OOO             OOOOOOOOO OOOOOO      OOOO\n");
printf(" OOO      OOOOOO OOOOOOO              OOO             OOOOOOOO OOOOOO       OOO\n");
printf(" OOOO     OOOOOOOOOOOOOO          OO  OOO  OO          OOOOOOOOOOOOO       OOOO\n");
printf("  OOO    O OOOOOOOOOOOOO           OO OOO OO           OOOOOOOOOOOOO O     OOOO\n");
printf("  OOOO    O OOOOOOOOOOOO            OOOOOOO           OOOOOOOOOOOOO O     OOOO\n");
printf("   OOOO    OOOOOOOOOOOOOO      OOOOOOOOOOOOOOOOO      OOOOOOOOOOOOOO      OOOO\n");
printf("   OOOO     OOOOOOOOOOOOOO          OOOOOOO          OOOOOOOOOOOOOO      OOOO\n");
printf("    OOOO     OOOOOOOOOOOOO         OO OOOOO         OOOOOOOOOOOOOO      OOOO\n");
printf("      OOOOO     OOOOOOOOOOOOO         OOO         OOOOOOOOOOOOO      OOOOO\n");
printf("        OOOO      OOOOOOOOOOOOO       OOO       OOOOOOOOOOOO        OOOO\n");
printf("         OOOOO       OOOOOOOOOOOO     OOO     OOOOOOOOOOOO        OOOOO\n");
printf("           OOOOO         OOOOOOOOOOO  OOO  OOOOOOOOOOO          OOOOO\n");
printf("             OOOOOO          OOOOOOOOOOOOOOOOOOOOO           OOOOOO\n");
printf("               OOOOOOO                 OO                 OOOOOOO\n");
printf("                  OOOOOOOOO                           OOOOOOOO\n");
printf("                     OOOOOOOOOOO                OOOOOOOOOOO\n");
printf("                          OOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
printf("                                OOOOOOOOOOOOOOOO\n");


    gotoligcol(22,115);
    printf(" C A R T E  J E D I :");

    gotoligcol(24,99);
    printf(" L E I A  V O U S  E N V O I E  E N  M I S S I O N,");

    gotoligcol(26,101);
    printf(" R E N D E Z  V O U S  S U R  C O R U S A N T");

    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,0);

    Tabjoueur[tour].position=27;

}

///Carte chance 15
void f15(joueur_t Tabjoueur[], int tour, int compteur)
{

    system("cls");

Color(15,0);
printf("\n");
printf("\n");
printf("                                OOOOOOOOOOOOOOOO \n");
printf("                         OOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
printf("                     OOOOOOOOOOO               OOOOOOOOOOO\n");
printf("                  OOOOOOOO                           OOOOOOOOO \n");
printf("               OOOOOOO                                    OOOOOO\n");
printf("             OOOOOO                    O                    OOOOOOO \n");
printf("           OOOOO      OO               O               OO      OOOOOO \n");
printf("         OOOOO      OOO                O                OOO      OOOOOO\n");
printf("        OOOO       OOO                 O                 OOO       OOOOO \n");
printf("      OOOOO      OOOOO                 O                 OOOOO       OOOO\n");
printf("     OOOO       OOOOO                  O                  OOOOO       OOOOO\n");
printf("    OOOO        OOOOOO                 O                 OOOOOO         OOOO\n");
printf("   OOOO        OOOOOOO                OO                 OOOOOOO  O      OOOO\n");
printf("   OOO     O   OOOOOOO                OO                OOOOOOOO   O     OOOO\n");
printf("  OOOO    OO  OOOOOOOOO               OO                OOOOOOOOO  OO     OOOO\n");
printf("  OOO     OO  OOOOOOOOOO              OO               OOOOOOOOOO  OO      OOOO\n");
printf(" OOOO    OOO  OOOOOOOOOOOO            OO             OOOOOOOOOOOO  OOO     OOOO\n");
printf(" OOO     OOO  OOOOOOOOOOOOO           OO            OOOOOOOOOOOOO  OOO      OOO\n");
printf("OOOO     OOOO  OOOOOOOOOOOO           OO            OOOOOOOOOOOO  OOOO      OOOO\n");
printf("OOOO     OOOOO OOOOOOOOOOO            OOO            OOOOOOOOOO  OOOOO      OOOO\n");
printf(" OOO     OOOOOO OOOOOOOOO             OOO             OOOOOOOOO OOOOOO      OOOO\n");
printf(" OOO      OOOOOO OOOOOOO              OOO             OOOOOOOO OOOOOO       OOO\n");
printf(" OOOO     OOOOOOOOOOOOOO          OO  OOO  OO          OOOOOOOOOOOOO       OOOO\n");
printf("  OOO    O OOOOOOOOOOOOO           OO OOO OO           OOOOOOOOOOOOO O     OOOO\n");
printf("  OOOO    O OOOOOOOOOOOO            OOOOOOO           OOOOOOOOOOOOO O     OOOO\n");
printf("   OOOO    OOOOOOOOOOOOOO      OOOOOOOOOOOOOOOOO      OOOOOOOOOOOOOO      OOOO\n");
printf("   OOOO     OOOOOOOOOOOOOO          OOOOOOO          OOOOOOOOOOOOOO      OOOO\n");
printf("    OOOO     OOOOOOOOOOOOO         OO OOOOO         OOOOOOOOOOOOOO      OOOO\n");
printf("      OOOOO     OOOOOOOOOOOOO         OOO         OOOOOOOOOOOOO      OOOOO\n");
printf("        OOOO      OOOOOOOOOOOOO       OOO       OOOOOOOOOOOO        OOOO\n");
printf("         OOOOO       OOOOOOOOOOOO     OOO     OOOOOOOOOOOO        OOOOO\n");
printf("           OOOOO         OOOOOOOOOOO  OOO  OOOOOOOOOOO          OOOOO\n");
printf("             OOOOOO          OOOOOOOOOOOOOOOOOOOOO           OOOOOO\n");
printf("               OOOOOOO                 OO                 OOOOOOO\n");
printf("                  OOOOOOOOO                           OOOOOOOO\n");
printf("                     OOOOOOOOOOO                OOOOOOOOOOO\n");
printf("                          OOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
printf("                                OOOOOOOOOOOOOOOO\n");

    gotoligcol(22,115);
    printf(" C A R T E  J E D I :");

    gotoligcol(24,104);
    printf(" R E C U L E Z  D E  T R O I S  C A S E S");



    gotoligcol(26,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }

    Tabjoueur[tour].position = Tabjoueur[tour].position - 3 ;
    if(Tabjoueur[tour].position == 0)
    {
        Tabjoueur[tour].argent = Tabjoueur[tour].argent + 200;
    }
}

void f16(joueur_t Tabjoueur[], int tour, int compteur)
{

    system("cls");

Color(15,0);
printf("\n");
printf("\n");
printf("                                OOOOOOOOOOOOOOOO \n");
printf("                         OOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
printf("                     OOOOOOOOOOO               OOOOOOOOOOO\n");
printf("                  OOOOOOOO                           OOOOOOOOO \n");
printf("               OOOOOOO                                    OOOOOO\n");
printf("             OOOOOO                    O                    OOOOOOO \n");
printf("           OOOOO      OO               O               OO      OOOOOO \n");
printf("         OOOOO      OOO                O                OOO      OOOOOO\n");
printf("        OOOO       OOO                 O                 OOO       OOOOO \n");
printf("      OOOOO      OOOOO                 O                 OOOOO       OOOO\n");
printf("     OOOO       OOOOO                  O                  OOOOO       OOOOO\n");
printf("    OOOO        OOOOOO                 O                 OOOOOO         OOOO\n");
printf("   OOOO        OOOOOOO                OO                 OOOOOOO  O      OOOO\n");
printf("   OOO     O   OOOOOOO                OO                OOOOOOOO   O     OOOO\n");
printf("  OOOO    OO  OOOOOOOOO               OO                OOOOOOOOO  OO     OOOO\n");
printf("  OOO     OO  OOOOOOOOOO              OO               OOOOOOOOOO  OO      OOOO\n");
printf(" OOOO    OOO  OOOOOOOOOOOO            OO             OOOOOOOOOOOO  OOO     OOOO\n");
printf(" OOO     OOO  OOOOOOOOOOOOO           OO            OOOOOOOOOOOOO  OOO      OOO\n");
printf("OOOO     OOOO  OOOOOOOOOOOO           OO            OOOOOOOOOOOO  OOOO      OOOO\n");
printf("OOOO     OOOOO OOOOOOOOOOO            OOO            OOOOOOOOOO  OOOOO      OOOO\n");
printf(" OOO     OOOOOO OOOOOOOOO             OOO             OOOOOOOOO OOOOOO      OOOO\n");
printf(" OOO      OOOOOO OOOOOOO              OOO             OOOOOOOO OOOOOO       OOO\n");
printf(" OOOO     OOOOOOOOOOOOOO          OO  OOO  OO          OOOOOOOOOOOOO       OOOO\n");
printf("  OOO    O OOOOOOOOOOOOO           OO OOO OO           OOOOOOOOOOOOO O     OOOO\n");
printf("  OOOO    O OOOOOOOOOOOO            OOOOOOO           OOOOOOOOOOOOO O     OOOO\n");
printf("   OOOO    OOOOOOOOOOOOOO      OOOOOOOOOOOOOOOOO      OOOOOOOOOOOOOO      OOOO\n");
printf("   OOOO     OOOOOOOOOOOOOO          OOOOOOO          OOOOOOOOOOOOOO      OOOO\n");
printf("    OOOO     OOOOOOOOOOOOO         OO OOOOO         OOOOOOOOOOOOOO      OOOO\n");
printf("      OOOOO     OOOOOOOOOOOOO         OOO         OOOOOOOOOOOOO      OOOOO\n");
printf("        OOOO      OOOOOOOOOOOOO       OOO       OOOOOOOOOOOO        OOOO\n");
printf("         OOOOO       OOOOOOOOOOOO     OOO     OOOOOOOOOOOO        OOOOO\n");
printf("           OOOOO         OOOOOOOOOOO  OOO  OOOOOOOOOOO          OOOOO\n");
printf("             OOOOOO          OOOOOOOOOOOOOOOOOOOOO           OOOOOO\n");
printf("               OOOOOOO                 OO                 OOOOOOO\n");
printf("                  OOOOOOOOO                           OOOOOOOO\n");
printf("                     OOOOOOOOOOO                OOOOOOOOOOO\n");
printf("                          OOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
printf("                                OOOOOOOOOOOOOOOO\n");

    gotoligcol(22,115);
    printf(" C A R T E  J E D I :");

    gotoligcol(24,98);
    printf(" A L L E Z  A U  S P A T I O P O R T  3, S I  V O U S");

    gotoligcol(26,91);
    printf(" P A S S E Z  P A R  L A  C A S E  D E P A R T  R E C E V E Z  2 0 0 ");


    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }

    if(Tabjoueur[tour].position > 18)
    {
        Tabjoueur[tour].argent = Tabjoueur[tour].argent + 200;
    }
    Tabjoueur[tour].position = 18;

}
