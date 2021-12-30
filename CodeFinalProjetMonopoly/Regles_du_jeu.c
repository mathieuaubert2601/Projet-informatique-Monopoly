#include "header.h"

void regle_Du_jeu()
{
    system("cls");

    Sleep(100);
    Color(14,0);
    printf("LES REGLES DU MONOPOLY STAR WARS EDITION\n\n");
    printf("Banquier\n\n");
    Color(3,0);
    printf("- Outre son argent, la Banque detient les cartes des terrains, les maisons et les hotels avant leur achat et utilisation par les joueurs.\n");
    printf("- La Banque paie les salaires (200 credits pour le passage de la case depart) et les bonus.\n");
    printf("- Elle vend les maisons et les hotels pour les joueurs et prete de l'argent lorsque requis sur les hypotheques.\n");
    printf("La Banque percoit toutes les taxes, amendes, prets et interets. La Banque ne fait jamais faillite (elle dispose de fonds illimites).\n\n");

    Sleep(100);
    Color(14,0);
    printf("\nLe jeu\n\n");
    Color(3,0);
    printf("- Au debut, et une fois que chaque joueur.euse ait saisi son nom, Le programme choisira aleatoirement qui commence.  Son jeton est affiche sur le coin marque 'GO', il 'lance' les 2 des, et sera deplace du nombre\nindique. Apres qu'il/elle ait termine son jeu, le tour de jeu passe a sa gauche (sens horaire). Les jetons restent sur la case et proceder a partir de ce point au tour suivant.\n\n");
    printf("- Deux ou plus de deux joueur.euses peuvent etre sur la meme cases au meme moment. En fonction de la case que son jeton atteint, le joueur peut avoir le droit d'acheter des biens immobiliers ou d'autres\nproprietes ou etre oblige de payer un loyer, payer des impots, tirer une carte chance ou communaute etc.\n");

    Sleep(100);
    Color(14,0);
    printf("\nDoubles\n\n");
    Color(3,0);
    printf("- Si un.e joueur.euse lance des doubles, il deplace son jeton comme d'habitude, la somme des deux des, et est assujetti a tous les privileges ou penalites relatifs a l'espace sur lequel il atterrit.\n");
    printf("- Il a alors le droit de relancer les des une deuxieme fois. Il relance et deplace son jeton.\n");
    printf("- Si un.e joueur.euse lance des doubles trois fois de suite, il deplace immediatement son jeton dans l'espace 'En prison'.\n");

    Sleep(100);
    Color(14,0);
    printf("\nDepart\n\n");
    Color(3,0);
    printf("- Chaque fois qu'un jeton atterrit ou passe par-dessus la case depart, que ce soit en jetant les des ou en tirant une carte, le banquier paie au joueur un salaire de 200 credit.\n");
    printf("- Les 200 credit ne sont payes qu'une seule fois a chaque fois autour de la planche.\n");
    printf("- Cependant, si un.e joueur.euse qui passe le depart sur le jet d'un de atterrit 2 cases au-dela sur le Coffre de la communaute, ou 7 cases au-dela sur la Chance, et tire la carte 'Avance au Depart', il ramasse 200 credit pour passer le depart la premiere fois et 200 credit pour l'atteindre la deuxieme fois par des instructions sur la carte.\n");

    Sleep(100);
    Color(14,0);
    printf("\nAcheter une propriete\n\n");
    Color(3,0);
    printf("- Chaque fois qu'un.e joueur.euse atterrit sur une propriete non possedee, il.elle peut acheter cette propriete a la Banque a son prix imprime.\n");
    printf("- Le joueur recoit la carte de titre de propriete et la place face visible devant lui.\n");

    Sleep(100);
    Color(14,0);
    printf("\nPaiement du loyer\n\n");
    Color(3,0);
    printf("- Lorsqu'un.e joueur.euse atterrit sur une propriete appartenant a un autre joueur, le proprietaire percoit le loyer du joueur conformement a la liste imprimee sur la carte de titre de propriete qui lui est \napplicable.\n");
    printf("- Si la propriete est hypothequee, aucun loyer ne peut etre percu. Lorsqu'une propriete est hypothequee, sa carte de titre de propriete est placee face cachee devant le proprietaire.\n");
    printf("- C'est un avantage de detenir toutes les cartes de titre de propriete dans un groupe de couleur parce que le proprietaire peut alors facturer un double loyer pour les proprietes non ameliorees dans ce groupe de couleur. Cette regle s'applique aux proprietes non hypothequees, meme si une autre propriete de ce groupe de couleur est hypothequee.\n");
    printf("- Il est encore plus avantageux d'avoir des maisons et des hotels sur les proprietes parce que les loyers sont beaucoup plus eleves que pour les proprietes non ameliorees.\n");
    printf("- Le loyer est retire automatiquement de la cagnotte de la personne qui doit payer : si le solde est insuffisant on lui demande s'il.elle veut hypothequer ou vendre des biens : si ce n'est pas possible c'est la faillite et c'est perdu !\n");

    Sleep(100);
    Color(14,0);
    printf("\nChance et communaute \n\n");
    Color(3,0);
    printf("- Quand un.e joueur.euse atterrit sur l'un de ces cases, il/elle prend la carte du haut de la pioche indiquee, suit les instructions et retourne la carte face cachee au bas de la pioche. La carte 'Sortir \nde prison' est conservee jusqu'a ce qu'elle soit utilisee, puis retournee au fond du paquet.\n");

    Sleep(100);
    Color(14,0);
    printf("\nImpot sur le revenu\n\n");
    Color(3,0);
    printf("Lorsqu'un.e joueur.euse atterrit sur 'Impot sur le revenu', il doit payer l'impot de 200 credit a la Banque.\n");

    Sleep(100);
    Color(14,0);
    printf("\nPrison\n\n");
    Color(3,0);
    printf("- Un.e joueur.euse atterrit en prison quand :\n");
    printf("      1. Son jeton atterrit dans l'espace marque 'ALLER EN PRISON'\n");
    printf("      2. Il tire une carte marquee 'ALLER EN PRISON' \n");
    printf("      3. Il lance trois fois de suite des doubles.\n\n");
    printf("- Lorsqu'un.e joueur.euse est envoye en prison, il ne peut pas recevoir 200 credit de salaire pour ce coup car, peu importe ou se trouve son jeton sur le plateau, il doit le deplacer directement en prison.\n");
    printf("- Son tour se termine lorsqu'il est envoye en prison. Si un.e joueur.euse n'est pas 'envoye en prison' mais qu'il atterrit dans le cours normal du jeu sur cet case, il est juste 'En visite', n'encourt aucune \npenalite, et avance de la maniere habituelle sur son prochain jet.\n\n");
    printf("- Un.e joueur.euse sort de prison lorsqu'il :\n");
    printf("      1. Lance des doubles sur l'un de ses trois tours suivants, s'il reussit a le faire, il avance immediatement le nombre d'espaces indiques par son double, meme s'il a lance des doubles, il ne prend pas \n");
    printf("         un autre tour\n");
    printf("      2. Utilise la carte 'Sortir de prison gratuitement' s'il en a une\n");
    printf("      3. Achete la carte 'Sortir de prison gratuitement' d'un autre joueur et la jouer\n");
    printf("      4. Payer une amende de 50 credit avant de lancer les des lors de l'un ou l'autre de ses deux tours suivants.\n");
    printf("      5. Si le joueur ne lance pas le double a son troisieme tour, il doit payer l'amende de 50 credit. Il/elle sort alors de prison et avance immediatement le nombre de cases indiquees par son jet.\n\n");
    printf("- Meme s'il.elle est en prison, un.e joueur.euse peut encore acheter, vendre ou hypothequer une propriete, acheter ou vendre des maisons et des hotels, faire des echanges et percevoir des loyers.\n");
    printf("\n");

    Sleep(100);
    Color(14,0);
    printf("\nStationnement gratuit\n\n");
    Color(3,0);
    printf("- Un.e joueur.euse qui atterrit sur cet espace ne recoit pas d'argent, de biens ou de recompenses de quelque nature que ce soit. Ce n'est qu'un lieu de repos 'libre'.\n");


    Sleep(100);
    Color(14,0);
    printf("\nMaisons\n\n");
    Color(3,0);
    printf("- Une maison peut etre achete sur n'importe quel case propriete possedee.\n");
    printf("- S'il achete une maison, il peut la mettre sur la propriete ou il.elle est.\n");
    printf("- Le prix que le joueur doit payer a la Banque pour chaque maison est indique sur sa carte de titre de propriete pour la propriete sur laquelle il erige la maison.\n");
    printf("- Le proprietaire peut toujours percevoir un double loyer s'il.elle possède tout un groupe de proprietes.\n");

    Sleep(100);
    Color(14,0);
    printf("\nHotels\n\n");
    Color(3,0);
    printf("- Quand un.e joueur.euse a quatre maisons sur une propriete, il.elle peut acheter un hotel a la Banque et l'eriger sur cette propriete. Il/elle rend les quatre maisons de cette propriete a la Banque et paie \nle prix de l'hotel tel qu'indique sur la carte de titre de propriete.Un seul hotel peut etre erige sur une meme propriete.\n");

    Sleep(100);
    Color(14,0);
    printf("\nPenurie de batiments\n\n");
    Color(3,0);
    printf("- Lorsque la Banque n'a pas de maisons a vendre, les joueurs souhaitant construire doivent attendre qu'un autre joueur vende ses maisons a la Banque avant de construire.\n");

    Sleep(100);
    Color(14,0);
    printf("\nVendre/negocier un bien immobilier\n\n");
    Color(3,0);
    printf("- Les maisons et les hotels peuvent etre revendus a la Banque a tout moment pour la moitie du prix paye.\n");
    printf("- Les hotels peuvent etre vendus en une seule fois. Ou bien ils peuvent etre vendus une maison a la fois (un hotel equivaut a cinq maisons), de manière egale, a l'inverse de la maniere dont ils ont ete eriges.\n");

    Sleep(100);
    Color(14,0);
    printf("\nHypotheques\n\n");
    Color(3,0);
    printf("- Les proprietes non ameliorees peuvent etre hypothequees par l'entremise de la Banque en tout temps.\n");
    printf("- Avant qu'une propriete amélioree puisse etre hypothequee, tous les batiments sur toutes les proprietes de son groupe de couleur doivent etre revendus a la Banque a moitie prix. La valeur de l'hypotheque est \nimprimee sur chaque carte de titre de propriete.\n");
    printf("- Aucun loyer ne peut etre percu sur les proprietes hypothequees ou les services publics, mais le loyer peut etre perçu sur les proprietes non hypothequees du meme groupe de couleur. Afin de lever l'hypotheque, le proprietaire doit payer a la Banque le montant de l'hypotheque majore d'un interet de 10 pourcents.\n");
    printf("- Toutefois, le proprietaire peut vendre ou echanger cette propriete hypothequee a un autre joueur a n'importe quel prix convenu. Le nouveau proprietaire peut lever l'hypotheque immediatement, s'il le desire, \nen remboursant l'hypotheque plus 10 pourcents d'interets a la Banque. S'il ne resilie pas l'hypotheque immediatement, il doit payer a la banque un interet de 10pourcents lorsqu'il achete/reçoit la propriete \nhypothequee, et s'il leve l'hypotheque plus tard, il doit payer a la Banque un interet additionnel de 10pourcents ainsi que le montant de l'hypotheque.\n");

    Sleep(100);
    Color(14,0);
    printf("\nFaillite\n\n");
    Color(3,0);
    printf("- Un.e joueur.euse est en faillite lorsqu'il doit plus qu'il ne peut payer a un autre joueur ou a la Banque. Si sa dette est envers un autre joueur, il doit remettre a ce joueur tout ce qu'il a de valeur et se \nretirer du jeu.\n");
    printf("- Dans le cadre de ce reglement, s'il est propriétaire de maisons ou d'hotels, il doit les restituer a la Banque en echange d'argent a hauteur de la moitie du montant paye et cet argent est remis au creancier.\n");
    printf("- S'il a hypotheque un bien, il remet egalement son bien a ce creancier, mais le nouveau proprietaire doit payer immediatement a la Banque le montant des interets sur le pret, soit 10 pourcents de la valeur du \nbien.\n");
    printf("- Une fois que le nouveau proprietaire l'a fait, il peut, a son gre, payer le capital ou detenir la propriete jusqu'a une date ulterieure a laquelle il peut resilier l'hypotheque. S'il detient des biens de cette facon jusqu'a un tour ulterieur, il/elle doit payer les interets a nouveau lorsqu'il/elle leve l'hypotheque.\n");
    printf("- Si un.e joueur.euse doit a la Banque, au lieu d'un autre joueur, plus que ce qu'il peut payer (en raison de taxes ou de penalitees), meme en vendant ses batiments, en hypothequant sa propriete ou en vendant ou en echangeant avec d'autres joueurs, il doit remettre tous ses biens a la Banque.\n");

    Sleep(100);
    Color(14,0);
    printf("\nDivers \n\n");
    Color(3,0);
    printf("- La Banque ne peut preter de l'argent a un.e joueur.euse qu'en hypothequant un bien immobilier. Aucun.e joueur.euse ne peut emprunter a ou preter de l'argent a un autre joueur.\n");
}
