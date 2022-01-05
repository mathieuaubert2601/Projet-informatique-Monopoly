#include "header.h"

///Carte chance 1
void f1(joueur_t* joueur)
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
    joueur->argent-=100;

    if (joueur->argent<0)
    {
        joueur->argent=0;
    }

}

///Carte chance 2

void f2(joueur_t* joueur)
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

    gotoligcol(26,105);
    printf(" P A Y E R  2 0 0   C R E D I T  P O U R  Q U ' I L  V O U S  L A I S S E");


    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }

    joueur->argent-=200;
    if (joueur->argent<0)
    {
        joueur->argent=0;
    }
}

///Carte chance 3
void f3(joueur_t* joueur)
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


    joueur->argent=joueur->argent-50;
    if (joueur->argent<0)
    {
        joueur->argent=0;
    }

}

///Carte chance 4
void f4(joueur_t* joueur)
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

    if(joueur->position > 24)
    {
        joueur->argent = joueur->argent + 200;
    }
    joueur->position= 24;

}

///Carte Chance 5
void f5(joueur_t* joueur)
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

    gotoligcol(26,110);
    printf(" D I R E C T I O N  Y A V I N  4");

    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }

    if(joueur->position > 22)
    {
        joueur->argent = joueur->argent + 200;
    }
    joueur->position= 22;
}

///Carte chance 6
void f6(joueur_t* joueur)
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

    gotoligcol(26,105);
    printf(" A L L E Z  S U R  D A G O B A");


    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }


    if(joueur->position > 1)
    {
        joueur->argent = joueur->argent + 200;
    }
    joueur->position= 1;

}

///Carte chance 7

void f7(joueur_t* joueur)
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

    gotoligcol(24,80);
    printf(" V O U S  E T E S  A R R E T E S  P A R  L' E M P I R E,  V O U S  S O U D O Y E Z");

    gotoligcol(26,100);
    printf(" L E  G A R D E  P O U R  V O U S  E C H A P P E Z,  P A Y E Z  5 0 0");


    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,0);

    joueur->argent=joueur->argent-500;
    if (joueur->argent<0)
    {
        joueur->argent=0;
    }


}

///Carte chance 8
void f8(joueur_t* joueur)
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
    printf(" P R I M E  P O U R  L A  D E T R U C T I O N  D E  L' E T O I L E  D E  L A  M O R T");

    gotoligcol(26,105);
    printf(" R E C E V E Z  4 0 0");



    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }


    joueur->argent=joueur->argent+400;
}

///Carte chance 9

void f9(joueur_t* joueur)
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

    joueur->argent=joueur->argent-100;
    if (joueur->argent<0)
    {
        joueur->argent=0;
    }

}

///Carte chance 10
void f10(joueur_t* joueur)
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


    if(joueur->position > 8)
    {
        joueur->argent = joueur->argent + 200;
    }
    joueur->position= 8;

}

///Carte chance 11
void f11(joueur_t* joueur)
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


    joueur->argent=joueur->argent+200;
}

///Carte chance 12
void f12(joueur_t* joueur)
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
    printf(" L' A L L I A N C E  R E B E L L E  V O U S  R E M E R C I E  P O U R  V O S  B O N N E S  A C T I O N S,");

    gotoligcol(26,115);
    printf(" R E C E V E Z  50");

    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,0);


    joueur->argent=joueur->argent+50;

}

///Carte chance 13
void f13(joueur_t* joueur)
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

    if(joueur->position >= 1 || joueur->position <= 7)
    {
        joueur->position = 4;
    }
    if(joueur->position > 7 || joueur->position <= 13)
    {
        joueur->position = 10;
    }
    if(joueur->position > 13 || joueur->position <= 22)
    {
        joueur->position = 18;
    }
    if(joueur->position > 22 || joueur->position <= 27 || joueur->position == 0)
    {
        if(joueur->position == 0)
        {
            joueur->argent = joueur->argent + 200;
        }
        joueur->position = 25;
    }

}

///Carte chance 14
void f14(joueur_t* joueur)
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
    printf(" L E I A  V O U S  E N V O I E  E N  M I S S I O N,");

    gotoligcol(26,100);
    printf(" R E N D E Z  V O U S  S U R  C O R U S A N T");

    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,0);

    joueur->position=27;

}

///Carte chance 15
void f15(joueur_t* joueur)
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
    printf(" R E C U L E Z  D E  T R O I S  C A S E S");



    gotoligcol(26,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }

    joueur->position = joueur->position - 3 ;
    if(joueur->position == 0)
    {
        joueur->argent = joueur->argent + 200;
    }
}

void f16(joueur_t* joueur)
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
    printf(" A L L E Z  A U  S P A T I O P O R T  3,");

    gotoligcol(26,95);
    printf(" S I  V O U S  P A S S E Z  P A R  L A  C A S E  D E P A R T  R E C E V E Z  2 0 0 ");


    gotoligcol(28,90);
    Color(10,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }

    if(joueur->position > 18)
    {
        joueur->argent = joueur->argent + 200;
    }
    joueur->position = 18;

}





