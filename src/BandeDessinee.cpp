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
    Livre::affiche(); 
    cout<<"dessinateur : "<< dessinateur <<endl;
}
