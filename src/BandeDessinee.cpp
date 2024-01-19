#include"BandeDessinee.h"

#include<iostream>
#include<string>


BandeDessinee::BandeDessinee(int code, string auteur, string titre, string editeur, string isbn, string public_vise, string etats, string categorie, string dessinateur) : Livre(code, auteur, titre, editeur, isbn, public_vise, etats, categorie){
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
