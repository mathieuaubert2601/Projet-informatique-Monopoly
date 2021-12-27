#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "header.h"

void fullscreen()
{
keybd_event(VK_MENU,0x38,0,0);
keybd_event(VK_RETURN,0x1c,0,0);
keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}



joueur_t main(joueur_t joueur, /*structure d'une propriété*/)
{
    fullscreen();
    srand(time(NULL));
    int a=0;
    a = 1 + rand()% ( 16 - 1 );



    switch(a)
    {
        case 1:
        {
            joueur.argent=f1(joueur.argent);
            Sleep(5000);
            break;
        }
        case 2:
        {
            joueur.argent=f2(joueur.argent);
            Sleep(5000);
            break;
        }
        case 3:
        {
            joueur.argent=f3(joueur.argent);
            Sleep(5000);
            break;
        }
        case 4:
        {
            joueur.position=f4(joueur.position);
            Sleep(5000);
            break;
        }
        case 5:
        {
            joueur.position=f5(joueur.position);
            Sleep(5000);
            break;
        }
        case 6:
        {
            joueur.position=f6(joueur.position);
            Sleep(5000);
            break;
        }
        case 7:
        {
            joueur.argent=f7(joueur.argent);
            Sleep(5000);
            break;
        }
        case 8:
        {
            joueur.argent=f8(joueur.argent);
            Sleep(5000);
            break;
        }
        case 9:
        {
            joueur.argent=f9(joueur.argent);
            Sleep(5000);
            break;
        }
        case 10:
        {
            joueur.position=f10(joueur.position);
            Sleep(5000);
            break;
        }
        case 11:
        {
            joueur.argent=f11(joueur.argent);
            Sleep(5000);
            break;
        }
        case 12:
        {
            joueur.argent=f12(joueur.argent);
            Sleep(5000);
            break;
        }
        case 13:
        {
            joueur.position=f13(joueur.position);
            Sleep(5000);
            break;
        }
        case 14:
        {
            joueur.position=f14(joueur.position);
            Sleep(5000);
            break;
        }
        case 15:
        {
            joueur.position=f15(joueur.position);
            Sleep(5000);
            break;
        }
        case 16:
        {
            joueur.position=f16(joueur.position);
            Sleep(5000);
            break;
        }
        break;
    }

    return 0;
}






