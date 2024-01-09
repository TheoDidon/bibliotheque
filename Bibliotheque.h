#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include <iostream>
#include <vector>

#include "Livre.h"

using namespace std;

class Bibliotheque {

private:
    string nom              ;
    string adresse          ;
    vector<Livre*> livres   ;

public:
                    Bibliotheque    (string nom, string adresse);
    string          getNom          ()                          ;
    string          getAdresse      ()                          ;
    vector<Livre*>  getLivres       ()                          ;
    void            setNom          (string nom)                ;
    void            setAdresse      (string adresse)            ;
    void            addLivre        (Livre *livre)              ;
    void            removeLivre     (Livre *livre)              ;
    void            affiche         ()                          ;
    void            afficheLivres   ()                          ;
};

#endif /* BIBLIOTHEQUE_H */