#include "personnage.h"
#include "arme.h"

#include <iostream>

using namespace std;

int main()
{
    Personnage kaouther("Kaouther"), salha("Salha","essai arme", 20);
    kaouther.boirePotionDeMana(50);
    kaouther.attaquer(salha);
    salha.boirePotionDeVie(50);
    salha.estVivant();
    salha.attaquer(kaouther);

    kaouther.afficherEtat();
    salha.afficherEtat();

    kaouther.changerArme("Pistolet", 50);
    Personnage inconnu;

    kaouther.attaquerAvecMana(inconnu);
    inconnu.afficherEtat();
    kaouther.afficherEtat();
    return 0;
}
