#include"Adherent.h"
#include"Bibliotheque.h"
#include"BandeDessinee.h"
#include"Album.h"
#include "Roman.h"
#include<iostream>
#include<string>

using namespace std;


int main () {

    /*test bibliotheque*/
    Bibliotheque testbiblio = Bibliotheque("test_nom", "test_adresse");

    /*test Adherent */
    Adherent ad = Adherent( "test_nom", "test_prenom","test_adressse",10,testbiblio);
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

    cout<<"affichage de tous les livres"<<endl;
    testbiblio.afficheTousLesLivres();
    //cout<<"affichage par catégorie"<<endl;
    //testbiblio.afficheLivresParCategorie();  pb faurt définir ce que sont les catégories


    Bibliotheque municipale = Bibliotheque("Municipale","adresse biblio municipale");
    Adherent a1 = Adherent("dupont","pierre","adresse a1",10, municipale);
    Adherent a2 = Adherent("dupont","Paul","adresse a2",10, municipale);
    Adherent a3 = Adherent("dupont","Jacques","adresse a3",10, municipale);
    Livre l1 = Livre(0001,"Victor Hugo","Les misérables","édition jungle","isbn_au_pif","ado/adulte","emprunte");
    Livre l2 = Livre(0002,"Stendhal","Le rouge et le Noir","folio classique","isbn_au_pif_2","adulte","libre");
    Album l3 = Album(0003,"Pesquet","La terre entre nos main","Flamarion","isbn_au_pif_3","tous_publics","libre","photos de Pesquet");
    BandeDessinee l4 = BandeDessinee(0004,"René Goscinny","Astérix le gaulois","hachette","isbn_au_pif_4","enfance","libre","Albert Uderzo");

    municipale.addLivre(l1);
    municipale.addLivre(l2);
    municipale.addLivre(l3);
    municipale.addLivre(l4);

    a1.afficheEmprunt();
    a1.emprunte(0002);
    a1.afficheEmprunt();

    if (municipale.estlibre(l1)){
        cout << "Il est libre" << endl;
    }

    return 0;
}


