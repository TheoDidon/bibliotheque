#include"Poesie.h"
#include<iostream>
#include<string>

using namespace std;

Poesie::Poesie  (string auteur, string titre, string editeur, string isbn, string public_vise, string etats, string style){
    this->auteur = auteur;
    this->titre = titre;
    this->editeur = editeur;
    this->isbn = isbn;
    this->public_vise = public_vise;
    this->etats = etats;
    this->style = style;
}
string  Poesie::getStyle(){
    return this->style;
}                                                                                                          
void    Poesie::setStyle(string style){
    this->style = style;
}                                                                                                     
void    Poesie::affiche (){
    cout<< "auteur : "<< auteur <<endl;
    cout<< "titre : "<< titre <<endl;
    cout<< "editeur : "<< editeur <<endl;
    cout<< "isbn : "<< isbn <<endl;
    cout<< "public viisé : "<< public_vise <<endl;
    cout<< "etats : "<< etats <<endl;
    cout<<"style : "<< style<< endl;
}