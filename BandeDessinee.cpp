#include"BandeDessinee.h"

#include<iostream>
#include<string>


BandeDessinee::BandeDessinee (){

}
BandeDessinee::  BandeDessinee (string auteur, string titre, string editeur, string isbn, string public_vise, string etats, string dessinateur){
    this->auteur = auteur;
    this->titre = titre;
    this->editeur = editeur;
    this->isbn = isbn;
    this->public_vise = public_vise;
    this->etats = etats;
    this->dessinateur = dessinateur;
}

string BandeDessinee::getDessinateur (){
     return this->dessinateur;
}

void BandeDessinee::setDessinateur (string dessinateur){
    this->dessinateur = dessinateur;
}

void BandeDessinee::affiche (){
    cout<< "auteur : "<< auteur <<endl;
    cout<< "titre : "<< titre <<endl;
    cout<< "editeur : "<< editeur <<endl;
    cout<< "isbn : "<< isbn <<endl;
    cout<< "public viisé : "<< public_vise <<endl;
    cout<< "etats : "<< etats <<endl;
    cout<<"dessinateur : "<< dessinateur <<endl;
}
