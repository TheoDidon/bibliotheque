#ifndef BANDEDESSINEE_H_
#define BANDEDESSINEE_H_

#include <iostream>

#include "Livre.h"

using namespace std;

class BandeDessinee : public Livre {

    private :

    string dessinateur;

    public :

    BandeDessinee ();
    BandeDessinee (string auteur, string titre, string editeur, string isbn, string public_vise, string etats, string dessinateur);

    string getDessinateur ();

    void setDessinateur ();

    void affiche ();

};

#endif /* BANDEDESSINEE*/