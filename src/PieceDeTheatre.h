#ifndef PIECHEDETHEATRE_H_
#define PIECHEDETHEATRE_H_

#include <iostream>

#include"Livre.h"

using namespace std;

class PieceDeTheatre : public Livre {
private : 
    int siecle;

public:
            PieceDeTheatre  (string auteur, string titre, string editeur, string isbn, string public_vise, string etats, int siecle);
    int     getSiecle       ()                                                                                                      ;
    void    setSiecle       (int siecle)                                                                                            ;
    void    affiche         ()                                                                                                      ;
};

#endif /* PIECHEDETHEATRE_H_ */