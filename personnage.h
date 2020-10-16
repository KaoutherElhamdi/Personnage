#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>
#include "Arme.h"

class Personnage
{
    // Attributs
    private:
        std::string m_nom;
    int m_vie;
    int m_mana;
    Arme m_arme;

    // Méthodes
    public:
    //Personnage(); //Constructeur
    Personnage(std::string nom, std::string nomArme, int degatsArme);
    Personnage(std::string nom = "Inconnu");
    ~Personnage();
    void constMethode(int param) const;
    void recevoirDegats(int nbreDegats);
    void attaquer(Personnage& cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
    void afficherEtat() const;
    //Extra
    void attaquerAvecMana(Personnage& cible);
    void boirePotionDeMana(int quantiteDeMana);
};

#endif // DEF_PERSONNAGE
