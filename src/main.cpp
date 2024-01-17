#include"Adherent.h"
#include"Bibliotheque.h"
#include<iostream>
#include<string>

using namespace std;

void menu();
void creeradherent();

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



    /* piqué sur l'autre projet */

    void menu(){
    bool continuer = true;
    int choix = 0;
    do{
        cout << "===== Menu =====" << endl;
        cout << "1) créer un adhérent" << endl;
        cout << "2) Afficher toutes les bibliothèques" << endl;
        cout << "3) " << endl;

        cout << "Votre choix : ";
        cin >> choix;

        switch(choix){
            case 1:
                creeradherent();
                break;
            case 2:
                tests();
                break;
            case 3:
                fixture();
                break;
            default:
                cout << endl <<  "ERREUR veuillez reessayer" << endl;
        }

        cout << endl;
    }while(continuer);
    }
void creeradherent(){
    

}
    return 0;
}
