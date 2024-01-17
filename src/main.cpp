#include"Adherent.h"
#include"Bibliotheque.h"

#include<iostream>
#include<string>

using namespace std;


int main () {

    /*test bibliotheque*/
    Bibliotheque testbiblio = Bibliotheque("test_nom", "test_adresse");

    /*test Adherent */
    Adherent ad = Adherent( "test_nom", "test_prenom","test_adressse",0,10,testbiblio);
    string nom = ad.getNom();
    cout<< "nom initial"<< nom << endl;
    ad.setNom("tt");
    nom = ad.getNom();
    cout<< "nom modifié"<< nom << endl;

    return 0;
}
