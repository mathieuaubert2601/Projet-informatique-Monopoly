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
    int a;
    a = rand() % (16 + 1);


    switch(a)
    {
        case 1:
        {
            joueur.position=Fsith1(joueur.position);
            Sleep(5000);
            break;

        }
        case 2:
        {
            joueur.argent=Fsith2(joueur.argent);
            Sleep(5000);
            break;

        }
        case 3:
        {
            joueur_t=Fsith3(joueur_t joueur, /*structure d'une propriété*/);
            Sleep(5000);
            break;
        }
        case 4:
        {
            joueur.position=Fsith4(joueur.position);
            Sleep(5000);
            break;
        }
        case 5:
        {
            joueur.argent=Fsith5(joueur.argent);
            Sleep(5000);
            break;
        }
        case 6:
        {
            joueur.argent=Fsith6(joueur.argent);
            Sleep(5000);
            break;
        }
        case 7:
        {
            joueur.argent=Fsith7(joueur.argent);
            Sleep(5000);
            break;
        }
        case 8:
        {
            joueur.position=Fsith8(joueur.position);
            Sleep(5000);
            break;
        }
        case 9:
        {
            joueur.position=Fsith9(joueur.position);
            Sleep(5000);
            break;
        }
        case 10:
        {
            joueur.argent=Fsith10(joueur.argent);
            Sleep(5000);
            break;
        }
        case 11:
        {
            joueur.argent=Fsith11(joueur.argent);
            Sleep(5000);
            break;
        }
        case 12:
        {
            joueur.argent=Fsith12(joueur.argent);
            Sleep(5000);
            break;
        }
        case 13:
        {
            joueur.argent=Fsith13(joueur.argent);
            Sleep(5000);
            break;
        }
        case 14:
        {
            joueur.libertePrison=Fsith14(joueur.libertePrison);
            Sleep(5000);
            break;
        }
        case 15:
        {
            joueur.argent=Fsith15(joueur.argent);
            Sleep(5000);
            break;
        }
        case 16:
        {
            joueur.position=Fsith16(joueur.position);
            Sleep(5000);
            break;
        }
    }
    return 0;


}
