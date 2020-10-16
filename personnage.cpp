#include "personnage.h"

using namespace std;

//Personnage::Personnage() : m_vie(100), m_mana(100){}
/*Personnage::Personnage()
{
    //m_nom = "Inconnu";
    m_vie = 100;
    m_mana = 100;
}*/

Personnage::Personnage(std::string nom, std::string nomArme, int degatsArme): m_nom(nom), m_vie(100), m_mana(100),m_arme(nomArme, degatsArme)
{
}

Personnage::Personnage(std::string nom): m_nom(nom), m_vie(100), m_mana(100)
{
    //afficherEtat();
}

Personnage::~Personnage()
{
}

void Personnage::constMethode(int param) const
{
}

void Personnage::recevoirDegats(int nbreDegats)
{
    cout << "<< " << m_nom << " reçoit un dégat de " << nbreDegats << " points .! >>" << endl;
    m_vie -= nbreDegats;
    if (m_vie < 0)
    {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage& cible)
{
    cout << "<< " << m_nom << " attaque " << cible.m_nom << " .! >>" << endl;
    cible.recevoirDegats(m_arme.getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    cout << "<< " << m_nom << " boit une potion qui lui redonne " << quantitePotion << " points de vie >>" << endl;
    m_vie += quantitePotion;
    if (m_vie>100)
    {
        m_vie = 100;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    cout << "<< " << m_nom << " change son arme .! >>" << endl;
    m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
    m_arme.afficher();
}

bool Personnage::estVivant() const
{
    return m_vie > 0 ;
}

void Personnage::afficherEtat() const
{
    cout << m_nom << endl;
    cout << "Vie : " << m_vie << endl;
    cout << "Mana : " << m_mana << endl;
    m_arme.afficher();
    cout << endl;
}


//Extra
void Personnage::attaquerAvecMana(Personnage& cible)
{
    cout << "<< " << m_nom << " fait une attaque magique contre " << cible.m_nom << " .! >>" << endl;
    cible.recevoirDegats(80);  //attaque magique coute 80
    m_mana = 0;
}

void Personnage::boirePotionDeMana(int quantiteDeMana)
{
    cout << "<< " << m_nom << " boit une potion de Mana qui lui redonne " << quantiteDeMana << " .! >>" << endl;
    m_mana += quantiteDeMana;
    if (m_mana>100)
    {
        m_mana = 100;
    }
}

//Recharge de Mana avec le temps???
