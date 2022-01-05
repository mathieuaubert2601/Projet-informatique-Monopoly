#include "header.h"


/// Carte sith 1
void Fsith1(joueur_t* joueur)
{
    printf("                              ,ooo888888888888888oooo,\n");
    printf("                            o8888YYYYYY77iiiiooo8888888o\n");
    Sleep(30);
    printf("                           8888YYYY77iiYY8888888888888888\n");
    printf("                         [88YYY77iiY88888888888888888888]\n");
    Sleep(30);
    printf("         S I T H  1      88YY7iYY888888888888888888888888\n");
    printf("                        [88YYi 88888888888888888888888888]\n");
    Sleep(30);
    printf("                        i88Yo8888888888888888888888888888i\n");
    printf("                        i]        ^^^88888888^^^     o  [i\n");
    Sleep(30);
    printf("                       oi8  i           o8o          i  8io\n");
    printf("                      ,77788o ^^  ,oooo8888888ooo,   ^ o88777,\n");
    Sleep(30);
    printf("                      7777788888888888888888888888888888877777\n");
    printf("                       77777888888888888888888888888888877777\n");
    Sleep(30);
    printf("                        77777788888888^7777777^8888888777777\n");
    printf("         ,oooo888 ooo   88888778888^7777ooooo7777^8887788888        ,o88^^^^888oo    \n");
    Sleep(30);
    printf("        o8888777788[];78 88888888888888888888888888888888888887 7;8^ 888888888oo^88   \n");
    printf("      o888888iii788 ]; o 78888887788788888^;;^888878877888887 o7;[]88888888888888o    \n");
    Sleep(30);
    printf("     88888877 ii78[]8;7o 7888878^ ^8788^;;;;;;^878^ ^878877 o7;8 ]878888888888888    \n");
    printf("    [88888888887888 87;7oo 777888o8888^;ii;;ii;^888o87777 oo7;7[]8778888888888888   \n");
    Sleep(30);
    printf("    88888888888888[]87;777oooooooooooooo888888oooooooooooo77;78]88877i78888888888  \n");
    printf("   o88888888888888 877;7877788777iiiiiii;;;;;iiiiiiiii77877i;78] 88877i;788888888     \n");
    Sleep(30);
    printf("    88^;iiii^88888 o87;78888888888888888888888888888888888887;778] 88877ii;7788888     \n");
    printf("   ;;;iiiii7iiii^  87;;888888888888888888888888888888888888887;778] 888777ii;78888                                    C A R T E  S I T H :  \n");
    Sleep(30);
    printf("   ;iiiii7iiiii7iiii77;i88888888888888888888i7888888888888888877;77i 888877777ii78\n");
    Color(15,0);
    printf("   iiiiiiiiiii7iiii7iii;;;i7778888888888888ii7788888888888777i;;;;iiii 88888888888                       D E S E R T E U R ,  A L L E Z  E N  P R I S O N \n");
    Sleep(30);
    printf("     i;iiiiiiiiiiii7iiiiiiiiiiiiiiiiiiiiiiiiii8877iiiiiiiiiiiiiiiiiii877   88888      \n");
    printf("      ii;;iiiiiiiiiiiiii;;;ii^^^;;;ii77777788888888888887777iii;;  77777           78                 \n");
    Sleep(30);
    printf("     77iii;;iiiiiiiiii;;;ii;;;;;;;;;^^^^8888888888888888888777ii;;  ii7         ;i78\n");
    printf("        ^ii;8iiiiiiii ';;;;ii;;;;;;;;;;;;;;;;;;^^oo ooooo^^^88888888;;i7          7;788\n");
    Sleep(30);
    printf("      o ^;;^^88888^     'i;;;;;;;;;;;;;;;;;;;;;;;;;;;^^^88oo^^^^888ii7         7;i788\n");
    printf("    88ooooooooo         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 788oo^;;          7;i888\n");
    Sleep(30);
    printf("      887ii8788888      ;;;;;;;ii;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;^87           7;788\n");
    printf("      887i8788888^     ;;;;;;;ii;;;;;;;oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,,      ;;888\n");
    Sleep(30);
    printf("      87787888888     ;;;;;;;ii;;;;;;;888888oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,;i788\n");
    printf("     87i8788888^       ';;;ii;;;;;;;8888878777ii8ooo;;;;;;;;;;;;;;;;;;;;;;;;;;i788 7\n");
    Sleep(30);
    printf("    77i8788888           ioo;;;;;;oo^^ooooo ^7i88^ooooo;;;;;;;;;;;;;;;;;;;;i7888 78\n");
    printf("   7i87788888o         7;ii788887i7;7;788888ooooo7888888ooo;;;;;;;;;;;;;;oo ^^^ 78\n");
    Sleep(30);
    printf("   i; 7888888^      8888^o;ii778877;7;7888887;;7;7788878;878;;    ;;;;;;;i78888o ^\n");
    printf("  i8 788888       [88888^^ ooo ^^^^^;;77888^^^^;;7787^^^^ ^^;;;;  iiii;i78888888\n");
    Sleep(30);
    printf(" ^8 7888^        [87888 87 ^877i;i8ooooooo8778oooooo888877ii; iiiiiiii788888888\n");
    printf("  ^^^          [7i888 87;; ^8i;;i7888888888888888887888888   i7iiiiiii88888^^\n");
    Sleep(30);
    printf("               87;88 o87;;;;o 87i;;;78888788888888888888^^ o 8ii7iiiiii;;\n");
    printf("               87;i8 877;77888o ^877;;;i7888888888888^^ 7888 78iii7iii7iiii\n");
    Sleep(30);
    printf("               ^87; 877;778888887o 877;;88888888888^ 7ii7888 788oiiiiiiiii\n");
    printf("                 ^ 877;7 7888888887 877i;;8888887ii 87i78888 7888888888\n");
    Sleep(30);
    printf("                  [87;;7 78888888887 87i;;888887i  87ii78888 7888888888]");
    gotoligcol(26,95);
    Color(12,0);

    for (int i=0; i<75; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,00);
    for (int i=0; i<168; i++)
    {
        Sleep(20);
        printf(".");
    }

    joueur->position = 7;
}

///Carte sith 2

void Fsith2(joueur_t* joueur)
{
    printf("                              ,ooo888888888888888oooo,\n");
    printf("                            o8888YYYYYY77iiiiooo8888888o\n");
    Sleep(30);
    printf("                           8888YYYY77iiYY8888888888888888\n");
    printf("                         [88YYY77iiY88888888888888888888]\n");
    Sleep(30);
    printf("         S I T H    2    88YY7iYY888888888888888888888888\n");
    printf("                        [88YYi 88888888888888888888888888]\n");
    Sleep(30);
    printf("                        i88Yo8888888888888888888888888888i\n");
    printf("                        i]        ^^^88888888^^^     o  [i\n");
    Sleep(30);
    printf("                       oi8  i           o8o          i  8io\n");
    printf("                      ,77788o ^^  ,oooo8888888ooo,   ^ o88777,\n");
    Sleep(30);
    printf("                      7777788888888888888888888888888888877777\n");
    printf("                       77777888888888888888888888888888877777\n");
    Sleep(30);
    printf("                        77777788888888^7777777^8888888777777\n");
    printf("         ,oooo888 ooo   88888778888^7777ooooo7777^8887788888        ,o88^^^^888oo    \n");
    Sleep(30);
    printf("        o8888777788[];78 88888888888888888888888888888888888887 7;8^ 888888888oo^88   \n");
    printf("      o888888iii788 ]; o 78888887788788888^;;^888878877888887 o7;[]88888888888888o    \n");
    Sleep(30);
    printf("     88888877 ii78[]8;7o 7888878^ ^8788^;;;;;;^878^ ^878877 o7;8 ]878888888888888    \n");
    printf("    [88888888887888 87;7oo 777888o8888^;ii;;ii;^888o87777 oo7;7[]8778888888888888   \n");
    Sleep(30);
    printf("    88888888888888[]87;777oooooooooooooo888888oooooooooooo77;78]88877i78888888888  \n");
    printf("   o88888888888888 877;7877788777iiiiiii;;;;;iiiiiiiii77877i;78] 88877i;788888888     \n");
    Sleep(30);
    printf("    88^;iiii^88888 o87;78888888888888888888888888888888888887;778] 88877ii;7788888     \n");
    printf("   ;;;iiiii7iiii^  87;;888888888888888888888888888888888888887;778] 888777ii;78888                                         C A R T E  S I T H :  \n");
    Sleep(30);
    printf("   ;iiiii7iiiii7iiii77;i88888888888888888888i7888888888888888877;77i 888877777ii78 \n");
    Color(15,0);
    printf("   iiiiiiiiiii7iiii7iii;;;i7778888888888888ii7788888888888777i;;;;iiii 88888888888                             V O U S  D E N O N C E Z  D E S  R E B E L S\n");
    Sleep(30);
    printf("     i;iiiiiiiiiiii7iiiiiiiiiiiiiiiiiiiiiiiiii8877iiiiiiiiiiiiiiiiiii877   88888      \n");
    printf("      ii;;iiiiiiiiiiiiii;;;ii^^^;;;ii77777788888888888887777iii;;  77777           78                                   R E C E V E Z  1 0 0 0\n");
    Sleep(30);
    printf("     77iii;;iiiiiiiiii;;;ii;;;;;;;;;^^^^8888888888888888888777ii;;  ii7         ;i78\n");
    printf("        ^ii;8iiiiiiii ';;;;ii;;;;;;;;;;;;;;;;;;^^oo ooooo^^^88888888;;i7          7;788\n");
    Sleep(30);
    printf("      o ^;;^^88888^     'i;;;;;;;;;;;;;;;;;;;;;;;;;;;^^^88oo^^^^888ii7         7;i788\n");
    printf("    88ooooooooo         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 788oo^;;          7;i888\n");
    Sleep(30);
    printf("      887ii8788888      ;;;;;;;ii;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;^87           7;788\n");
    printf("      887i8788888^     ;;;;;;;ii;;;;;;;oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,,      ;;888\n");
    Sleep(30);
    printf("      87787888888     ;;;;;;;ii;;;;;;;888888oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,;i788\n");
    printf("     87i8788888^       ';;;ii;;;;;;;8888878777ii8ooo;;;;;;;;;;;;;;;;;;;;;;;;;;i788 7\n");
    Sleep(30);
    printf("    77i8788888           ioo;;;;;;oo^^ooooo ^7i88^ooooo;;;;;;;;;;;;;;;;;;;;i7888 78\n");
    printf("   7i87788888o         7;ii788887i7;7;788888ooooo7888888ooo;;;;;;;;;;;;;;oo ^^^ 78\n");
    Sleep(30);
    printf("   i; 7888888^      8888^o;ii778877;7;7888887;;7;7788878;878;;    ;;;;;;;i78888o ^\n");
    printf("  i8 788888       [88888^^ ooo ^^^^^;;77888^^^^;;7787^^^^ ^^;;;;  iiii;i78888888\n");
    Sleep(30);
    printf(" ^8 7888^        [87888 87 ^877i;i8ooooooo8778oooooo888877ii; iiiiiiii788888888\n");
    printf("  ^^^          [7i888 87;; ^8i;;i7888888888888888887888888   i7iiiiiii88888^^\n");
    Sleep(30);
    printf("               87;88 o87;;;;o 87i;;;78888788888888888888^^ o 8ii7iiiiii;;\n");
    printf("               87;i8 877;77888o ^877;;;i7888888888888^^ 7888 78iii7iii7iiii\n");
    Sleep(30);
    printf("               ^87; 877;778888887o 877;;88888888888^ 7ii7888 788oiiiiiiiii\n");
    printf("                 ^ 877;7 7888888887 877i;;8888887ii 87i78888 7888888888\n");
    Sleep(30);
    printf("                  [87;;7 78888888887 87i;;888887i  87ii78888 7888888888]");
    gotoligcol(28,95);
    Color(12,0);
    for (int i=0; i<72; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,00);
    for (int i=0; i<168; i++)
    {
        Sleep(20);
        printf(".");
    }

    joueur->argent = joueur->argent + 1000;

}

///Carte sith 3
void Fsith3(joueur_t* joueur)
{
    printf("                              ,ooo888888888888888oooo,\n");
    printf("                            o8888YYYYYY77iiiiooo8888888o\n");
    Sleep(30);
    printf("                           8888YYYY77iiYY8888888888888888\n");
    printf("                         [88YYY77iiY88888888888888888888]\n");
    Sleep(30);
    printf("         S I T H    3    88YY7iYY888888888888888888888888\n");
    printf("                        [88YYi 88888888888888888888888888]\n");
    Sleep(30);
    printf("                        i88Yo8888888888888888888888888888i\n");
    printf("                        i]        ^^^88888888^^^     o  [i\n");
    Sleep(30);
    printf("                       oi8  i           o8o          i  8io\n");
    printf("                      ,77788o ^^  ,oooo8888888ooo,   ^ o88777,\n");
    Sleep(30);
    printf("                      7777788888888888888888888888888888877777\n");
    printf("                       77777888888888888888888888888888877777\n");
    Sleep(30);
    printf("                        77777788888888^7777777^8888888777777\n");
    printf("         ,oooo888 ooo   88888778888^7777ooooo7777^8887788888        ,o88^^^^888oo    \n");
    Sleep(30);
    printf("        o8888777788[];78 88888888888888888888888888888888888887 7;8^ 888888888oo^88   \n");
    printf("      o888888iii788 ]; o 78888887788788888^;;^888878877888887 o7;[]88888888888888o    \n");
    Sleep(30);
    printf("     88888877 ii78[]8;7o 7888878^ ^8788^;;;;;;^878^ ^878877 o7;8 ]878888888888888    \n");
    printf("    [88888888887888 87;7oo 777888o8888^;ii;;ii;^888o87777 oo7;7[]8778888888888888   \n");
    Sleep(30);
    printf("    88888888888888[]87;777oooooooooooooo888888oooooooooooo77;78]88877i78888888888  \n");
    printf("   o88888888888888 877;7877788777iiiiiii;;;;;iiiiiiiii77877i;78] 88877i;788888888     \n");
    Sleep(30);
    printf("    88^;iiii^88888 o87;78888888888888888888888888888888888887;778] 88877ii;7788888     \n");
    printf("   ;;;iiiii7iiii^  87;;888888888888888888888888888888888888887;778] 888777ii;78888                                     C A R T E  S I T H : \n");
    Sleep(30);
    printf("   ;iiiii7iiiii7iiii77;i88888888888888888888i7888888888888888877;77i 888877777ii78\n");
    Color(15,0);
    printf("   iiiiiiiiiii7iiii7iii;;;i7778888888888888ii7788888888888777i;;;;iiii 88888888888                I N F I L T R E Z  V O U S : P I O C H E Z  U N E  C A R T E  J E D I \n");
    Sleep(30);
    printf("     i;iiiiiiiiiiii7iiiiiiiiiiiiiiiiiiiiiiiiii8877iiiiiiiiiiiiiiiiiii877   88888      \n");
    printf("      ii;;iiiiiiiiiiiiii;;;ii^^^;;;ii77777788888888888887777iii;;  77777           78                   \n");
    Sleep(30);
    printf("     77iii;;iiiiiiiiii;;;ii;;;;;;;;;^^^^8888888888888888888777ii;;  ii7         ;i78\n");
    printf("        ^ii;8iiiiiiii ';;;;ii;;;;;;;;;;;;;;;;;;^^oo ooooo^^^88888888;;i7          7;788\n");
    Sleep(30);
    printf("      o ^;;^^88888^     'i;;;;;;;;;;;;;;;;;;;;;;;;;;;^^^88oo^^^^888ii7         7;i788\n");
    printf("    88ooooooooo         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 788oo^;;          7;i888\n");
    Sleep(30);
    printf("      887ii8788888      ;;;;;;;ii;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;^87           7;788\n");
    printf("      887i8788888^     ;;;;;;;ii;;;;;;;oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,,      ;;888\n");
    Sleep(30);
    printf("      87787888888     ;;;;;;;ii;;;;;;;888888oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,;i788\n");
    printf("     87i8788888^       ';;;ii;;;;;;;8888878777ii8ooo;;;;;;;;;;;;;;;;;;;;;;;;;;i788 7\n");
    Sleep(30);
    printf("    77i8788888           ioo;;;;;;oo^^ooooo ^7i88^ooooo;;;;;;;;;;;;;;;;;;;;i7888 78\n");
    printf("   7i87788888o         7;ii788887i7;7;788888ooooo7888888ooo;;;;;;;;;;;;;;oo ^^^ 78\n");
    Sleep(30);
    printf("   i; 7888888^      8888^o;ii778877;7;7888887;;7;7788878;878;;    ;;;;;;;i78888o ^\n");
    printf("  i8 788888       [88888^^ ooo ^^^^^;;77888^^^^;;7787^^^^ ^^;;;;  iiii;i78888888\n");
    Sleep(30);
    printf(" ^8 7888^        [87888 87 ^877i;i8ooooooo8778oooooo888877ii; iiiiiiii788888888\n");
    printf("  ^^^          [7i888 87;; ^8i;;i7888888888888888887888888   i7iiiiiii88888^^\n");
    Sleep(30);
    printf("               87;88 o87;;;;o 87i;;;78888788888888888888^^ o 8ii7iiiiii;;\n");
    printf("               87;i8 877;77888o ^877;;;i7888888888888^^ 7888 78iii7iii7iiii\n");
    Sleep(30);
    printf("               ^87; 877;778888887o 877;;88888888888^ 7ii7888 788oiiiiiiiii\n");
    printf("                 ^ 877;7 7888888887 877i;;8888887ii 87i78888 7888888888\n");
    Sleep(30);
    printf("                  [87;;7 78888888887 87i;;888887i  87ii78888 7888888888]");
    gotoligcol(28,95);
    Color(12,0);
    for (int i=0; i<72; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,00);
    for (int i=0; i<168; i++)
    {
        Sleep(20);
        printf(".");
    }

//cartejedi(joueur_t joueur, /*structure d'une propriété*/);


}

///Carte sith 4

void Fsith4(joueur_t* joueur)
{
    printf("                              ,ooo888888888888888oooo,\n");
    printf("                            o8888YYYYYY77iiiiooo8888888o\n");
    Sleep(30);
    printf("                           8888YYYY77iiYY8888888888888888\n");
    printf("                         [88YYY77iiY88888888888888888888]\n");
    Sleep(30);
    printf("         S I T H   4     88YY7iYY888888888888888888888888\n");
    printf("                        [88YYi 88888888888888888888888888]\n");
    Sleep(30);
    printf("                        i88Yo8888888888888888888888888888i\n");
    printf("                        i]        ^^^88888888^^^     o  [i\n");
    Sleep(30);
    printf("                       oi8  i           o8o          i  8io\n");
    printf("                      ,77788o ^^  ,oooo8888888ooo,   ^ o88777,\n");
    Sleep(30);
    printf("                      7777788888888888888888888888888888877777\n");
    printf("                       77777888888888888888888888888888877777\n");
    Sleep(30);
    printf("                        77777788888888^7777777^8888888777777\n");
    printf("         ,oooo888 ooo   88888778888^7777ooooo7777^8887788888        ,o88^^^^888oo    \n");
    Sleep(30);
    printf("        o8888777788[];78 88888888888888888888888888888888888887 7;8^ 888888888oo^88   \n");
    printf("      o888888iii788 ]; o 78888887788788888^;;^888878877888887 o7;[]88888888888888o    \n");
    Sleep(30);
    printf("     88888877 ii78[]8;7o 7888878^ ^8788^;;;;;;^878^ ^878877 o7;8 ]878888888888888    \n");
    printf("    [88888888887888 87;7oo 777888o8888^;ii;;ii;^888o87777 oo7;7[]8778888888888888   \n");
    Sleep(30);
    printf("    88888888888888[]87;777oooooooooooooo888888oooooooooooo77;78]88877i78888888888  \n");
    printf("   o88888888888888 877;7877788777iiiiiii;;;;;iiiiiiiii77877i;78] 88877i;788888888     \n");
    Sleep(30);
    printf("    88^;iiii^88888 o87;78888888888888888888888888888888888887;778] 88877ii;7788888     \n");
    printf("   ;;;iiiii7iiii^  87;;888888888888888888888888888888888888887;778] 888777ii;78888                                  C A R T E  S I T H : \n");
    Sleep(30);
    printf("   ;iiiii7iiiii7iiii77;i88888888888888888888i7888888888888888877;77i 888877777ii78\n");
    Color(15,0);
    printf("   iiiiiiiiiii7iiii7iii;;;i7778888888888888ii7788888888888777i;;;;iiii 88888888888                   R E T O U R N E Z  S U R  L A  C A S E  D E P A R T \n");
    Sleep(30);
    printf("     i;iiiiiiiiiiii7iiiiiiiiiiiiiiiiiiiiiiiiii8877iiiiiiiiiiiiiiiiiii877   88888      \n");
    printf("      ii;;iiiiiiiiiiiiii;;;ii^^^;;;ii77777788888888888887777iii;;  77777           78\n");
    Sleep(30);
    printf("     77iii;;iiiiiiiiii;;;ii;;;;;;;;;^^^^8888888888888888888777ii;;  ii7         ;i78\n");
    printf("        ^ii;8iiiiiiii ';;;;ii;;;;;;;;;;;;;;;;;;^^oo ooooo^^^88888888;;i7          7;788\n");
    Sleep(30);
    printf("      o ^;;^^88888^     'i;;;;;;;;;;;;;;;;;;;;;;;;;;;^^^88oo^^^^888ii7         7;i788\n");
    printf("    88ooooooooo         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 788oo^;;          7;i888\n");
    Sleep(30);
    printf("      887ii8788888      ;;;;;;;ii;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;^87           7;788\n");
    printf("      887i8788888^     ;;;;;;;ii;;;;;;;oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,,      ;;888\n");
    Sleep(30);
    printf("      87787888888     ;;;;;;;ii;;;;;;;888888oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,;i788\n");
    printf("     87i8788888^       ';;;ii;;;;;;;8888878777ii8ooo;;;;;;;;;;;;;;;;;;;;;;;;;;i788 7\n");
    Sleep(30);
    printf("    77i8788888           ioo;;;;;;oo^^ooooo ^7i88^ooooo;;;;;;;;;;;;;;;;;;;;i7888 78\n");
    printf("   7i87788888o         7;ii788887i7;7;788888ooooo7888888ooo;;;;;;;;;;;;;;oo ^^^ 78\n");
    Sleep(30);
    printf("   i; 7888888^      8888^o;ii778877;7;7888887;;7;7788878;878;;    ;;;;;;;i78888o ^\n");
    printf("  i8 788888       [88888^^ ooo ^^^^^;;77888^^^^;;7787^^^^ ^^;;;;  iiii;i78888888\n");
    Sleep(30);
    printf(" ^8 7888^        [87888 87 ^877i;i8ooooooo8778oooooo888877ii; iiiiiiii788888888\n");
    printf("  ^^^          [7i888 87;; ^8i;;i7888888888888888887888888   i7iiiiiii88888^^\n");
    Sleep(30);
    printf("               87;88 o87;;;;o 87i;;;78888788888888888888^^ o 8ii7iiiiii;;\n");
    printf("               87;i8 877;77888o ^877;;;i7888888888888^^ 7888 78iii7iii7iiii\n");
    Sleep(30);
    printf("               ^87; 877;778888887o 877;;88888888888^ 7ii7888 788oiiiiiiiii\n");
    printf("                 ^ 877;7 7888888887 877i;;8888887ii 87i78888 7888888888\n");
    Sleep(30);
    printf("                  [87;;7 78888888887 87i;;888887i  87ii78888 7888888888]");
    gotoligcol(26,95);
    Color(12,0);
    for (int i=0; i<72; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,00);
    for (int i=0; i<168; i++)
    {
        Sleep(20);
        printf(".");
    }

    joueur->position = 0;
    joueur->argent = joueur->argent + 200;

}

///Carte Sith 5
void Fsith5(joueur_t* joueur)
{
    printf("                              ,ooo888888888888888oooo,\n");
    printf("                            o8888YYYYYY77iiiiooo8888888o\n");
    Sleep(30);
    printf("                           8888YYYY77iiYY8888888888888888\n");
    printf("                         [88YYY77iiY88888888888888888888]\n");
    Sleep(30);
    printf("         S I T H    5    88YY7iYY888888888888888888888888\n");
    printf("                        [88YYi 88888888888888888888888888]\n");
    Sleep(30);
    printf("                        i88Yo8888888888888888888888888888i\n");
    printf("                        i]        ^^^88888888^^^     o  [i\n");
    Sleep(30);
    printf("                       oi8  i           o8o          i  8io\n");
    printf("                      ,77788o ^^  ,oooo8888888ooo,   ^ o88777,\n");
    Sleep(30);
    printf("                      7777788888888888888888888888888888877777\n");
    printf("                       77777888888888888888888888888888877777\n");
    Sleep(30);
    printf("                        77777788888888^7777777^8888888777777\n");
    printf("         ,oooo888 ooo   88888778888^7777ooooo7777^8887788888        ,o88^^^^888oo    \n");
    Sleep(30);
    printf("        o8888777788[];78 88888888888888888888888888888888888887 7;8^ 888888888oo^88   \n");
    printf("      o888888iii788 ]; o 78888887788788888^;;^888878877888887 o7;[]88888888888888o    \n");
    Sleep(30);
    printf("     88888877 ii78[]8;7o 7888878^ ^8788^;;;;;;^878^ ^878877 o7;8 ]878888888888888    \n");
    printf("    [88888888887888 87;7oo 777888o8888^;ii;;ii;^888o87777 oo7;7[]8778888888888888   \n");
    Sleep(30);
    printf("    88888888888888[]87;777oooooooooooooo888888oooooooooooo77;78]88877i78888888888  \n");
    printf("   o88888888888888 877;7877788777iiiiiii;;;;;iiiiiiiii77877i;78] 88877i;788888888     \n");
    Sleep(30);
    printf("    88^;iiii^88888 o87;78888888888888888888888888888888888887;778] 88877ii;7788888     \n");
    printf("   ;;;iiiii7iiii^  87;;888888888888888888888888888888888888887;778] 888777ii;78888                        C A R T E  S I T H : \n");
    Sleep(30);
    printf("   ;iiiii7iiiii7iiii77;i88888888888888888888i7888888888888888877;77i 888877777ii78\n");
    Color(15,0);
    printf("   iiiiiiiiiii7iiii7iii;;;i7778888888888888ii7788888888888777i;;;;iiii 88888888888                  I M P O T S : P A Y E Z  4 0 0 \n");
    Sleep(30);
    printf("     i;iiiiiiiiiiii7iiiiiiiiiiiiiiiiiiiiiiiiii8877iiiiiiiiiiiiiiiiiii877   88888      \n");
    printf("      ii;;iiiiiiiiiiiiii;;;ii^^^;;;ii77777788888888888887777iii;;  77777           78\n");
    Sleep(30);
    printf("     77iii;;iiiiiiiiii;;;ii;;;;;;;;;^^^^8888888888888888888777ii;;  ii7         ;i78\n");
    printf("        ^ii;8iiiiiiii ';;;;ii;;;;;;;;;;;;;;;;;;^^oo ooooo^^^88888888;;i7          7;788\n");
    Sleep(30);
    printf("      o ^;;^^88888^     'i;;;;;;;;;;;;;;;;;;;;;;;;;;;^^^88oo^^^^888ii7         7;i788\n");
    printf("    88ooooooooo         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 788oo^;;          7;i888\n");
    Sleep(30);
    printf("      887ii8788888      ;;;;;;;ii;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;^87           7;788\n");
    printf("      887i8788888^     ;;;;;;;ii;;;;;;;oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,,      ;;888\n");
    Sleep(30);
    printf("      87787888888     ;;;;;;;ii;;;;;;;888888oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,;i788\n");
    printf("     87i8788888^       ';;;ii;;;;;;;8888878777ii8ooo;;;;;;;;;;;;;;;;;;;;;;;;;;i788 7\n");
    Sleep(30);
    printf("    77i8788888           ioo;;;;;;oo^^ooooo ^7i88^ooooo;;;;;;;;;;;;;;;;;;;;i7888 78\n");
    printf("   7i87788888o         7;ii788887i7;7;788888ooooo7888888ooo;;;;;;;;;;;;;;oo ^^^ 78\n");
    Sleep(30);
    printf("   i; 7888888^      8888^o;ii778877;7;7888887;;7;7788878;878;;    ;;;;;;;i78888o ^\n");
    printf("  i8 788888       [88888^^ ooo ^^^^^;;77888^^^^;;7787^^^^ ^^;;;;  iiii;i78888888\n");
    Sleep(30);
    printf(" ^8 7888^        [87888 87 ^877i;i8ooooooo8778oooooo888877ii; iiiiiiii788888888\n");
    printf("  ^^^          [7i888 87;; ^8i;;i7888888888888888887888888   i7iiiiiii88888^^\n");
    Sleep(30);
    printf("               87;88 o87;;;;o 87i;;;78888788888888888888^^ o 8ii7iiiiii;;\n");
    printf("               87;i8 877;77888o ^877;;;i7888888888888^^ 7888 78iii7iii7iiii\n");
    Sleep(30);
    printf("               ^87; 877;778888887o 877;;88888888888^ 7ii7888 788oiiiiiiiii\n");
    printf("                 ^ 877;7 7888888887 877i;;8888887ii 87i78888 7888888888\n");
    Sleep(30);
    printf("                  [87;;7 78888888887 87i;;888887i  87ii78888 7888888888]");
    gotoligcol(26,95);
    Color(12,0);
    for (int i=0; i<72; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,00);
    for (int i=0; i<150; i++)
    {
        Sleep(20);
        printf(".");
    }

    joueur->argent= joueur->argent-400;
    if (joueur->argent<0)
    {
        joueur->argent=0;
    }


}

///Carte Sith 6
void Fsith6(joueur_t* joueur)
{
    printf("                              ,ooo888888888888888oooo,\n");
    printf("                            o8888YYYYYY77iiiiooo8888888o\n");
    Sleep(30);
    printf("                           8888YYYY77iiYY8888888888888888\n");
    printf("                         [88YYY77iiY88888888888888888888]\n");
    Sleep(30);
    printf("         S I T H     6   88YY7iYY888888888888888888888888\n");
    printf("                        [88YYi 88888888888888888888888888]\n");
    Sleep(30);
    printf("                        i88Yo8888888888888888888888888888i\n");
    printf("                        i]        ^^^88888888^^^     o  [i\n");
    Sleep(30);
    printf("                       oi8  i           o8o          i  8io\n");
    printf("                      ,77788o ^^  ,oooo8888888ooo,   ^ o88777,\n");
    Sleep(30);
    printf("                      7777788888888888888888888888888888877777\n");
    printf("                       77777888888888888888888888888888877777\n");
    Sleep(30);
    printf("                        77777788888888^7777777^8888888777777\n");
    printf("         ,oooo888 ooo   88888778888^7777ooooo7777^8887788888        ,o88^^^^888oo    \n");
    Sleep(30);
    printf("        o8888777788[];78 88888888888888888888888888888888888887 7;8^ 888888888oo^88   \n");
    printf("      o888888iii788 ]; o 78888887788788888^;;^888878877888887 o7;[]88888888888888o    \n");
    Sleep(30);
    printf("     88888877 ii78[]8;7o 7888878^ ^8788^;;;;;;^878^ ^878877 o7;8 ]878888888888888    \n");
    printf("    [88888888887888 87;7oo 777888o8888^;ii;;ii;^888o87777 oo7;7[]8778888888888888   \n");
    Sleep(30);
    printf("    88888888888888[]87;777oooooooooooooo888888oooooooooooo77;78]88877i78888888888  \n");
    printf("   o88888888888888 877;7877788777iiiiiii;;;;;iiiiiiiii77877i;78] 88877i;788888888     \n");
    Sleep(30);
    printf("    88^;iiii^88888 o87;78888888888888888888888888888888888887;778] 88877ii;7788888     \n");
    printf("   ;;;iiiii7iiii^  87;;888888888888888888888888888888888888887;778] 888777ii;78888                            C A R T E  S I T H :  \n");
    Sleep(30);
    printf("   ;iiiii7iiiii7iiii77;i88888888888888888888i7888888888888888877;77i 888877777ii78\n");
    Color(15,0);
    printf("   iiiiiiiiiii7iiii7iii;;;i7778888888888888ii7788888888888777i;;;;iiii 88888888888             V O U S  A V E Z  L E S  F A V E U R S  D E  V A D O R   \n");
    Sleep(30);
    printf("     i;iiiiiiiiiiii7iiiiiiiiiiiiiiiiiiiiiiiiii8877iiiiiiiiiiiiiiiiiii877   88888      \n");
    printf("      ii;;iiiiiiiiiiiiii;;;ii^^^;;;ii77777788888888888887777iii;;  77777           78                        R E C E V E Z  2 0 0 \n");
    Sleep(30);
    printf("     77iii;;iiiiiiiiii;;;ii;;;;;;;;;^^^^8888888888888888888777ii;;  ii7         ;i78\n");
    printf("        ^ii;8iiiiiiii ';;;;ii;;;;;;;;;;;;;;;;;;^^oo ooooo^^^88888888;;i7          7;788\n");
    Sleep(30);
    printf("      o ^;;^^88888^     'i;;;;;;;;;;;;;;;;;;;;;;;;;;;^^^88oo^^^^888ii7         7;i788\n");
    printf("    88ooooooooo         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 788oo^;;          7;i888\n");
    Sleep(30);
    printf("      887ii8788888      ;;;;;;;ii;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;^87           7;788\n");
    printf("      887i8788888^     ;;;;;;;ii;;;;;;;oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,,      ;;888\n");
    Sleep(30);
    printf("      87787888888     ;;;;;;;ii;;;;;;;888888oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,;i788\n");
    printf("     87i8788888^       ';;;ii;;;;;;;8888878777ii8ooo;;;;;;;;;;;;;;;;;;;;;;;;;;i788 7\n");
    Sleep(30);
    printf("    77i8788888           ioo;;;;;;oo^^ooooo ^7i88^ooooo;;;;;;;;;;;;;;;;;;;;i7888 78\n");
    printf("   7i87788888o         7;ii788887i7;7;788888ooooo7888888ooo;;;;;;;;;;;;;;oo ^^^ 78\n");
    Sleep(30);
    printf("   i; 7888888^      8888^o;ii778877;7;7888887;;7;7788878;878;;    ;;;;;;;i78888o ^\n");
    printf("  i8 788888       [88888^^ ooo ^^^^^;;77888^^^^;;7787^^^^ ^^;;;;  iiii;i78888888\n");
    Sleep(30);
    printf(" ^8 7888^        [87888 87 ^877i;i8ooooooo8778oooooo888877ii; iiiiiiii788888888\n");
    printf("  ^^^          [7i888 87;; ^8i;;i7888888888888888887888888   i7iiiiiii88888^^\n");
    Sleep(30);
    printf("               87;88 o87;;;;o 87i;;;78888788888888888888^^ o 8ii7iiiiii;;\n");
    printf("               87;i8 877;77888o ^877;;;i7888888888888^^ 7888 78iii7iii7iiii\n");
    Sleep(30);
    printf("               ^87; 877;778888887o 877;;88888888888^ 7ii7888 788oiiiiiiiii\n");
    printf("                 ^ 877;7 7888888887 877i;;8888887ii 87i78888 7888888888\n");
    Sleep(30);
    printf("                  [87;;7 78888888887 87i;;888887i  87ii78888 7888888888]");
    gotoligcol(28,95);
    Color(12,0);
    for (int i=0; i<72; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,00);
    for (int i=0; i<168; i++)
    {
        Sleep(20);
        printf(".");
    }

    joueur->argent= joueur->argent+200;



}
///Carte Sith 7
void Fsith7(joueur_t* joueur)
{
    printf("                              ,ooo888888888888888oooo,\n");
    printf("                            o8888YYYYYY77iiiiooo8888888o\n");
    Sleep(30);
    printf("                           8888YYYY77iiYY8888888888888888\n");
    printf("                         [88YYY77iiY88888888888888888888]\n");
    Sleep(30);
    printf("         S I T H    7    88YY7iYY888888888888888888888888\n");
    printf("                        [88YYi 88888888888888888888888888]\n");
    Sleep(30);
    printf("                        i88Yo8888888888888888888888888888i\n");
    printf("                        i]        ^^^88888888^^^     o  [i\n");
    Sleep(30);
    printf("                       oi8  i           o8o          i  8io\n");
    printf("                      ,77788o ^^  ,oooo8888888ooo,   ^ o88777,\n");
    Sleep(30);
    printf("                      7777788888888888888888888888888888877777\n");
    printf("                       77777888888888888888888888888888877777\n");
    Sleep(30);
    printf("                        77777788888888^7777777^8888888777777\n");
    printf("         ,oooo888 ooo   88888778888^7777ooooo7777^8887788888        ,o88^^^^888oo    \n");
    Sleep(30);
    printf("        o8888777788[];78 88888888888888888888888888888888888887 7;8^ 888888888oo^88   \n");
    printf("      o888888iii788 ]; o 78888887788788888^;;^888878877888887 o7;[]88888888888888o    \n");
    Sleep(30);
    printf("     88888877 ii78[]8;7o 7888878^ ^8788^;;;;;;^878^ ^878877 o7;8 ]878888888888888    \n");
    printf("    [88888888887888 87;7oo 777888o8888^;ii;;ii;^888o87777 oo7;7[]8778888888888888   \n");
    Sleep(30);
    printf("    88888888888888[]87;777oooooooooooooo888888oooooooooooo77;78]88877i78888888888  \n");
    printf("   o88888888888888 877;7877788777iiiiiii;;;;;iiiiiiiii77877i;78] 88877i;788888888     \n");
    Sleep(30);
    printf("    88^;iiii^88888 o87;78888888888888888888888888888888888887;778] 88877ii;7788888     \n");
    printf("   ;;;iiiii7iiii^  87;;888888888888888888888888888888888888887;778] 888777ii;78888                           C A R T E  S I T H :\n");
    Sleep(30);
    printf("   ;iiiii7iiiii7iiii77;i88888888888888888888i7888888888888888877;77i 888877777ii78\n");
    Color(15,0);
    printf("   iiiiiiiiiii7iiii7iii;;;i7778888888888888ii7788888888888777i;;;;iiii 88888888888          V O U S  A V E Z  A F F R O N T E  L U K E  S K Y W A L K E R \n");
    Sleep(30);
    printf("     i;iiiiiiiiiiii7iiiiiiiiiiiiiiiiiiiiiiiiii8877iiiiiiiiiiiiiiiiiii877   88888      \n");
    printf("      ii;;iiiiiiiiiiiiii;;;ii^^^;;;ii77777788888888888887777iii;;  77777           78                  P A Y E Z  L E S  S O I N S  2 0 0\n");
    Sleep(30);
    printf("     77iii;;iiiiiiiiii;;;ii;;;;;;;;;^^^^8888888888888888888777ii;;  ii7         ;i78\n");
    printf("        ^ii;8iiiiiiii ';;;;ii;;;;;;;;;;;;;;;;;;^^oo ooooo^^^88888888;;i7          7;788\n");
    Sleep(30);
    printf("      o ^;;^^88888^     'i;;;;;;;;;;;;;;;;;;;;;;;;;;;^^^88oo^^^^888ii7         7;i788\n");
    printf("    88ooooooooo         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 788oo^;;          7;i888\n");
    Sleep(30);
    printf("      887ii8788888      ;;;;;;;ii;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;^87           7;788\n");
    printf("      887i8788888^     ;;;;;;;ii;;;;;;;oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,,      ;;888\n");
    Sleep(30);
    printf("      87787888888     ;;;;;;;ii;;;;;;;888888oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,;i788\n");
    printf("     87i8788888^       ';;;ii;;;;;;;8888878777ii8ooo;;;;;;;;;;;;;;;;;;;;;;;;;;i788 7\n");
    Sleep(30);
    printf("    77i8788888           ioo;;;;;;oo^^ooooo ^7i88^ooooo;;;;;;;;;;;;;;;;;;;;i7888 78\n");
    printf("   7i87788888o         7;ii788887i7;7;788888ooooo7888888ooo;;;;;;;;;;;;;;oo ^^^ 78\n");
    Sleep(30);
    printf("   i; 7888888^      8888^o;ii778877;7;7888887;;7;7788878;878;;    ;;;;;;;i78888o ^\n");
    printf("  i8 788888       [88888^^ ooo ^^^^^;;77888^^^^;;7787^^^^ ^^;;;;  iiii;i78888888\n");
    Sleep(30);
    printf(" ^8 7888^        [87888 87 ^877i;i8ooooooo8778oooooo888877ii; iiiiiiii788888888\n");
    printf("  ^^^          [7i888 87;; ^8i;;i7888888888888888887888888   i7iiiiiii88888^^\n");
    Sleep(30);
    printf("               87;88 o87;;;;o 87i;;;78888788888888888888^^ o 8ii7iiiiii;;\n");
    printf("               87;i8 877;77888o ^877;;;i7888888888888^^ 7888 78iii7iii7iiii\n");
    Sleep(30);
    printf("               ^87; 877;778888887o 877;;88888888888^ 7ii7888 788oiiiiiiiii\n");
    printf("                 ^ 877;7 7888888887 877i;;8888887ii 87i78888 7888888888\n");
    Sleep(30);
    printf("                  [87;;7 78888888887 87i;;888887i  87ii78888 7888888888]");
    gotoligcol(28,95);
    Color(12,0);
    for (int i=0; i<72; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,00);
    for (int i=0; i<168; i++)
    {
        Sleep(20);
        printf(".");
    }

    joueur->argent= joueur->argent-200;
    if (joueur->argent<0)
    {
        joueur->argent=0;
    }
}


///Carte Sith 8

void Fsith8(joueur_t* joueur)
{
    printf("                              ,ooo888888888888888oooo,\n");
    printf("                            o8888YYYYYY77iiiiooo8888888o\n");
    Sleep(30);
    printf("                           8888YYYY77iiYY8888888888888888\n");
    printf("                         [88YYY77iiY88888888888888888888]\n");
    Sleep(30);
    printf("         S I T H   8     88YY7iYY888888888888888888888888\n");
    printf("                        [88YYi 88888888888888888888888888]\n");
    Sleep(30);
    printf("                        i88Yo8888888888888888888888888888i\n");
    printf("                        i]        ^^^88888888^^^     o  [i\n");
    Sleep(30);
    printf("                       oi8  i           o8o          i  8io\n");
    printf("                      ,77788o ^^  ,oooo8888888ooo,   ^ o88777,\n");
    Sleep(30);
    printf("                      7777788888888888888888888888888888877777\n");
    printf("                       77777888888888888888888888888888877777\n");
    Sleep(30);
    printf("                        77777788888888^7777777^8888888777777\n");
    printf("         ,oooo888 ooo   88888778888^7777ooooo7777^8887788888        ,o88^^^^888oo    \n");
    Sleep(30);
    printf("        o8888777788[];78 88888888888888888888888888888888888887 7;8^ 888888888oo^88   \n");
    printf("      o888888iii788 ]; o 78888887788788888^;;^888878877888887 o7;[]88888888888888o    \n");
    Sleep(30);
    printf("     88888877 ii78[]8;7o 7888878^ ^8788^;;;;;;^878^ ^878877 o7;8 ]878888888888888    \n");
    printf("    [88888888887888 87;7oo 777888o8888^;ii;;ii;^888o87777 oo7;7[]8778888888888888   \n");
    Sleep(30);
    printf("    88888888888888[]87;777oooooooooooooo888888oooooooooooo77;78]88877i78888888888  \n");
    printf("   o88888888888888 877;7877788777iiiiiii;;;;;iiiiiiiii77877i;78] 88877i;788888888     \n");
    Sleep(30);
    printf("    88^;iiii^88888 o87;78888888888888888888888888888888888887;778] 88877ii;7788888     \n");
    printf("   ;;;iiiii7iiii^  87;;888888888888888888888888888888888888887;778] 888777ii;78888                        C A R T E  S I T H : \n");
    Sleep(30);
    printf("   ;iiiii7iiiii7iiii77;i88888888888888888888i7888888888888888877;77i 888877777ii78\n");
    Color(15,0);
    printf("   iiiiiiiiiii7iiii7iii;;;i7778888888888888ii7788888888888777i;;;;iiii 88888888888                B O B A  F E E T  V O U S  T R A Q U E,\n");
    Sleep(30);
    printf("     i;iiiiiiiiiiii7iiiiiiiiiiiiiiiiiiiiiiiiii8877iiiiiiiiiiiiiiiiiii877   88888      \n");
    printf("      ii;;iiiiiiiiiiiiii;;;ii^^^;;;ii77777788888888888887777iii;;  77777           78         R E F U G I E Z  V O U S  S U R  G E O N O S I S\n");
    Sleep(30);
    printf("     77iii;;iiiiiiiiii;;;ii;;;;;;;;;^^^^8888888888888888888777ii;;  ii7         ;i78\n");
    printf("        ^ii;8iiiiiiii ';;;;ii;;;;;;;;;;;;;;;;;;^^oo ooooo^^^88888888;;i7          7;788\n");
    Sleep(30);
    printf("      o ^;;^^88888^     'i;;;;;;;;;;;;;;;;;;;;;;;;;;;^^^88oo^^^^888ii7         7;i788\n");
    printf("    88ooooooooo         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 788oo^;;          7;i888\n");
    Sleep(30);
    printf("      887ii8788888      ;;;;;;;ii;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;^87           7;788\n");
    printf("      887i8788888^     ;;;;;;;ii;;;;;;;oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,,      ;;888\n");
    Sleep(30);
    printf("      87787888888     ;;;;;;;ii;;;;;;;888888oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,;i788\n");
    printf("     87i8788888^       ';;;ii;;;;;;;8888878777ii8ooo;;;;;;;;;;;;;;;;;;;;;;;;;;i788 7\n");
    Sleep(30);
    printf("    77i8788888           ioo;;;;;;oo^^ooooo ^7i88^ooooo;;;;;;;;;;;;;;;;;;;;i7888 78\n");
    printf("   7i87788888o         7;ii788887i7;7;788888ooooo7888888ooo;;;;;;;;;;;;;;oo ^^^ 78\n");
    Sleep(30);
    printf("   i; 7888888^      8888^o;ii778877;7;7888887;;7;7788878;878;;    ;;;;;;;i78888o ^\n");
    printf("  i8 788888       [88888^^ ooo ^^^^^;;77888^^^^;;7787^^^^ ^^;;;;  iiii;i78888888\n");
    Sleep(30);
    printf(" ^8 7888^        [87888 87 ^877i;i8ooooooo8778oooooo888877ii; iiiiiiii788888888\n");
    printf("  ^^^          [7i888 87;; ^8i;;i7888888888888888887888888   i7iiiiiii88888^^\n");
    Sleep(30);
    printf("               87;88 o87;;;;o 87i;;;78888788888888888888^^ o 8ii7iiiiii;;\n");
    printf("               87;i8 877;77888o ^877;;;i7888888888888^^ 7888 78iii7iii7iiii\n");
    Sleep(30);
    printf("               ^87; 877;778888887o 877;;88888888888^ 7ii7888 788oiiiiiiiii\n");
    printf("                 ^ 877;7 7888888887 877i;;8888887ii 87i78888 7888888888\n");
    Sleep(30);
    printf("                  [87;;7 78888888887 87i;;888887i  87ii78888 7888888888]");
    gotoligcol(28,95);
    Color(12,0);
    for (int i=0; i<72; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,00);
    for (int i=0; i<168; i++)
    {
        Sleep(20);
        printf(".");
    }

    if(joueur->position > 17)
    {
        joueur->argent = joueur->argent + 200;
    }

    joueur->position = 17;//position carte geonosis

}

///Carte Sith 9
void Fsith9(joueur_t* joueur)
{
    printf("                              ,ooo888888888888888oooo,\n");
    printf("                            o8888YYYYYY77iiiiooo8888888o\n");
    Sleep(30);
    printf("                           8888YYYY77iiYY8888888888888888\n");
    printf("                         [88YYY77iiY88888888888888888888]\n");
    Sleep(30);
    printf("         S I T H   9     88YY7iYY888888888888888888888888\n");
    printf("                        [88YYi 88888888888888888888888888]\n");
    Sleep(30);
    printf("                        i88Yo8888888888888888888888888888i\n");
    printf("                        i]        ^^^88888888^^^     o  [i\n");
    Sleep(30);
    printf("                       oi8  i           o8o          i  8io\n");
    printf("                      ,77788o ^^  ,oooo8888888ooo,   ^ o88777,\n");
    Sleep(30);
    printf("                      7777788888888888888888888888888888877777\n");
    printf("                       77777888888888888888888888888888877777\n");
    Sleep(30);
    printf("                        77777788888888^7777777^8888888777777\n");
    printf("         ,oooo888 ooo   88888778888^7777ooooo7777^8887788888        ,o88^^^^888oo    \n");
    Sleep(30);
    printf("        o8888777788[];78 88888888888888888888888888888888888887 7;8^ 888888888oo^88   \n");
    printf("      o888888iii788 ]; o 78888887788788888^;;^888878877888887 o7;[]88888888888888o    \n");
    Sleep(30);
    printf("     88888877 ii78[]8;7o 7888878^ ^8788^;;;;;;^878^ ^878877 o7;8 ]878888888888888    \n");
    printf("    [88888888887888 87;7oo 777888o8888^;ii;;ii;^888o87777 oo7;7[]8778888888888888   \n");
    Sleep(30);
    printf("    88888888888888[]87;777oooooooooooooo888888oooooooooooo77;78]88877i78888888888  \n");
    printf("   o88888888888888 877;7877788777iiiiiii;;;;;iiiiiiiii77877i;78] 88877i;788888888     \n");
    Sleep(30);
    printf("    88^;iiii^88888 o87;78888888888888888888888888888888888887;778] 88877ii;7788888     \n");
    printf("   ;;;iiiii7iiii^  87;;888888888888888888888888888888888888887;778] 888777ii;78888                             C A R T E  S I T H :  \n");
    Sleep(30);
    printf("   ;iiiii7iiiii7iiii77;i88888888888888888888i7888888888888888877;77i 888877777ii78\n");
    Color(15,0);
    printf("   iiiiiiiiiii7iiii7iii;;;i7778888888888888ii7788888888888777i;;;;iiii 88888888888           O B I  W A N  A  L E  H I G H - G R O U N D,  V O U S  T O M B E Z \n");
    Sleep(30);
    printf("     i;iiiiiiiiiiii7iiiiiiiiiiiiiiiiiiiiiiiiii8877iiiiiiiiiiiiiiiiiii877   88888      \n");
    printf("      ii;;iiiiiiiiiiiiii;;;ii^^^;;;ii77777788888888888887777iii;;  77777           78             D A N S  L A L A V E,  A L L E R  S U R  K A M I N O\n");
    Sleep(30);
    printf("     77iii;;iiiiiiiiii;;;ii;;;;;;;;;^^^^8888888888888888888777ii;;  ii7         ;i78\n");
    printf("        ^ii;8iiiiiiii ';;;;ii;;;;;;;;;;;;;;;;;;^^oo ooooo^^^88888888;;i7          7;788\n");
    Sleep(30);
    printf("      o ^;;^^88888^     'i;;;;;;;;;;;;;;;;;;;;;;;;;;;^^^88oo^^^^888ii7         7;i788\n");
    printf("    88ooooooooo         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 788oo^;;          7;i888\n");
    Sleep(30);
    printf("      887ii8788888      ;;;;;;;ii;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;^87           7;788\n");
    printf("      887i8788888^     ;;;;;;;ii;;;;;;;oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,,      ;;888\n");
    Sleep(30);
    printf("      87787888888     ;;;;;;;ii;;;;;;;888888oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,;i788\n");
    printf("     87i8788888^       ';;;ii;;;;;;;8888878777ii8ooo;;;;;;;;;;;;;;;;;;;;;;;;;;i788 7\n");
    Sleep(30);
    printf("    77i8788888           ioo;;;;;;oo^^ooooo ^7i88^ooooo;;;;;;;;;;;;;;;;;;;;i7888 78\n");
    printf("   7i87788888o         7;ii788887i7;7;788888ooooo7888888ooo;;;;;;;;;;;;;;oo ^^^ 78\n");
    Sleep(30);
    printf("   i; 7888888^      8888^o;ii778877;7;7888887;;7;7788878;878;;    ;;;;;;;i78888o ^\n");
    printf("  i8 788888       [88888^^ ooo ^^^^^;;77888^^^^;;7787^^^^ ^^;;;;  iiii;i78888888\n");
    Sleep(30);
    printf(" ^8 7888^        [87888 87 ^877i;i8ooooooo8778oooooo888877ii; iiiiiiii788888888\n");
    printf("  ^^^          [7i888 87;; ^8i;;i7888888888888888887888888   i7iiiiiii88888^^\n");
    Sleep(30);
    printf("               87;88 o87;;;;o 87i;;;78888788888888888888^^ o 8ii7iiiiii;;\n");
    printf("               87;i8 877;77888o ^877;;;i7888888888888^^ 7888 78iii7iii7iiii\n");
    Sleep(30);
    printf("               ^87; 877;778888887o 877;;88888888888^ 7ii7888 788oiiiiiiiii\n");
    printf("                 ^ 877;7 7888888887 877i;;8888887ii 87i78888 7888888888\n");
    Sleep(30);
    printf("                  [87;;7 78888888887 87i;;888887i  87ii78888 7888888888]");
    gotoligcol(28,95);
    Color(12,0);
    for (int i=0; i<72; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,00);
    for (int i=0; i<168; i++)
    {
        Sleep(20);
        printf(".");
    }

    if(joueur->position > 15)
    {
        joueur->argent = joueur->argent + 200;
    }

    joueur->position= 15;



}

///Carte Sith 10

void Fsith10(joueur_t* joueur)
{
    printf("                              ,ooo888888888888888oooo,\n");
    printf("                            o8888YYYYYY77iiiiooo8888888o\n");
    Sleep(30);
    printf("                           8888YYYY77iiYY8888888888888888\n");
    printf("                         [88YYY77iiY88888888888888888888]\n");
    Sleep(30);
    printf("         S I T H  10     88YY7iYY888888888888888888888888\n");
    printf("                        [88YYi 88888888888888888888888888]\n");
    Sleep(30);
    printf("                        i88Yo8888888888888888888888888888i\n");
    printf("                        i]        ^^^88888888^^^     o  [i\n");
    Sleep(30);
    printf("                       oi8  i           o8o          i  8io\n");
    printf("                      ,77788o ^^  ,oooo8888888ooo,   ^ o88777,\n");
    Sleep(30);
    printf("                      7777788888888888888888888888888888877777\n");
    printf("                       77777888888888888888888888888888877777\n");
    Sleep(30);
    printf("                        77777788888888^7777777^8888888777777\n");
    printf("         ,oooo888 ooo   88888778888^7777ooooo7777^8887788888        ,o88^^^^888oo    \n");
    Sleep(30);
    printf("        o8888777788[];78 88888888888888888888888888888888888887 7;8^ 888888888oo^88   \n");
    printf("      o888888iii788 ]; o 78888887788788888^;;^888878877888887 o7;[]88888888888888o    \n");
    Sleep(30);
    printf("     88888877 ii78[]8;7o 7888878^ ^8788^;;;;;;^878^ ^878877 o7;8 ]878888888888888    \n");
    printf("    [88888888887888 87;7oo 777888o8888^;ii;;ii;^888o87777 oo7;7[]8778888888888888   \n");
    Sleep(30);
    printf("    88888888888888[]87;777oooooooooooooo888888oooooooooooo77;78]88877i78888888888  \n");
    printf("   o88888888888888 877;7877788777iiiiiii;;;;;iiiiiiiii77877i;78] 88877i;788888888     \n");
    Sleep(30);
    printf("    88^;iiii^88888 o87;78888888888888888888888888888888888887;778] 88877ii;7788888     \n");
    printf("   ;;;iiiii7iiii^  87;;888888888888888888888888888888888888887;778] 888777ii;78888                                     C A R T E  S I T H : \n");
    Sleep(30);
    printf("   ;iiiii7iiiii7iiii77;i88888888888888888888i7888888888888888877;77i 888877777ii78\n");
    Color(15,0);
    printf("   iiiiiiiiiii7iiii7iii;;;i7778888888888888ii7788888888888777i;;;;iiii 88888888888                        V O U S  R E C E V E Z  V O T R E  S A L A I R E  \n");
    Sleep(30);
    printf("     i;iiiiiiiiiiii7iiiiiiiiiiiiiiiiiiiiiiiiii8877iiiiiiiiiiiiiiiiiii877   88888      \n");
    printf("      ii;;iiiiiiiiiiiiii;;;ii^^^;;;ii77777788888888888887777iii;;  77777           78                D E  S O L D A T  D E  L'E M P I R E,  R E C E V E Z  200 \n");
    Sleep(30);
    printf("     77iii;;iiiiiiiiii;;;ii;;;;;;;;;^^^^8888888888888888888777ii;;  ii7         ;i78\n");
    printf("        ^ii;8iiiiiiii ';;;;ii;;;;;;;;;;;;;;;;;;^^oo ooooo^^^88888888;;i7          7;788\n");
    Sleep(30);
    printf("      o ^;;^^88888^     'i;;;;;;;;;;;;;;;;;;;;;;;;;;;^^^88oo^^^^888ii7         7;i788\n");
    printf("    88ooooooooo         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 788oo^;;          7;i888\n");
    Sleep(30);
    printf("      887ii8788888      ;;;;;;;ii;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;^87           7;788\n");
    printf("      887i8788888^     ;;;;;;;ii;;;;;;;oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,,      ;;888\n");
    Sleep(30);
    printf("      87787888888     ;;;;;;;ii;;;;;;;888888oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,;i788\n");
    printf("     87i8788888^       ';;;ii;;;;;;;8888878777ii8ooo;;;;;;;;;;;;;;;;;;;;;;;;;;i788 7\n");
    Sleep(30);
    printf("    77i8788888           ioo;;;;;;oo^^ooooo ^7i88^ooooo;;;;;;;;;;;;;;;;;;;;i7888 78\n");
    printf("   7i87788888o         7;ii788887i7;7;788888ooooo7888888ooo;;;;;;;;;;;;;;oo ^^^ 78\n");
    Sleep(30);
    printf("   i; 7888888^      8888^o;ii778877;7;7888887;;7;7788878;878;;    ;;;;;;;i78888o ^\n");
    printf("  i8 788888       [88888^^ ooo ^^^^^;;77888^^^^;;7787^^^^ ^^;;;;  iiii;i78888888\n");
    Sleep(30);
    printf(" ^8 7888^        [87888 87 ^877i;i8ooooooo8778oooooo888877ii; iiiiiiii788888888\n");
    printf("  ^^^          [7i888 87;; ^8i;;i7888888888888888887888888   i7iiiiiii88888^^\n");
    Sleep(30);
    printf("               87;88 o87;;;;o 87i;;;78888788888888888888^^ o 8ii7iiiiii;;\n");
    printf("               87;i8 877;77888o ^877;;;i7888888888888^^ 7888 78iii7iii7iiii\n");
    Sleep(30);
    printf("               ^87; 877;778888887o 877;;88888888888^ 7ii7888 788oiiiiiiiii\n");
    printf("                 ^ 877;7 7888888887 877i;;8888887ii 87i78888 7888888888\n");
    Sleep(30);
    printf("                  [87;;7 78888888887 87i;;888887i  87ii78888 7888888888]");
    gotoligcol(28,95);
    Color(12,0);
    for (int i=0; i<70; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,00);
    for (int i=0; i<168; i++)
    {
        Sleep(20);
        printf(".");
    }

    joueur->argent= joueur->argent+200;

}

///Carte Sith 11

void Fsith11(joueur_t* joueur)
{
    printf("                              ,ooo888888888888888oooo,\n");
    printf("                            o8888YYYYYY77iiiiooo8888888o\n");
    Sleep(30);
    printf("                           8888YYYY77iiYY8888888888888888\n");
    printf("                         [88YYY77iiY88888888888888888888]\n");
    Sleep(30);
    printf("         S I T H   11    88YY7iYY888888888888888888888888\n");
    printf("                        [88YYi 88888888888888888888888888]\n");
    Sleep(30);
    printf("                        i88Yo8888888888888888888888888888i\n");
    printf("                        i]        ^^^88888888^^^     o  [i\n");
    Sleep(30);
    printf("                       oi8  i           o8o          i  8io\n");
    printf("                      ,77788o ^^  ,oooo8888888ooo,   ^ o88777,\n");
    Sleep(30);
    printf("                      7777788888888888888888888888888888877777\n");
    printf("                       77777888888888888888888888888888877777\n");
    Sleep(30);
    printf("                        77777788888888^7777777^8888888777777\n");
    printf("         ,oooo888 ooo   88888778888^7777ooooo7777^8887788888        ,o88^^^^888oo    \n");
    Sleep(30);
    printf("        o8888777788[];78 88888888888888888888888888888888888887 7;8^ 888888888oo^88   \n");
    printf("      o888888iii788 ]; o 78888887788788888^;;^888878877888887 o7;[]88888888888888o    \n");
    Sleep(30);
    printf("     88888877 ii78[]8;7o 7888878^ ^8788^;;;;;;^878^ ^878877 o7;8 ]878888888888888    \n");
    printf("    [88888888887888 87;7oo 777888o8888^;ii;;ii;^888o87777 oo7;7[]8778888888888888   \n");
    Sleep(30);
    printf("    88888888888888[]87;777oooooooooooooo888888oooooooooooo77;78]88877i78888888888  \n");
    printf("   o88888888888888 877;7877788777iiiiiii;;;;;iiiiiiiii77877i;78] 88877i;788888888     \n");
    Sleep(30);
    printf("    88^;iiii^88888 o87;78888888888888888888888888888888888887;778] 88877ii;7788888     \n");
    printf("   ;;;iiiii7iiii^  87;;888888888888888888888888888888888888887;778] 888777ii;78888                                       C A R T E  S I T H :\n");
    Sleep(30);
    printf("   ;iiiii7iiiii7iiii77;i88888888888888888888i7888888888888888877;77i 888877777ii78\n");
    Color(15,0);
    printf("   iiiiiiiiiii7iiii7iii;;;i7778888888888888ii7788888888888777i;;;;iiii 88888888888                  F I N A N C E M E N T  P O U R  L A  C O N S T R U C T I O N  D E \n");
    Sleep(30);
    printf("     i;iiiiiiiiiiii7iiiiiiiiiiiiiiiiiiiiiiiiii8877iiiiiiiiiiiiiiiiiii877   88888      \n");
    printf("      ii;;iiiiiiiiiiiiii;;;ii^^^;;;ii77777788888888888887777iii;;  77777           78                       L' E T O I L E  D E  L A  M O R T : P A Y E Z  200\n");
    Sleep(30);
    printf("     77iii;;iiiiiiiiii;;;ii;;;;;;;;;^^^^8888888888888888888777ii;;  ii7         ;i78\n");
    printf("        ^ii;8iiiiiiii ';;;;ii;;;;;;;;;;;;;;;;;;^^oo ooooo^^^88888888;;i7          7;788\n");
    Sleep(30);
    printf("      o ^;;^^88888^     'i;;;;;;;;;;;;;;;;;;;;;;;;;;;^^^88oo^^^^888ii7         7;i788\n");
    printf("    88ooooooooo         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 788oo^;;          7;i888\n");
    Sleep(30);
    printf("      887ii8788888      ;;;;;;;ii;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;^87           7;788\n");
    printf("      887i8788888^     ;;;;;;;ii;;;;;;;oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,,      ;;888\n");
    Sleep(30);
    printf("      87787888888     ;;;;;;;ii;;;;;;;888888oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,;i788\n");
    printf("     87i8788888^       ';;;ii;;;;;;;8888878777ii8ooo;;;;;;;;;;;;;;;;;;;;;;;;;;i788 7\n");
    Sleep(30);
    printf("    77i8788888           ioo;;;;;;oo^^ooooo ^7i88^ooooo;;;;;;;;;;;;;;;;;;;;i7888 78\n");
    printf("   7i87788888o         7;ii788887i7;7;788888ooooo7888888ooo;;;;;;;;;;;;;;oo ^^^ 78\n");
    Sleep(30);
    printf("   i; 7888888^      8888^o;ii778877;7;7888887;;7;7788878;878;;    ;;;;;;;i78888o ^\n");
    printf("  i8 788888       [88888^^ ooo ^^^^^;;77888^^^^;;7787^^^^ ^^;;;;  iiii;i78888888\n");
    Sleep(30);
    printf(" ^8 7888^        [87888 87 ^877i;i8ooooooo8778oooooo888877ii; iiiiiiii788888888\n");
    printf("  ^^^          [7i888 87;; ^8i;;i7888888888888888887888888   i7iiiiiii88888^^\n");
    Sleep(30);
    printf("               87;88 o87;;;;o 87i;;;78888788888888888888^^ o 8ii7iiiiii;;\n");
    printf("               87;i8 877;77888o ^877;;;i7888888888888^^ 7888 78iii7iii7iiii\n");
    Sleep(30);
    printf("               ^87; 877;778888887o 877;;88888888888^ 7ii7888 788oiiiiiiiii\n");
    printf("                 ^ 877;7 7888888887 877i;;8888887ii 87i78888 7888888888\n");
    Sleep(30);
    printf("                  [87;;7 78888888887 87i;;888887i  87ii78888 7888888888]");
    gotoligcol(28,95);
    Color(12,0);
    for (int i=0; i<72; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,00);
    for (int i=0; i<168; i++)
    {
        Sleep(20);
        printf(".");
    }

    joueur->argent=joueur->argent-200;
    if (joueur->argent<0)
    {
        joueur->argent=0;
    }

}

///Carte Sith 12

void Fsith12(joueur_t* joueur)
{
    printf("                              ,ooo888888888888888oooo,\n");
    printf("                            o8888YYYYYY77iiiiooo8888888o\n");
    Sleep(30);
    printf("                           8888YYYY77iiYY8888888888888888\n");
    printf("                         [88YYY77iiY88888888888888888888]\n");
    Sleep(30);
    printf("         S I T H  12     88YY7iYY888888888888888888888888\n");
    printf("                        [88YYi 88888888888888888888888888]\n");
    Sleep(30);
    printf("                        i88Yo8888888888888888888888888888i\n");
    printf("                        i]        ^^^88888888^^^     o  [i\n");
    Sleep(30);
    printf("                       oi8  i           o8o          i  8io\n");
    printf("                      ,77788o ^^  ,oooo8888888ooo,   ^ o88777,\n");
    Sleep(30);
    printf("                      7777788888888888888888888888888888877777\n");
    printf("                       77777888888888888888888888888888877777\n");
    Sleep(30);
    printf("                        77777788888888^7777777^8888888777777\n");
    printf("         ,oooo888 ooo   88888778888^7777ooooo7777^8887788888        ,o88^^^^888oo    \n");
    Sleep(30);
    printf("        o8888777788[];78 88888888888888888888888888888888888887 7;8^ 888888888oo^88   \n");
    printf("      o888888iii788 ]; o 78888887788788888^;;^888878877888887 o7;[]88888888888888o    \n");
    Sleep(30);
    printf("     88888877 ii78[]8;7o 7888878^ ^8788^;;;;;;^878^ ^878877 o7;8 ]878888888888888    \n");
    printf("    [88888888887888 87;7oo 777888o8888^;ii;;ii;^888o87777 oo7;7[]8778888888888888   \n");
    Sleep(30);
    printf("    88888888888888[]87;777oooooooooooooo888888oooooooooooo77;78]88877i78888888888  \n");
    printf("   o88888888888888 877;7877788777iiiiiii;;;;;iiiiiiiii77877i;78] 88877i;788888888     \n");
    Sleep(30);
    printf("    88^;iiii^88888 o87;78888888888888888888888888888888888887;778] 88877ii;7788888     \n");
    printf("   ;;;iiiii7iiii^  87;;888888888888888888888888888888888888887;778] 888777ii;78888                                  C A R T E  S I T H :\n");
    Sleep(30);
    printf("   ;iiiii7iiiii7iiii77;i88888888888888888888i7888888888888888877;77i 888877777ii78\n");
    Color(15,0);
    printf("   iiiiiiiiiii7iiii7iii;;;i7778888888888888ii7788888888888777i;;;;iiii 88888888888                        P A Y E Z  L E  M E D I C O D R O I D E : 200  \n");
    Sleep(30);
    printf("     i;iiiiiiiiiiii7iiiiiiiiiiiiiiiiiiiiiiiiii8877iiiiiiiiiiiiiiiiiii877   88888      \n");
    printf("      ii;;iiiiiiiiiiiiii;;;ii^^^;;;ii77777788888888888887777iii;;  77777           78\n");
    Sleep(30);
    printf("     77iii;;iiiiiiiiii;;;ii;;;;;;;;;^^^^8888888888888888888777ii;;  ii7         ;i78\n");
    printf("        ^ii;8iiiiiiii ';;;;ii;;;;;;;;;;;;;;;;;;^^oo ooooo^^^88888888;;i7          7;788\n");
    Sleep(30);
    printf("      o ^;;^^88888^     'i;;;;;;;;;;;;;;;;;;;;;;;;;;;^^^88oo^^^^888ii7         7;i788\n");
    printf("    88ooooooooo         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 788oo^;;          7;i888\n");
    Sleep(30);
    printf("      887ii8788888      ;;;;;;;ii;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;^87           7;788\n");
    printf("      887i8788888^     ;;;;;;;ii;;;;;;;oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,,      ;;888\n");
    Sleep(30);
    printf("      87787888888     ;;;;;;;ii;;;;;;;888888oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,;i788\n");
    printf("     87i8788888^       ';;;ii;;;;;;;8888878777ii8ooo;;;;;;;;;;;;;;;;;;;;;;;;;;i788 7\n");
    Sleep(30);
    printf("    77i8788888           ioo;;;;;;oo^^ooooo ^7i88^ooooo;;;;;;;;;;;;;;;;;;;;i7888 78\n");
    printf("   7i87788888o         7;ii788887i7;7;788888ooooo7888888ooo;;;;;;;;;;;;;;oo ^^^ 78\n");
    Sleep(30);
    printf("   i; 7888888^      8888^o;ii778877;7;7888887;;7;7788878;878;;    ;;;;;;;i78888o ^\n");
    printf("  i8 788888       [88888^^ ooo ^^^^^;;77888^^^^;;7787^^^^ ^^;;;;  iiii;i78888888\n");
    Sleep(30);
    printf(" ^8 7888^        [87888 87 ^877i;i8ooooooo8778oooooo888877ii; iiiiiiii788888888\n");
    printf("  ^^^          [7i888 87;; ^8i;;i7888888888888888887888888   i7iiiiiii88888^^\n");
    Sleep(30);
    printf("               87;88 o87;;;;o 87i;;;78888788888888888888^^ o 8ii7iiiiii;;\n");
    printf("               87;i8 877;77888o ^877;;;i7888888888888^^ 7888 78iii7iii7iiii\n");
    Sleep(30);
    printf("               ^87; 877;778888887o 877;;88888888888^ 7ii7888 788oiiiiiiiii\n");
    printf("                 ^ 877;7 7888888887 877i;;8888887ii 87i78888 7888888888\n");
    Sleep(30);
    printf("                  [87;;7 78888888887 87i;;888887i  87ii78888 7888888888]");
    gotoligcol(25,95);
    Color(12,0);
    for (int i=0; i<72; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,00);
    for (int i=0; i<168; i++)
    {
        Sleep(20);
        printf(".");
    }


    joueur->argent=joueur->argent-200;
    if (joueur->argent<0)
    {
        joueur->argent=0;
    }


}


///Carte Sith 13


void Fsith13(joueur_t* joueur)
{
    printf("                              ,ooo888888888888888oooo,\n");
    printf("                            o8888YYYYYY77iiiiooo8888888o\n");
    Sleep(30);
    printf("                           8888YYYY77iiYY8888888888888888\n");
    printf("                         [88YYY77iiY88888888888888888888]\n");
    Sleep(30);
    printf("         S I T H 13      88YY7iYY888888888888888888888888\n");
    printf("                        [88YYi 88888888888888888888888888]\n");
    Sleep(30);
    printf("                        i88Yo8888888888888888888888888888i\n");
    printf("                        i]        ^^^88888888^^^     o  [i\n");
    Sleep(30);
    printf("                       oi8  i           o8o          i  8io\n");
    printf("                      ,77788o ^^  ,oooo8888888ooo,   ^ o88777,\n");
    Sleep(30);
    printf("                      7777788888888888888888888888888888877777\n");
    printf("                       77777888888888888888888888888888877777\n");
    Sleep(30);
    printf("                        77777788888888^7777777^8888888777777\n");
    printf("         ,oooo888 ooo   88888778888^7777ooooo7777^8887788888        ,o88^^^^888oo    \n");
    Sleep(30);
    printf("        o8888777788[];78 88888888888888888888888888888888888887 7;8^ 888888888oo^88   \n");
    printf("      o888888iii788 ]; o 78888887788788888^;;^888878877888887 o7;[]88888888888888o    \n");
    Sleep(30);
    printf("     88888877 ii78[]8;7o 7888878^ ^8788^;;;;;;^878^ ^878877 o7;8 ]878888888888888    \n");
    printf("    [88888888887888 87;7oo 777888o8888^;ii;;ii;^888o87777 oo7;7[]8778888888888888   \n");
    Sleep(30);
    printf("    88888888888888[]87;777oooooooooooooo888888oooooooooooo77;78]88877i78888888888  \n");
    printf("   o88888888888888 877;7877788777iiiiiii;;;;;iiiiiiiii77877i;78] 88877i;788888888     \n");
    Sleep(30);
    printf("    88^;iiii^88888 o87;78888888888888888888888888888888888887;778] 88877ii;7788888     \n");
    printf("   ;;;iiiii7iiii^  87;;888888888888888888888888888888888888887;778] 888777ii;78888                                 C A R T E  S I T H : \n");
    Sleep(30);
    printf("   ;iiiii7iiiii7iiii77;i88888888888888888888i7888888888888888877;77i 888877777ii78\n");
    Color(15,0);
    printf("   iiiiiiiiiii7iiii7iii;;;i7778888888888888ii7788888888888777i;;;;iiii 88888888888                     V O U S  G A G N E Z  U N  C O N C O U R S  D E \n");
    Sleep(30);
    printf("     i;iiiiiiiiiiii7iiiiiiiiiiiiiiiiiiiiiiiiii8877iiiiiiiiiiiiiiiiiii877   88888      \n");
    printf("      ii;;iiiiiiiiiiiiii;;;ii^^^;;;ii77777788888888888887777iii;;  77777           78         F I D E L I T E  A V E C  L' E M P I R E :  R E C E V E Z  2 0 0\n");
    Sleep(30);
    printf("     77iii;;iiiiiiiiii;;;ii;;;;;;;;;^^^^8888888888888888888777ii;;  ii7         ;i78\n");
    printf("        ^ii;8iiiiiiii ';;;;ii;;;;;;;;;;;;;;;;;;^^oo ooooo^^^88888888;;i7          7;788\n");
    Sleep(30);
    printf("      o ^;;^^88888^     'i;;;;;;;;;;;;;;;;;;;;;;;;;;;^^^88oo^^^^888ii7         7;i788\n");
    printf("    88ooooooooo         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 788oo^;;          7;i888\n");
    Sleep(30);
    printf("      887ii8788888      ;;;;;;;ii;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;^87           7;788\n");
    printf("      887i8788888^     ;;;;;;;ii;;;;;;;oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,,      ;;888\n");
    Sleep(30);
    printf("      87787888888     ;;;;;;;ii;;;;;;;888888oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,;i788\n");
    printf("     87i8788888^       ';;;ii;;;;;;;8888878777ii8ooo;;;;;;;;;;;;;;;;;;;;;;;;;;i788 7\n");
    Sleep(30);
    printf("    77i8788888           ioo;;;;;;oo^^ooooo ^7i88^ooooo;;;;;;;;;;;;;;;;;;;;i7888 78\n");
    printf("   7i87788888o         7;ii788887i7;7;788888ooooo7888888ooo;;;;;;;;;;;;;;oo ^^^ 78\n");
    Sleep(30);
    printf("   i; 7888888^      8888^o;ii778877;7;7888887;;7;7788878;878;;    ;;;;;;;i78888o ^\n");
    printf("  i8 788888       [88888^^ ooo ^^^^^;;77888^^^^;;7787^^^^ ^^;;;;  iiii;i78888888\n");
    Sleep(30);
    printf(" ^8 7888^        [87888 87 ^877i;i8ooooooo8778oooooo888877ii; iiiiiiii788888888\n");
    printf("  ^^^          [7i888 87;; ^8i;;i7888888888888888887888888   i7iiiiiii88888^^\n");
    Sleep(30);
    printf("               87;88 o87;;;;o 87i;;;78888788888888888888^^ o 8ii7iiiiii;;\n");
    printf("               87;i8 877;77888o ^877;;;i7888888888888^^ 7888 78iii7iii7iiii\n");
    Sleep(30);
    printf("               ^87; 877;778888887o 877;;88888888888^ 7ii7888 788oiiiiiiiii\n");
    printf("                 ^ 877;7 7888888887 877i;;8888887ii 87i78888 7888888888\n");
    Sleep(30);
    printf("                  [87;;7 78888888887 87i;;888887i  87ii78888 7888888888]");
    gotoligcol(28,95);
    Color(12,0);
    for (int i=0; i<72; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,00);
    for (int i=0; i<168; i++)
    {
        Sleep(20);
        printf(".");
    }

    joueur->argent= joueur->argent+200;

}



///Carte Sith 14
void Fsith14(joueur_t* joueur)
{
    printf("                              ,ooo888888888888888oooo,\n");
    printf("                            o8888YYYYYY77iiiiooo8888888o\n");
    Sleep(30);
    printf("                           8888YYYY77iiYY8888888888888888\n");
    printf("                         [88YYY77iiY88888888888888888888]\n");
    Sleep(30);
    printf("         S I T H   14    88YY7iYY888888888888888888888888\n");
    printf("                        [88YYi 88888888888888888888888888]\n");
    Sleep(30);
    printf("                        i88Yo8888888888888888888888888888i\n");
    printf("                        i]        ^^^88888888^^^     o  [i\n");
    Sleep(30);
    printf("                       oi8  i           o8o          i  8io\n");
    printf("                      ,77788o ^^  ,oooo8888888ooo,   ^ o88777,\n");
    Sleep(30);
    printf("                      7777788888888888888888888888888888877777\n");
    printf("                       77777888888888888888888888888888877777\n");
    Sleep(30);
    printf("                        77777788888888^7777777^8888888777777\n");
    printf("         ,oooo888 ooo   88888778888^7777ooooo7777^8887788888        ,o88^^^^888oo    \n");
    Sleep(30);
    printf("        o8888777788[];78 88888888888888888888888888888888888887 7;8^ 888888888oo^88   \n");
    printf("      o888888iii788 ]; o 78888887788788888^;;^888878877888887 o7;[]88888888888888o    \n");
    Sleep(30);
    printf("     88888877 ii78[]8;7o 7888878^ ^8788^;;;;;;^878^ ^878877 o7;8 ]878888888888888    \n");
    printf("    [88888888887888 87;7oo 777888o8888^;ii;;ii;^888o87777 oo7;7[]8778888888888888   \n");
    Sleep(30);
    printf("    88888888888888[]87;777oooooooooooooo888888oooooooooooo77;78]88877i78888888888  \n");
    printf("   o88888888888888 877;7877788777iiiiiii;;;;;iiiiiiiii77877i;78] 88877i;788888888     \n");
    Sleep(30);
    printf("    88^;iiii^88888 o87;78888888888888888888888888888888888887;778] 88877ii;7788888     \n");
    printf("   ;;;iiiii7iiii^  87;;888888888888888888888888888888888888887;778] 888777ii;78888                       C A R T E  S I T H : \n");
    Sleep(30);
    printf("   ;iiiii7iiiii7iiii77;i88888888888888888888i7888888888888888877;77i 888877777ii78\n");
    Color(15,0);
    printf("   iiiiiiiiiii7iiii7iii;;;i7778888888888888ii7788888888888777i;;;;iiii 88888888888         L I B E R E  D E  P R I S O N,  C E T T E  C A R T E\n");
    Sleep(30);
    printf("     i;iiiiiiiiiiii7iiiiiiiiiiiiiiiiiiiiiiiiii8877iiiiiiiiiiiiiiiiiii877   88888      \n");
    printf("      ii;;iiiiiiiiiiiiii;;;ii^^^;;;ii77777788888888888887777iii;;  77777           78               P E U T  V O U S  E T R E  U T I LE.\n");
    Sleep(30);
    printf("     77iii;;iiiiiiiiii;;;ii;;;;;;;;;^^^^8888888888888888888777ii;;  ii7         ;i78\n");
    printf("        ^ii;8iiiiiiii ';;;;ii;;;;;;;;;;;;;;;;;;^^oo ooooo^^^88888888;;i7          7;788\n");
    Sleep(30);
    printf("      o ^;;^^88888^     'i;;;;;;;;;;;;;;;;;;;;;;;;;;;^^^88oo^^^^888ii7         7;i788\n");
    printf("    88ooooooooo         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 788oo^;;          7;i888\n");
    Sleep(30);
    printf("      887ii8788888      ;;;;;;;ii;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;^87           7;788\n");
    printf("      887i8788888^     ;;;;;;;ii;;;;;;;oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,,      ;;888\n");
    Sleep(30);
    printf("      87787888888     ;;;;;;;ii;;;;;;;888888oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,;i788\n");
    printf("     87i8788888^       ';;;ii;;;;;;;8888878777ii8ooo;;;;;;;;;;;;;;;;;;;;;;;;;;i788 7\n");
    Sleep(30);
    printf("    77i8788888           ioo;;;;;;oo^^ooooo ^7i88^ooooo;;;;;;;;;;;;;;;;;;;;i7888 78\n");
    printf("   7i87788888o         7;ii788887i7;7;788888ooooo7888888ooo;;;;;;;;;;;;;;oo ^^^ 78\n");
    Sleep(30);
    printf("   i; 7888888^      8888^o;ii778877;7;7888887;;7;7788878;878;;    ;;;;;;;i78888o ^\n");
    printf("  i8 788888       [88888^^ ooo ^^^^^;;77888^^^^;;7787^^^^ ^^;;;;  iiii;i78888888\n");
    Sleep(30);
    printf(" ^8 7888^        [87888 87 ^877i;i8ooooooo8778oooooo888877ii; iiiiiiii788888888\n");
    printf("  ^^^          [7i888 87;; ^8i;;i7888888888888888887888888   i7iiiiiii88888^^\n");
    Sleep(30);
    printf("               87;88 o87;;;;o 87i;;;78888788888888888888^^ o 8ii7iiiiii;;\n");
    printf("               87;i8 877;77888o ^877;;;i7888888888888^^ 7888 78iii7iii7iiii\n");
    Sleep(30);
    printf("               ^87; 877;778888887o 877;;88888888888^ 7ii7888 788oiiiiiiiii\n");
    printf("                 ^ 877;7 7888888887 877i;;8888887ii 87i78888 7888888888\n");
    Sleep(30);
    printf("                  [87;;7 78888888887 87i;;888887i  87ii78888 7888888888]");
    gotoligcol(28,95);
    Color(12,0);
    for (int i=0; i<72; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,00);
    for (int i=0; i<168; i++)
    {
        Sleep(20);
        printf(".");
    }
    joueur->libertePrison=1;

}
///Carte Sith 15
/*
int Fsith15(joueur.argent, propriete.nbhotel, propriete.nbhotel)
{
printf("                              ,ooo888888888888888oooo,\n");
printf("                            o8888YYYYYY77iiiiooo8888888o\n");
Sleep(30);
printf("                           8888YYYY77iiYY8888888888888888\n");
printf("                         [88YYY77iiY88888888888888888888]\n");
Sleep(30);
printf("         S I T H   15    88YY7iYY888888888888888888888888\n");
printf("                        [88YYi 88888888888888888888888888]\n");
Sleep(30);
printf("                        i88Yo8888888888888888888888888888i\n");
printf("                        i]        ^^^88888888^^^     o  [i\n");
Sleep(30);
printf("                       oi8  i           o8o          i  8io\n");
printf("                      ,77788o ^^  ,oooo8888888ooo,   ^ o88777,\n");
Sleep(30);
printf("                      7777788888888888888888888888888888877777\n");
printf("                       77777888888888888888888888888888877777\n");
Sleep(30);
printf("                        77777788888888^7777777^8888888777777\n");
printf("         ,oooo888 ooo   88888778888^7777ooooo7777^8887788888        ,o88^^^^888oo    \n");
Sleep(30);
printf("        o8888777788[];78 88888888888888888888888888888888888887 7;8^ 888888888oo^88   \n");
printf("      o888888iii788 ]; o 78888887788788888^;;^888878877888887 o7;[]88888888888888o    \n");
Sleep(30);
printf("     88888877 ii78[]8;7o 7888878^ ^8788^;;;;;;^878^ ^878877 o7;8 ]878888888888888    \n");
printf("    [88888888887888 87;7oo 777888o8888^;ii;;ii;^888o87777 oo7;7[]8778888888888888   \n");
Sleep(30);
printf("    88888888888888[]87;777oooooooooooooo888888oooooooooooo77;78]88877i78888888888  \n");
printf("   o88888888888888 877;7877788777iiiiiii;;;;;iiiiiiiii77877i;78] 88877i;788888888     \n");
Sleep(30);
printf("    88^;iiii^88888 o87;78888888888888888888888888888888888887;778] 88877ii;7788888     \n");
printf("   ;;;iiiii7iiii^  87;;888888888888888888888888888888888888887;778] 888777ii;78888                           C A R T E  S I T H : E N T R E T I E N \n");
Sleep(30);
printf("   ;iiiii7iiiii7iiii77;i88888888888888888888i7888888888888888877;77i 888877777ii78\n");
Color(15,0);
printf("   iiiiiiiiiii7iiii7iii;;;i7778888888888888ii7788888888888777i;;;;iiii 88888888888                    P A Y E Z  5 0  P O U R  C H A Q U E  V A I S S E A U,  \n");
Sleep(30);
printf("     i;iiiiiiiiiiii7iiiiiiiiiiiiiiiiiiiiiiiiii8877iiiiiiiiiiiiiiiiiii877   88888      \n");
printf("      ii;;iiiiiiiiiiiiii;;;ii^^^;;;ii77777788888888888887777iii;;  77777           78                     1 0 0  P O U R  C H A Q U E  C R O I S E U R  \n");
Sleep(30);
printf("     77iii;;iiiiiiiiii;;;ii;;;;;;;;;^^^^8888888888888888888777ii;;  ii7         ;i78\n");
printf("        ^ii;8iiiiiiii ';;;;ii;;;;;;;;;;;;;;;;;;^^oo ooooo^^^88888888;;i7          7;788\n");
Sleep(30);
printf("      o ^;;^^88888^     'i;;;;;;;;;;;;;;;;;;;;;;;;;;;^^^88oo^^^^888ii7         7;i788\n");
printf("    88ooooooooo         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 788oo^;;          7;i888\n");
Sleep(30);
printf("      887ii8788888      ;;;;;;;ii;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;^87           7;788\n");
printf("      887i8788888^     ;;;;;;;ii;;;;;;;oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,,      ;;888\n");
Sleep(30);
printf("      87787888888     ;;;;;;;ii;;;;;;;888888oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,;i788\n");
printf("     87i8788888^       ';;;ii;;;;;;;8888878777ii8ooo;;;;;;;;;;;;;;;;;;;;;;;;;;i788 7\n");
Sleep(30);
printf("    77i8788888           ioo;;;;;;oo^^ooooo ^7i88^ooooo;;;;;;;;;;;;;;;;;;;;i7888 78\n");
printf("   7i87788888o         7;ii788887i7;7;788888ooooo7888888ooo;;;;;;;;;;;;;;oo ^^^ 78\n");
Sleep(30);
printf("   i; 7888888^      8888^o;ii778877;7;7888887;;7;7788878;878;;    ;;;;;;;i78888o ^\n");
printf("  i8 788888       [88888^^ ooo ^^^^^;;77888^^^^;;7787^^^^ ^^;;;;  iiii;i78888888\n");
Sleep(30);
printf(" ^8 7888^        [87888 87 ^877i;i8ooooooo8778oooooo888877ii; iiiiiiii788888888\n");
printf("  ^^^          [7i888 87;; ^8i;;i7888888888888888887888888   i7iiiiiii88888^^\n");
Sleep(30);
printf("               87;88 o87;;;;o 87i;;;78888788888888888888^^ o 8ii7iiiiii;;\n");
printf("               87;i8 877;77888o ^877;;;i7888888888888^^ 7888 78iii7iii7iiii\n");
Sleep(30);
printf("               ^87; 877;778888887o 877;;88888888888^ 7ii7888 788oiiiiiiiii\n");
printf("                 ^ 877;7 7888888887 877i;;8888887ii 87i78888 7888888888\n");
Sleep(30);
printf("                  [87;;7 78888888887 87i;;888887i  87ii78888 7888888888]");
gotoligcol(28,95);
Color(12,0);
for (int i=0;i<72;i++)
{
    Sleep(20);
    printf("_");
}
gotoligcol(45,00);
for (int i=0;i<168;i++)
{
    Sleep(20);
    printf(".");
}
joueur.argent=joueur.argent - (propriete.nbhotel * 100) - (propriete.nbhotel * 50);
if joueur.argent<0{
    joueur.argent=0;
}
return joueur.argent;
} */


///Carte Sith 16
void Fsith16(joueur_t* joueur)
{
    printf("                              ,ooo888888888888888oooo,\n");
    printf("                            o8888YYYYYY77iiiiooo8888888o\n");
    Sleep(30);
    printf("                           8888YYYY77iiYY8888888888888888\n");
    printf("                         [88YYY77iiY88888888888888888888]\n");
    Sleep(30);
    printf("         S I T H    16   88YY7iYY888888888888888888888888\n");
    printf("                        [88YYi 88888888888888888888888888]\n");
    Sleep(30);
    printf("                        i88Yo8888888888888888888888888888i\n");
    printf("                        i]        ^^^88888888^^^     o  [i\n");
    Sleep(30);
    printf("                       oi8  i           o8o          i  8io\n");
    printf("                      ,77788o ^^  ,oooo8888888ooo,   ^ o88777,\n");
    Sleep(30);
    printf("                      7777788888888888888888888888888888877777\n");
    printf("                       77777888888888888888888888888888877777\n");
    Sleep(30);
    printf("                        77777788888888^7777777^8888888777777\n");
    printf("         ,oooo888 ooo   88888778888^7777ooooo7777^8887788888        ,o88^^^^888oo    \n");
    Sleep(30);
    printf("        o8888777788[];78 88888888888888888888888888888888888887 7;8^ 888888888oo^88   \n");
    printf("      o888888iii788 ]; o 78888887788788888^;;^888878877888887 o7;[]88888888888888o    \n");
    Sleep(30);
    printf("     88888877 ii78[]8;7o 7888878^ ^8788^;;;;;;^878^ ^878877 o7;8 ]878888888888888    \n");
    printf("    [88888888887888 87;7oo 777888o8888^;ii;;ii;^888o87777 oo7;7[]8778888888888888   \n");
    Sleep(30);
    printf("    88888888888888[]87;777oooooooooooooo888888oooooooooooo77;78]88877i78888888888  \n");
    printf("   o88888888888888 877;7877788777iiiiiii;;;;;iiiiiiiii77877i;78] 88877i;788888888     \n");
    Sleep(30);
    printf("    88^;iiii^88888 o87;78888888888888888888888888888888888887;778] 88877ii;7788888     \n");
    printf("   ;;;iiiii7iiii^  87;;888888888888888888888888888888888888887;778] 888777ii;78888                       C A R T E  S I T H :  \n");
    Sleep(30);
    printf("   ;iiiii7iiiii7iiii77;i88888888888888888888i7888888888888888877;77i 888877777ii78\n");
    Color(15,0);
    printf("   iiiiiiiiiii7iiii7iii;;;i7778888888888888ii7788888888888777i;;;;iiii 88888888888               R E B E L L E S   I D E N T I F I E S, n");
    Sleep(30);
    printf("     i;iiiiiiiiiiii7iiiiiiiiiiiiiiiiiiiiiiiiii8877iiiiiiiiiiiiiiiiiii877   88888      \n");
    printf("      ii;;iiiiiiiiiiiiii;;;ii^^^;;;ii77777788888888888887777iii;;  77777           78             A L L E Z  S U R  H O T H\n");
    Sleep(30);
    printf("     77iii;;iiiiiiiiii;;;ii;;;;;;;;;^^^^8888888888888888888777ii;;  ii7         ;i78\n");
    printf("        ^ii;8iiiiiiii ';;;;ii;;;;;;;;;;;;;;;;;;^^oo ooooo^^^88888888;;i7          7;788\n");
    Sleep(30);
    printf("      o ^;;^^88888^     'i;;;;;;;;;;;;;;;;;;;;;;;;;;;^^^88oo^^^^888ii7         7;i788\n");
    printf("    88ooooooooo         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 788oo^;;          7;i888\n");
    Sleep(30);
    printf("      887ii8788888      ;;;;;;;ii;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;^87           7;788\n");
    printf("      887i8788888^     ;;;;;;;ii;;;;;;;oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,,      ;;888\n");
    Sleep(30);
    printf("      87787888888     ;;;;;;;ii;;;;;;;888888oo;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,,;i788\n");
    printf("     87i8788888^       ';;;ii;;;;;;;8888878777ii8ooo;;;;;;;;;;;;;;;;;;;;;;;;;;i788 7\n");
    Sleep(30);
    printf("    77i8788888           ioo;;;;;;oo^^ooooo ^7i88^ooooo;;;;;;;;;;;;;;;;;;;;i7888 78\n");
    printf("   7i87788888o         7;ii788887i7;7;788888ooooo7888888ooo;;;;;;;;;;;;;;oo ^^^ 78\n");
    Sleep(30);
    printf("   i; 7888888^      8888^o;ii778877;7;7888887;;7;7788878;878;;    ;;;;;;;i78888o ^\n");
    printf("  i8 788888       [88888^^ ooo ^^^^^;;77888^^^^;;7787^^^^ ^^;;;;  iiii;i78888888\n");
    Sleep(30);
    printf(" ^8 7888^        [87888 87 ^877i;i8ooooooo8778oooooo888877ii; iiiiiiii788888888\n");
    printf("  ^^^          [7i888 87;; ^8i;;i7888888888888888887888888   i7iiiiiii88888^^\n");
    Sleep(30);
    printf("               87;88 o87;;;;o 87i;;;78888788888888888888^^ o 8ii7iiiiii;;\n");
    printf("               87;i8 877;77888o ^877;;;i7888888888888^^ 7888 78iii7iii7iiii\n");
    Sleep(30);
    printf("               ^87; 877;778888887o 877;;88888888888^ 7ii7888 788oiiiiiiiii\n");
    printf("                 ^ 877;7 7888888887 877i;;8888887ii 87i78888 7888888888\n");
    Sleep(30);
    printf("                  [87;;7 78888888887 87i;;888887i  87ii78888 7888888888]");
    gotoligcol(28,95);
    Color(12,0);
    for (int i=0; i<72; i++)
    {
        Sleep(20);
        printf("_");
    }
    gotoligcol(45,00);
    for (int i=0; i<168; i++)
    {
        Sleep(20);
        printf(".");
    }

    if(joueur->position > 3)
    {
        joueur->argent = joueur->argent + 200;
    }
    joueur->position = 3;

}
