#ifndef DEF_ARME
#define DEF_ARME

#include <iostream>
#include <string>

class Arme
{
    //Attributs
    std::string m_nom;
    int m_degats;

    //Méthodes
public:
    Arme();
    Arme(std::string nom, int degats);
    void changer(std::string nom, int degats);
    void afficher() const;
    int getDegats() const;
};
#endif // DEF_ARME
