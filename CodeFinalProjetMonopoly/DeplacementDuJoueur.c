#include "header.h"

int deplanbrjr(int nbr,joueur_t joueur)
{
    for(int i=0;i<nbr;i++)
    {
        joueur.position+=1;
        if (joueur.position==32)
        {
            joueur.position=0;
        }
    }
    return(joueur.position);
}

