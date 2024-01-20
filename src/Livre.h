#ifndef LIVRE_H
#define LIVRE_H

#include <iostream>

using namespace std;

class Livre {

protected:
    int     code        ;
    string  auteur      ;
    string  titre       ;
    string  editeur     ;
    string  isbn        ;
    string  public_vise ;
    string  etats       ;
    string  categorie   ;
    string  nomBiblioOrigine    ;
    string  nomBiblioActuel     ; 
    bool    etasExiste (string etasPropose) ;
    /* au vu des autres fonctions demandées il faut peut être faire un argument avec sa biliotheque d'origine*/

public:
            Livre       ()                                                                                          ;
            Livre       (int code, string auteur, string titre, string editeur, string isbn, string public_vise, string etats, string biblioO, string biblioA);
    void    affiche     ()                                                                                          ;
    int     getCode     ()                                                                                          ;
    string  getAuteur   ()                                                                                          ;
    string  getTitre    ()                                                                                          ;
    string  getEditeur  ()                                                                                          ;
    string  getIsbn     ()                                                                                          ;
    string  getPublic   ()                                                                                          ;
    string  getEtats    ()                                                                                          ;
    string  getCategorie()                                                                                          ;
    string  getNomBiblioOrigine  ()                                                                                 ;
    string  getNomBiblioActuel   ()     ;
    void    setCode     (int code)                                                                                  ;
    void    setAuteur   (string auteur)                                                                             ;
    void    setTitre    (string titre)                                                                              ; 
    void    setEditeur  (string editeur)                                                                            ;
    void    setIsbn     (string isbn)                                                                               ;
    void    setPublic   (string public_vise)                                                                        ;
    void    setEtats    (string etats)                                                                              ;
    void    setCategorie(string categorie)                                                                          ;  
    void    changeEtas  (string nouvelEtas)                                                                         ;
};

#endif /* LIVRE_H */