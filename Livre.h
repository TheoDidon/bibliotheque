#ifndef LIVRE_H
#define LIVRE_H

#include <iostream>

using namespace std;

class Livre {

    protected :

    int code;
    string auteur;
    string titre;
    string editeur;
    string isbn;
    string public_vise;
    string etats;

    public :

    Livre ();
    Livre (string auteur, string titre, string editeur, string isbn, string public_vise, string etats);
    void affiche();

    string getAuteur ();
    string getTitre ();
    string getEditeur ();
    string getIsbn ();
    string getPublic ();
    string getEtats ();

    void setAuteur (string auteur);
    void setTitre (string titre);
    void setEditeur (string editeur);
    void setIsbn (string isbn);
    void setPublic (string public_vise);
    void setEtats (string etats);
};

#endif /* LIVRE_H */