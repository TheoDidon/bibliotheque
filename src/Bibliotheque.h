#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include <iostream>
#include <vector>

#include "Livre.h"
#include "Inventaire.h"

using namespace std;

class Bibliotheque
{

private:
    string nom;
    string adresse;
    Inventaire inventaire;
    bool categorieExiste(string categorie);

public:
    Bibliotheque();
    Bibliotheque(string nom, string adresse);
    string getNom();
    string getAdresse();
    Inventaire getLivres();
    void setNom(string nom);
    void setAdresse(string adresse);
    void addLivre(Livre livre);                      
    void removeLivre(Livre livre);                   
    void affiche();                               
    void afficheTousLesLivres();                      
    void afficheLivresParCategorie(string categorie); 
    void demandeLivre(string isbn, Bibliotheque nom); /* pas fait */
    bool estlibre(Livre livre);/* pas fait */
    void rendrelivres();
    friend ostream& operator<<(ostream& out, const Bibliotheque& b)                                                                         ;
};

#endif /* BIBLIOTHEQUE_H */