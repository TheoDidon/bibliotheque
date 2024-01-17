#ifndef ADHERENT_H
#define ADHERENT_H

#include <iostream>
#include "Bibliotheque.h"

using namespace std;

class Adherent {
private:
    string          nom             ;
    string          prenom          ;
    string          adresse         ;
    int             id_adherent     ;
    int             nb_emprunt_max  ;
    Bibliotheque    bibliotheque    ;
    int             nb_emprunt_en_cours;
    bool            peutEmpruter();

public:
                    Adherent(string nom, string prenom, string adresse,int id_adherent, int nb_emprunt_max, Bibliotheque bibliotheque)  ;
    string          getNom()                                                                                                            ;
    string          getprenom()                                                                                                         ;
    string          getAdresse()                                                                                                        ;
    int             getId()                                                                                                             ;
    int             getNbEmpruntMax()                                                                                                   ;
    Bibliotheque    getBibliotheque()                                                                                                   ;
    void            setNom(string nom)                                                                                                  ;
    void            setPrenom(string prenom)                                                                                            ;
    void            setAdresse(string adresse)                                                                                          ;
    void            setId(int id_adherent)                                                                                              ;
    void            setNbEmpruntMax(int nb_emprunt_max)                                                                                 ;
    void            setBibliotheque(Bibliotheque bibliotheque)                                                                          ;
    friend ostream& operator<<(ostream& out, const Adherent& a)                                                                         ;
    void            emprunte(int code); /* pas fait */
};

#endif /* ADHERENT_H */