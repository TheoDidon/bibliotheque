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
                    Bibliotheque    ()                          ;
                    Bibliotheque    (string nom, string adresse);
    string          getNom          ()                          ;
    string          getAdresse      ()                          ;
    vector<Livre*>  getLivres       ()                          ;
    void            setNom          (string nom)                ;
    void            setAdresse      (string adresse)            ;
    void            addLivre        (Livre *livre)              ;/* pas fait */
    void            removeLivre     (Livre *livre)              ;/* pas fait */
    void            affiche         ()                          ;/* pas fait */
    void            afficheLivres   ()                          ;/* pas fait */
};

#endif /* BIBLIOTHEQUE_H */