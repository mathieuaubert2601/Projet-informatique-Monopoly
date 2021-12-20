#include <stdio.h>
#include <stdlib.h>

struct joueur
{
   char nomJoueur[20] ;
	int possessions[24];
	int  position;
	int  argent ;
	int tourPrison ;
	int numeroJoueur ;
	int libertePrison ;
	int nbProprietefam1;
	int nbProprietefam2;
	int nbProprietefam3;
	int nbProprietefam4;
	int doubleOuNon;

};

struct caseMonop
{

	char nomCase[20];
	int  position ;
	int cout;
	int famille;
	int proprieteDe;
	int nbMaison;
	int nbHotel;
	int typeCase;
	int prixLoyer;

};

void achat(struct joueur* joueur, struct caseMonop* case1, int *compteurMaison, int *compteurHotel, int nbMaison)
{
    case1->nbMaison += nbMaison;
    *compteurMaison += nbMaison;
    joueur->argent -= (case1->cout/4)*nbMaison;

    if (case1->nbMaison >= 5)
    {
        case1->nbMaison = 0;
        case1->nbHotel = 1;
        *compteurMaison -= 5;
        *compteurHotel +=1;
    }
}



void gestion_Prop(struct joueur joueur[],struct caseMonop caseMonop[], int *compteurMaison, int *compteurHotel, int i)
{
    int choixM, choixP, choixNbMaison;
    printf("Souhaitez vous acheter une maison(1), vendre une maison(2) ou quitter ce menu(0) ?");
    fflush(stdin);
    scanf("%d",&choixM);

    if (choixM == 1)
    {
        printf("où souhaitez vous acheter des maisons ?, vous possédez : ", joueur[i].possessions);
        fflush(stdin);
        scanf("%d",&choixP);

        if (caseMonop[choixP].nbMaison == 5)
        {
            printf("vous possédez déja un hotel sur cette case. Vous ne pouvez donc pas acheter de maison");
        }

        else if (caseMonop[choixP].nbMaison == 4)
        {
            printf("vous possédez 4 maisons, vous pouvez rajouter une maison, ce qui vous donnera un hotel. \n Une maison sur cette propriété vaut : %d crédits\n", caseMonop[choixP].cout/4);
            printf("Le loyer de votre propriété avec une maison vaudra : %d credits, avec deux maisons : %d Credits, avec trois maisons : %d Credits, avec quatres maisons : %d Credits, et avec un Hotel(5 maisons) : %d Credits\n",caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*1),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*2),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*3),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*4),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*5));
            printf("Voulez vous acheter une maison pour %d Credits ?\n",caseMonop[choixP].cout/4);
            do{
                printf("Saisir 1 ou 0. \n");
                fflush(stdin);
                scanf("%d",&choixNbMaison);
            }while(choixNbMaison != 1 || choixNbMaison != 0);
            if (choixNbMaison == 1)
            {
                achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
            }

        }
        else if (caseMonop[choixP].nbMaison == 3)
        {
            printf("vous possédez 3 maisons, vous pouvez rajouter une maison, ou deux, ce qui vous donnera un hotel. \n Une maison sur cette propriété vaut : %d crédits\n", caseMonop[choixP].cout/10);
            printf("Le loyer de votre propriété avec une maison vaudra : %d credits, avec deux maisons : %d Credits, avec trois maisons : %d Credits, avec quatres maisons : %d Credits, et avec un Hotel(5 maisons) : %d Credits",caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*1),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*2),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*3),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*4),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*5));
            printf("Combien de maison voulez vous donc acheter ?");
            do{
                printf("Saisir 1,2 ou 0");
                fflush(stdin);
                scanf("%d",&choixNbMaison);
            }while(choixNbMaison <0 || choixNbMaison >2);
            if (choixNbMaison == 1)
            {
                achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
            }
            else if (choixNbMaison == 2)
            {
                achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
            }

        }
        else if (caseMonop[choixP].nbMaison == 2)
        {
            printf("vous possédez 2 maisons, vous pouvez rajouter une a deux maisons,ou trois, ce qui vous donnera un hotel. \n Une maison sur cette propriété vaut : %d crédits", caseMonop[choixP].cout/10);
            printf("Le loyer de votre propriété avec une maison vaudra : %d credits, avec deux maisons : %d Credits, avec trois maisons : %d Credits, avec quatres maisons : %d Credits, et avec un Hotel(5 maisons) : %d Credits",caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*1),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*2),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*3),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*4),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*5));
            printf("Combien de maison voulez vous donc acheter ?");
            do{
                printf("Saisir 1,2,3 ou 0");
                fflush(stdin);
                scanf("%d",&choixNbMaison);
            }while(choixNbMaison <0 || choixNbMaison >3);
            if (choixNbMaison == 1)
            {
                achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
            }
            else if (choixNbMaison == 2)
            {
                achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
            }
            else if (choixNbMaison == 3)
            {
                achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
            }

        }
        else if (caseMonop[choixP].nbMaison == 1)
        {
            printf("vous possédez 1 maisons, vous pouvez rajouter une a trois maisons, ou quatres, ce qui vous donnera un hotel. \n Une maison sur cette propriété vaut : %d crédits", caseMonop[choixP].cout/10);
            printf("Le loyer de votre propriété avec une maison vaudra : %d credits, avec deux maisons : %d Credits, avec trois maisons : %d Credits, avec quatres maisons : %d Credits, et avec un Hotel(5 maisons) : %d Credits",caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*1),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*2),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*3),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*4),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*5));
            printf("Combien de maison voulez vous donc acheter ?");
            do
            {
                printf("Saisir 1,2,3,4 ou 0");
                fflush(stdin);
                scanf("%d",&choixNbMaison);
            }while(choixNbMaison <0 || choixNbMaison >4);
            if (choixNbMaison == 1)
            {
                achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
            }
            else if (choixNbMaison == 2)
            {
                achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
            }
            else if (choixNbMaison == 3)
            {
                achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
            }
            else if (choixNbMaison == 4)
            {
                achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
            }

        }
        else if (caseMonop[choixP].nbMaison == 0)
        {
            printf("vous ne possédez aucune maison, vous pouvez rajouter une a quatres maisons, ou cinq ce qui vous donnera un hotel. \n Une maison sur cette propriété vaut : %d crédits", caseMonop[choixP].cout/10);
            printf("Le loyer de votre propriété avec une maison vaudra : %d credits, avec deux maisons : %d Credits, avec trois maisons : %d Credits, avec quatres maisons : %d Credits, et avec un Hotel(5 maisons) : %d Credits",caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*1),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*2),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*3),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*4),caseMonop[choixP].prixLoyer+((caseMonop[choixP].prixLoyer/5)*5));
            printf("Combien de maison voulez vous donc acheter ?");
            do{
                printf("Saisir 1,2,3,4,5 ou 0");
                fflush(stdin);
                scanf("%d",&choixNbMaison);
            }while(choixNbMaison <0 || choixNbMaison >5);
            if (choixNbMaison == 1)
            {
                achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
            }
            else if (choixNbMaison == 2)
            {
                achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
            }
            else if (choixNbMaison == 3)
            {
                achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
            }
            else if (choixNbMaison == 4)
            {
                achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
            }
            else if (choixNbMaison == 5)
            {
                achat(&joueur[i], &compteurMaison, &compteurHotel, choixNbMaison, choixP);
            }

        }

    }

}






int main()
{

    return 0;
}
