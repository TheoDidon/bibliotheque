#include"Poesie.h"
#include<iostream>
#include<string>

using namespace std;

Poesie::Poesie  (int code; string auteur, string titre, string editeur, string isbn, string public_vise, string etats, string style){
    this->code = code;
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
    Livre::affiche();
    cout<<"style : "<< style<< endl;
}