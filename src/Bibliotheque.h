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

public:
    Bibliotheque();
    Bibliotheque(string nom, string adresse);
    string getNom();
    string getAdresse();
    vector<Livre *> getLivres();
    void setNom(string nom);
    void setAdresse(string adresse);
    void addLivre(Livre *livre);                      /* pas fait */
    void removeLivre(Livre *livre);                   /* pas fait */ /* vu l'enoncé faudrait que removelivre prenne le code du livre en argument*/
    void affiche();                                   /* pas fait */
    void afficheTousLesLivres();                      /* pas fait */
    void afficheLivresParCategorie(string categorie); /* pas fait */
    void demandeLivre(string isbn, Bibliotheque nom); /* pas fait */
    bool estlibre(Livre livre);/* pas fait */
    void rendrelivres();
};

#endif /* BIBLIOTHEQUE_H */