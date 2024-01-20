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
    bool LivreDansLaBiblioteque (string isbn, Bibliotheque biblio); /* savoir si un livre est un livre d'un bibliotheque a partire de son isbn */
    Livre livreParIsbn (string isbn, Bibliotheque biblio); /* renvoie le livre correspondant a l'isbn si celui ci est dans la biblio*/
    void demandeLivre(string isbn, Bibliotheque nom); /* pas fait */
    void preteLivre (Livre livre, Bibliotheque nom);
    bool estlibre(Livre livre);
    void rendreLivre(Livre livre);
    void supprimeLivre (int code);
    friend ostream& operator<<(ostream& out, const Bibliotheque& b);
};

#endif /* BIBLIOTHEQUE_H */