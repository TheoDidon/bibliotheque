#include "Adherent.h"
#include "Bibliotheque.h"
#include<iostream>
#include<string>

Adherent::Adherent(string nom, string prenom, string adresse,int id_adherent, int nb_emprunt_max, Bibliotheque bibliotheque){
    this->nom = nom;
    this->prenom = prenom;
    this->id_adherent = id_adherent;
    this->nb_emprunt_max = nb_emprunt_max;
    this->bibliotheque = bibliotheque;
}
string Adherent::getNom(){
    return this->nom;
}

string Adherent::getprenom(){
    return this->prenom;
}

string Adherent::getAdresse(){
    return this->adresse;
}

int Adherent:: getId(){
    return this->id_adherent;
}

int Adherent::getNbEmpruntMax(){
    return this->nb_emprunt_max;
}

Bibliotheque Adherent::getBibliotheque(){
    return this->bibliotheque;
}

void Adherent::setNom(string nom){
    this->nom = nom;
}

void Adherent::setPrenom(string prenom){
    this->prenom = prenom;
}

void Adherent::setAdresse(string adresse){
    this->adresse = adresse;
}

void Adherent::setId(int id_adherent){
    this->id_adherent = id_adherent;
}

void Adherent::setNbEmpruntMax(int nb_emprunt_max){
    this->nb_emprunt_max = nb_emprunt_max;
}

void Adherent::setBibliotheque(Bibliotheque biblio){
    this->bibliotheque = biblio;
}
void Adherent::affiche(){
    cout<<"nom : ";
    cout<<this->nom<< endl;
    cout<<"prenom : ";
    cout<<this->prenom<< endl;
    cout<<"adresse : ";
    cout<<this->adresse<< endl;
    cout<<"id adhérent : ";
    cout<<this->id_adherent<< endl;
    cout<<"nombre d'emprunt max : ";
    cout<<this->nb_emprunt_max<< endl;
}