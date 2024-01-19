#include"Bibliotheque.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


bool Bibliotheque::categorieExiste(string cat){

    vector<string>categoriesExistantes;
    categoriesExistantes.push_back("album");
    categoriesExistantes.push_back("bande-dessinee");
    categoriesExistantes.push_back("roman");
    categoriesExistantes.push_back("poesie");
    categoriesExistantes.push_back("theatre");
    
    return find(categoriesExistantes.begin(), categoriesExistantes.end(), cat) != categoriesExistantes.end();
}

Bibliotheque::Bibliotheque(){
    nom = "Nom par defaut";
    adresse = "La ou elle est";
    inventaire = Inventaire();
}

Bibliotheque::Bibliotheque(string nom, string  adresse){
    nom = this->nom;
    adresse = this->adresse;
    inventaire = Inventaire();
}

string Bibliotheque::getNom(){
    return this->nom;
}

string Bibliotheque::getAdresse(){
    return this->adresse;
}

Inventaire Bibliotheque::getLivres(){
    return this->inventaire;
}

void Bibliotheque::setNom(string nom){
    this->nom = nom;
}

void Bibliotheque::setAdresse(string adresse){
    this->adresse = adresse;
}

void Bibliotheque::addLivre(Livre livre){
    inventaire.ajoute(livre);
}

void Bibliotheque::removeLivre(Livre livre){
    inventaire.enleve(livre);
}

void Bibliotheque::afficheTousLesLivres(){
    inventaire.affiche();
}

ostream& operator<<(ostream& out, Bibliotheque b){
    out << "nom : ";
    out << b.getNom() << endl; 
    out << "adresse : ";
    out << b.getAdresse() << endl;
    return out;
}

void Bibliotheque::afficheLivresParCategorie(string categorie){
    try{
        if( !categorieExiste(categorie) ){
            throw runtime_error("Cette catégorie n'existe pas, essayez de mettre la catégorie en minuscule et sans accent");
        }
        else{

            Noeud* current = inventaire.getHead();
            
            while( current!= nullptr ){
            
                Livre livre = current->getLivre();
            
                if( livre.getCategorie() == categorie ){
                    livre.affiche();
                }
                current = current->getSuivant();
            }
        }
    }
    catch( exception& e){
        cerr << "Erreur : " << e.what() << '\n';
    }
}