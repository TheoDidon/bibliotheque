#include"Adherent.h"
#include"Bibliotheque.h"
#include "Roman.h"
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
    cout << ad;

    Livre livre1 = Livre(1, "Theo", "Theo fait du bateau", "bayard", "0a", "adulte", "libre");
    Roman livre2 = Roman(2, "Cyril", "Cyril fait du bateau", "delcourt", "0b", "adulte", "libre", "roman policier");
    Roman livre3 = Roman(3, "Baptiste", "Baptiste fait du bateau", "bayard", "0c", "adulte", "libre", "roman policier");
    Roman livre4 = Roman(4, "Lucas", "Lucas fait du bateau", "delcourt", "0d", "adulte", "libre", "roman policier");

    // livre1.affiche();
    // livre2.affiche();
    // livre3.affiche();
    // livre4.affiche();

    testbiblio.addLivre(livre1);
    testbiblio.addLivre(livre2);
    testbiblio.addLivre(livre3);
    testbiblio.addLivre(livre4);

    testbiblio.afficheTousLesLivres();



    /* piqué sur l'autre projet 

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
    cout<<"création d'un adhérent"<< endl;
    cout<<"entrez le nom"<< endl;
    cin >> nom ;
    cout<<"entrez le prenom"<<endl;
    cin >> prenom;
    cout<<"entrez l'adresse"<<endl;
    cin >> adresse;
    cout<<"entrez le nombre d'emprunt maximal"<<endl;
    cin >> nb_emprunt_max;
    cout>>"entrez le nom de la bibliothèque"<<endl;
    cin >> nom_biblio;
*/


    return 0;
}
