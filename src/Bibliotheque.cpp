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

Inventaire Bibliotheque::getLivres(){
    return this->inventaire;
}

void Bibliotheque::setNom(string nom){
    this->nom = nom;
}

void Bibliotheque::setAdresse(string adresse){
    this->adresse = adresse;
}

void Bibliotheque::addLivre(Livre l){
    inventaire.ajoute(l);
}

void Bibliotheque::removeLivre(Livre livre){
    inventaire.enleve(livre);
}