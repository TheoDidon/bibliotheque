#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include <iostream>
#include <vector>

#include "Livre.h"

using namespace std;

class Bibliotheque
{

private:
    string nom;
    string adresse;
    vector<Livre *> livres;/* peut être essayer de faire une liuste chainée*/

/* liste chainée */
    struct Noeud {
        Livre *livre;
        Noeud *suivant;

        Noeud(Livre *livre) : livre(livre), suivant(nullptr){}

    };
    Noeud *livres;
/* choisir entre la liste chainée ou vector avant de faire les methodes en dessous*/
public:
    Bibliotheque();
    Bibliotheque(string nom, string adresse);
    string getNom();
    string getAdresse();
    vector<Livre *> getLivres();
    void setNom(string nom);
    void setAdresse(string adresse);
    void addLivre(Livre *livre);                      /* pas fait */
    void removeLivre(Livre *livre);                   /* pas fait */
    void affiche();                                   /* pas fait */
    void afficheTousLesLivres();                      /* pas fait */
    void afficheLivresParCategorie(string categorie); /* pas fait */
    void demandeLivre(string isbn, Bibliotheque nom); /* pas fait */
};

#endif /* BIBLIOTHEQUE_H */