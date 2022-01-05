#include "header.h"

int deplanbrjr(int nbr,joueur_t* joueur)
{
    for(int i=0; i<nbr; i++)
    {
        joueur->position+=1;
        if (joueur->position==28)
        {
            joueur->position=0;
            if(joueur->position == 0)
            {
                joueur->argent = joueur->argent + 200;
            }
        }
    }
    return(joueur->position);
}

