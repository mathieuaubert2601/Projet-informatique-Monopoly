#include "header.h"


void actioncase(joueur_t* joueur,caseMonop* tabc[], int* nombreCarteSith)
{
    int pos= joueur->position;

    switch (tabc[pos]->typeCase)
    {
    case 0:
    {
        joueur->argent+=200;
        break;
    }
    case 2:
    {
        //prog acheter
        break;
    }
    case 4:
    {
        //ordre 66 a voir si on fait
        break;
    }
    case 5:
    {
        joueur->position=7;
        joueur->tourPrison+=1;
        break;
    }
    case 6:
    {
        switch(*nombreCarteSith)
        {
        case 0:
            {
                Fsith1(joueur);
            }
        case 1:
            {
                Fsith2(joueur);
            }
        case 2:
            {
                Fsith3(joueur);
            }
        case 3:
            {
                Fsith4(joueur);
            }
        case 4:
            {
                Fsith5(joueur);
            }
        case 5:
            {
                Fsith6(joueur);
            }
        case 6:
            {
                Fsith7(joueur);
            }
        case 7:
            {
                Fsith8(joueur);
            }
        case 8:
            {
                Fsith9(joueur);
            }
        case 9:
            {
                Fsith10(joueur);
            }
        case 10:
            {
                Fsith11(joueur);
            }
        case 11:
            {
                Fsith12(joueur);
            }
        case 12:
            {
                Fsith13(joueur);
            }
        case 13:
            {
                Fsith14(joueur);
            }
        case 14:
            {
                //Fsith15(joueur);
            }
        case 15:
            {
                Fsith16(joueur);
            }
        }
        *nombreCarteSith = *nombreCarteSith + 1;
        if(*nombreCarteSith == 16)
        {
            *nombreCarteSith = 0;
        }

        break;
    }
    case 7:
    {
        break;
    }
    default:
    {
        break;
    }

    }
}

void remplirTableauDeCase(caseMonop tableauDesCases[])
{
    caseMonop case0,case1,case2,case3,case4,case5,case6,case7,case8,case9,case10,case11,case12,case13,case14,case15,case16,case17,case18,case19,case20,case21,case22,case23,case24,case25,case26,case27;


    strcpy(case0.nomCase,"Depart");
    case0.position = 0;
    case0.prix_case=0;
    case0.famille=0;
    case0.proprieteDe=0;
    case0.nbMaison=0;
    case0.nbHotel=0;
    case0.typeCase=0;
    case0.prixLoyer=200;

    strcpy(case1.nomCase,"Dagobah");
    case1.position = 1;
    case1.prix_case=50;
    case1.famille=1;
    case1.proprieteDe=1;
    case1.nbMaison=2;
    case1.nbHotel=0;
    case1.typeCase=1;
    case1.prixLoyer=3;
    case1.prixloy1maison=13;
    case1.prixloy2maison=38;
    case1.prixloy3maison=94;
    case1.prixloy4maison=140;
    case1.prixloyhotel=210;


    strcpy(case2.nomCase,"Conseil Jedi");
    case2.position = 2;
    case2.prix_case=0;
    case2.famille=0;
    case2.proprieteDe=0;
    case2.nbMaison=0;
    case2.nbHotel=0;
    case2.typeCase=7;
    case2.prixLoyer=0;


    strcpy(case3.nomCase,"Hoth");
    case3.position = 3;
    case3.prix_case=75;
    case3.famille=1;
    case3.proprieteDe=0;
    case3.nbMaison=0;
    case3.nbHotel=0;
    case3.typeCase=1;
    case3.prixLoyer=4;
    case3.prixloy1maison=18;
    case3.prixloy2maison=56;
    case3.prixloy3maison=140;
    case3.prixloy4maison=210;
    case3.prixloyhotel=316;

    strcpy(case4.nomCase,"Spatioport I");
    case4.position = 4;
    case4.prix_case=200;
    case4.famille=9;
    case4.proprieteDe=1;
    case4.nbMaison=0;
    case4.nbHotel=0;
    case4.typeCase=2;
    case4.prixLoyer=50;

    strcpy(case5.nomCase,"Kashyyk");
    case5.position = 5;
    case5.prix_case=100;
    case5.famille=2;
    case5.proprieteDe=0;
    case5.nbMaison=0;
    case5.nbHotel=0;
    case5.typeCase=1;
    case5.prixLoyer=5;
    case5.prixloy1maison=25;
    case5.prixloy2maison=75;
    case5.prixloy3maison=187;
    case5.prixloy4maison=281;
    case5.prixloyhotel=422;

    strcpy(case6.nomCase,"Endor");
    case6.position = 6;
    case6.prix_case=125;
    case6.famille=2;
    case6.proprieteDe=0;
    case6.nbMaison=0;
    case6.nbHotel=0;
    case6.typeCase=2;
    case6.prixLoyer=6;
    case6.prixloy1maison=31;
    case6.prixloy2maison=93;
    case6.prixloy3maison=234;
    case6.prixloy4maison=351;
    case6.prixloyhotel=527;

    strcpy(case7.nomCase,"Prison");
    case7.position = 7;
    case7.prix_case=0;
    case7.famille=0;
    case7.proprieteDe=0;
    case7.nbMaison=0;
    case7.nbHotel=0;
    case7.typeCase=3;
    case7.prixLoyer=0;

    strcpy(case8.nomCase,"Mustafar");
    case8.position = 8;
    case8.prix_case=150;
    case8.famille=3;
    case8.proprieteDe=0;
    case8.nbMaison=0;
    case8.nbHotel=0;
    case8.typeCase=1;
    case8.prixLoyer=7;
    case8.prixloy1maison=37;
    case8.prixloy2maison=112;
    case8.prixloy3maison=281;
    case8.prixloy4maison=412;
    case8.prixloyhotel=632;

    strcpy(case9.nomCase,"Jakuu");
    case9.position = 9;
    case9.prix_case=175;
    case9.famille=3;
    case9.proprieteDe=0;
    case9.nbMaison=0;
    case9.nbHotel=0;
    case9.typeCase=1;
    case9.prixLoyer=9;
    case9.prixloy1maison=44;
    case9.prixloy2maison=1313;
    case9.prixloy3maison=328;
    case9.prixloy4maison=492;
    case9.prixloyhotel=738;

    strcpy(case10.nomCase,"Spatioport II");
    case10.position = 10;
    case10.prix_case=200;
    case10.famille=9;
    case10.proprieteDe=0;
    case10.nbMaison=0;
    case10.nbHotel=0;
    case10.typeCase=2;
    case10.prixLoyer=50;

    strcpy(case11.nomCase,"Jedha");
    case11.position = 11;
    case11.prix_case=200;
    case11.famille=4;
    case11.proprieteDe=0;
    case11.nbMaison=0;
    case11.nbHotel=0;
    case11.typeCase=1;
    case11.prixLoyer=10;
    case11.prixloy1maison=50;
    case11.prixloy2maison=150;
    case11.prixloy3maison=375;
    case11.prixloy4maison=562;
    case11.prixloyhotel=844;

    strcpy(case12.nomCase,"Alliance Sith");
    case12.position = 12;
    case12.prix_case=0;
    case12.famille=0;
    case12.proprieteDe=0;
    case12.nbMaison=0;
    case12.nbHotel=0;
    case12.typeCase=6;
    case12.prixLoyer=0;

    strcpy(case13.nomCase,"Tatooine");
    case13.position = 13;
    case13.prix_case=225;
    case13.famille=4;
    case13.proprieteDe=0;
    case13.nbMaison=0;
    case13.nbHotel=0;
    case13.typeCase=1;
    case13.prixLoyer=11;
    case13.prixloy1maison=56;
    case13.prixloy2maison=169;
    case13.prixloy3maison=421;
    case13.prixloy4maison=632;
    case13.prixloyhotel=949;

    strcpy(case14.nomCase,"Ordre 66");
    case14.position = 14;
    case14.prix_case=0;
    case14.famille=0;
    case14.proprieteDe=0;
    case14.nbMaison=0;
    case14.nbHotel=0;
    case14.typeCase=4;
    case14.prixLoyer=0;

    strcpy(case15.nomCase,"Kaminoo");
    case15.position = 15;
    case15.prix_case=250;
    case15.famille=5;
    case15.proprieteDe=0;
    case15.nbMaison=0;
    case15.nbHotel=0;
    case15.typeCase=1;
    case15.prixLoyer=13;
    case15.prixloy1maison=62;
    case15.prixloy2maison=187;
    case15.prixloy3maison=468;
    case15.prixloy4maison=703;
    case15.prixloyhotel=1054;

    strcpy(case16.nomCase,"Conseil Jedi");
    case16.position = 16;
    case16.prix_case=0;
    case16.famille=0;
    case16.proprieteDe=0;
    case16.nbMaison=0;
    case16.nbHotel=0;
    case16.typeCase=7;
    case16.prixLoyer=0;

    strcpy(case17.nomCase,"Geonosis");
    case17.position = 17;
    case17.prix_case=275;
    case17.famille=5;
    case17.proprieteDe=0;
    case17.nbMaison=0;
    case17.nbHotel=0;
    case17.typeCase=1;
    case17.prixLoyer=14;
    case17.prixloy1maison=69;
    case17.prixloy2maison=206;
    case17.prixloy3maison=515;
    case17.prixloy4maison=773;
    case17.prixloyhotel=1160;

    strcpy(case18.nomCase,"Spatioport III");
    case18.position = 18;
    case18.prix_case=200;
    case18.famille=9;
    case18.proprieteDe=0;
    case18.nbMaison=0;
    case18.nbHotel=0;
    case18.typeCase=2;
    case18.prixLoyer=50;

    strcpy(case19.nomCase,"Alderaan");
    case19.position = 19;
    case19.prix_case=300;
    case19.famille=6;
    case19.proprieteDe=0;
    case19.nbMaison=0;
    case19.nbHotel=0;
    case19.typeCase=1;
    case19.prixLoyer=15;
    case19.prixloy1maison=75;
    case19.prixloy2maison=225;
    case19.prixloy3maison=562;
    case19.prixloy4maison=843;
    case19.prixloyhotel=1265;

    strcpy(case20.nomCase,"Bespin");
    case20.position = 20;
    case20.prix_case=325;
    case20.famille=6;
    case20.proprieteDe=0;
    case20.nbMaison=0;
    case20.nbHotel=0;
    case20.typeCase=1;
    case20.prixLoyer=16;
    case20.prixloy1maison=81;
    case20.prixloy2maison=243;
    case20.prixloy3maison=609;
    case20.prixloy4maison=914;
    case20.prixloyhotel=1160;

    strcpy(case21.nomCase,"Arrestation");
    case21.position = 21;
    case21.prix_case=0;
    case21.famille=0;
    case21.proprieteDe=0;
    case21.nbMaison=0;
    case21.nbHotel=0;
    case21.typeCase=5;
    case21.prixLoyer=0;

    strcpy(case22.nomCase,"Yavin 4");
    case22.position = 22;
    case22.prix_case=350;
    case22.famille=7;
    case22.proprieteDe=0;
    case22.nbMaison=0;
    case22.nbHotel=0;
    case22.typeCase=1;
    case22.prixLoyer=18;
    case22.prixloy1maison=87;
    case22.prixloy2maison=262;
    case22.prixloy3maison=659;
    case22.prixloy4maison=984;
    case22.prixloyhotel=1371;

    strcpy(case23.nomCase,"Alliance Sith");
    case23.position = 23;
    case23.prix_case=0;
    case23.famille=0;
    case23.proprieteDe=0;
    case23.nbMaison=0;
    case23.nbHotel=0;
    case23.typeCase=6;
    case23.prixLoyer=0;

    strcpy(case24.nomCase,"Naboo");
    case24.position = 24;
    case24.prix_case=375;
    case24.famille=7;
    case24.proprieteDe=0;
    case24.nbMaison=0;
    case24.nbHotel=0;
    case24.typeCase=1;
    case24.prixLoyer=19;
    case24.prixloy1maison=93;
    case24.prixloy2maison=281;
    case24.prixloy3maison=703;
    case24.prixloy4maison=1054;
    case24.prixloyhotel=1582;

    strcpy(case25.nomCase,"Spatioport IV");
    case25.position = 25;
    case25.prix_case=200;
    case25.famille=9;
    case25.proprieteDe=0;
    case25.nbMaison=0;
    case25.nbHotel=0;
    case25.typeCase=2;
    case25.prixLoyer=50;

    strcpy(case26.nomCase,"Alderaan");
    case26.position = 26;
    case26.prix_case=400;
    case26.famille=8;
    case26.proprieteDe=0;
    case26.nbMaison=0;
    case26.nbHotel=0;
    case26.typeCase=1;
    case26.prixLoyer=20;
    case26.prixloy1maison=100;
    case26.prixloy2maison=300;
    case26.prixloy3maison=750;
    case26.prixloy4maison=1125;
    case26.prixloyhotel=1687;

    strcpy(case27.nomCase,"Corusant");
    case27.position = 27;
    case27.prix_case=450;
    case27.famille=8;
    case27.proprieteDe=0;
    case27.nbMaison=0;
    case27.nbHotel=0;
    case27.typeCase=1;
    case27.prixLoyer=23;
    case27.prixloy1maison=112;
    case27.prixloy2maison=337;
    case27.prixloy3maison=843;
    case27.prixloy4maison=1265;
    case27.prixloyhotel=1898;


    tableauDesCases[0]= case0;
    tableauDesCases[1]= case1;
    tableauDesCases[2]= case2;
    tableauDesCases[3]= case3;
    tableauDesCases[4]= case4;
    tableauDesCases[5]= case5;
    tableauDesCases[6]= case6;
    tableauDesCases[7]= case7;
    tableauDesCases[8]= case8;
    tableauDesCases[9]= case9;
    tableauDesCases[10]= case10;
    tableauDesCases[11]= case11;
    tableauDesCases[12]= case12;
    tableauDesCases[13]= case13;
    tableauDesCases[14]= case14;
    tableauDesCases[15]= case15;
    tableauDesCases[16]= case16;
    tableauDesCases[17]= case17;
    tableauDesCases[18]= case18;
    tableauDesCases[19]= case19;
    tableauDesCases[20]= case20;
    tableauDesCases[21]= case21;
    tableauDesCases[22]= case22;
    tableauDesCases[23]= case23;
    tableauDesCases[24]= case24;
    tableauDesCases[25]= case25;
    tableauDesCases[26]= case26;
    tableauDesCases[27]= case27;
}
