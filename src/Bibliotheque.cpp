#include"Bibliotheque.h"

#include<iostream>
#include<string>

Bibliotheque::Bibliotheque(){
}
Bibliotheque::Bibliotheque(string nom,string  adresse){
    nom = this->nom;
    adresse = this->adresse;
}
string Bibliotheque::getNom(){
    return this->nom;
}
string Bibliotheque::getAdresse(){
    return this->adresse;
}

vector<Livre*> Bibliotheque::getLivres(){
    return this->livres;
}
void Bibliotheque::setNom(string nom){
    this->nom = nom;
}

void Bibliotheque::setAdresse(string adresse){
    this->adresse = adresse;
}
