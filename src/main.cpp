#include"Adherent.h"
#include"Bibliotheque.h"
#include"BandeDessinee.h"
#include"Album.h"
#include "Roman.h"
#include<iostream>
#include<string>

using namespace std;

void menu();
void afficherLivreBiblio(Bibliotheque nom);
void adherentEmprunte(int code);

int main () {

    /*données brutes*/
        /*bibliotheques*/
    Bibliotheque testbiblio = Bibliotheque("test_nom", "test_adresse");
    Bibliotheque municipale = Bibliotheque("Municipale","adresse biblio municipale");
        /*adhérents*/
    Adherent a1 = Adherent("dupont","pierre","adresse a1",10, municipale);
    Adherent a2 = Adherent("dupont","Paul","adresse a2",10, municipale);
    Adherent a3 = Adherent("dupont","Jacques","adresse a3",10, municipale);
        /*livres*/
    Livre livre1 = Livre(1, "Theo", "Theo fait du bateau", "bayard", "0a", "adulte", "libre");
    Roman livre2 = Roman(2, "Cyril", "Cyril fait du bateau", "delcourt", "0b", "adulte", "libre", "roman policier");
    Roman livre3 = Roman(3, "Baptiste", "Baptiste fait du bateau", "bayard", "0c", "adulte", "libre", "roman policier");
    Roman livre4 = Roman(4, "Lucas", "Lucas fait du bateau", "delcourt", "0d", "adulte", "libre", "roman policier");
    Livre l1 = Livre(0001,"Victor Hugo","Les misérables","édition jungle","isbn_au_pif","ado/adulte","emprunte");
    Livre l2 = Livre(0002,"Stendhal","Le rouge et le Noir","folio classique","isbn_au_pif_2","adulte","libre");
    Album l3 = Album(0003,"Pesquet","La terre entre nos main","Flamarion","isbn_au_pif_3","tous_publics","libre","photos de Pesquet");
    BandeDessinee l4 = BandeDessinee(0004,"René Goscinny","Astérix le gaulois","hachette","isbn_au_pif_4","enfance","libre","Albert Uderzo");
        /*répatition des livres*/

    testbiblio.addLivre(livre1);
    testbiblio.addLivre(livre2);
    testbiblio.addLivre(livre3);
    testbiblio.addLivre(livre4);
    municipale.addLivre(l1);
    municipale.addLivre(l2);
    municipale.addLivre(l3);
    municipale.addLivre(l4);

        /*      MENU    */ /* le menu marche pas je bidouille*/

cout << "1) Afficher tous les livres d'une bibliotheque" << endl;
municipale.afficheTousLesLivres();

cout << "2) un adhérent emprunte un livre" << endl;

    cout<<"livres empruntés par l'adhérent avant"<<endl;
        a1.afficheEmprunt();
        a1.emprunte(1);
        cout<<"livres empruntés par l'adhérent après"<<endl;
        a1.afficheEmprunt();

cout << "3) un adhérent rend un livre" << endl; /* pas de fonction rendre livre pour un adherent*/



cout << "4) une bibliotheque demande un livre à une autre " << endl;
    cout<<"tous les livres de la bibliotheque avant emprunt"<<endl;
    municipale.afficheTousLesLivres();
    municipale.demandeLivre("0a", testbiblio);
    cout<<"tous les livres de la bibliotheque après emprunt"<<endl;
    municipale.afficheTousLesLivres();

cout << "5) une bibliotheque achète un nouveau livre" << endl;
    Livre livreacheté = Livre(5, "auteurtoto", "toto","editeurtoto","isbntoto","touspublics","libre");
    cout<<"tous les livres de la bibliotheque avant achat"<<endl;
    municipale.afficheTousLesLivres();
    municipale.addLivre(livreacheté);
    cout<<"tous les livres de la bibliotheque après achat"<<endl;
    municipale.afficheTousLesLivres();

cout << "6) une bibliotheque supprime un livre" << endl;
   cout<<"tous les livres de la bibliotheque avant suppression"<<endl;
    municipale.afficheTousLesLivres();
    municipale.supprimeLivre(5);
    cout<<"tous les livres de la bibliotheque après suppression"<<endl;
    municipale.afficheTousLesLivres();


cout << "7) une bibliotheque rend les livres libres qui lui sont prêtés" << endl;

    return 0;
}

    void menu(){
    bool continuer = true;
    int choix = 0;
    do{
        cout << "===== Menu =====" << endl;
        cout << "1) Afficher tous les livres d'une bibliotheque" << endl;
        cout << "2) un adhérent emprunte un livre" << endl;
        cout << "3) un adhérent rend un livre" << endl;
        cout << "4) une bibliotheque demande un livre à une autre " << endl;
        cout << "5) une bibliotheque achète un nouveau livre" << endl;
        cout << "6) une bibliotheque supprime un livre" << endl;
        cout << "7) une bibliotheque rend les livres libres qui lui sont prêtés" << endl;

        cout << "Votre choix : ";
        cin >> choix;

        switch(choix){
            case 1:
                afficherLivreBiblio(municipale);
                break;
            case 2:
                adherentEmprunte(1);
                break;
            case 3:
            
                break;
            default:
                cout << endl <<  "#### Choix invalide." << endl;
        }

        cout << endl;
    }while(continuer);
}

void afficherLivreBiblio(Bibliotheque nom){
    nom.afficheTousLesLivres();
}
void adherentEmprunte(int code){
    cout<<"livres empruntés par l'adhérent avant"<<endl;
    a1.afficheEmprunt();
    a1.enprunt(code);
    cout<<"livres empruntés par l'adhérent après"<<endl;
    afficheEmprunt();

}


