#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "header.h"
#define max 5
int credits()//va afficher les credits
{
    system("cls");
    int a;
    for(int i=0;i<=10;i++)
    {
        Color(3,0);
        Sleep(40);
        printf("* \n");
    }
    Color(14,0);
    Sleep(300);
    printf("LIONSQUY Adrien: Pilote xwing\n");
    Sleep(300);
    for(int i=0;i<=max;i++)
    {
        Color(3,0);
        Sleep(40);
        printf("* \n");
    }
    Sleep(300);
    Color(14,0);
    printf("LEONARDON Thibault: Jabba the hutt\n");
    Sleep(300);
    for(int i=0;i<=max;i++)
    {
        Color(3,0);
        Sleep(40);
        printf("* \n");
    }
    Color(14,0);
    Sleep(300);
    printf("CHAMPOLLION Phillippe: DARK JAR JAR\n");
    Sleep(300);
    for(int i=0;i<=max;i++)
    {
        Color(3,0);
        Sleep(40);
        printf("* \n");
    }
    Color(14,0);
    Sleep(300);
    printf("AUBERT Mathieu: Prefere star trek\n");
    Sleep(300);
    for(int i=0;i<=7;i++)
    {
        Color(3,0);
        Sleep(40);
        printf("* \n");
    }
    Sleep(2000);
    system("cls");
    a=menu();
    choixmenu(a);
}
