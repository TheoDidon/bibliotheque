#include"Roman.h"
#include<iostream>
#include<string>

using namespace std;

Roman::Roman   (int code, string auteur, string titre, string editeur, string isbn, string public_vise, string etats, string genre){
    this->code = code;
    this->auteur = auteur;
    this->titre = titre;
    this->editeur = editeur;
    this->isbn = isbn ;
    this->public_vise = public_vise ;
    this->etats = etats;
    this->genre = genre ;
}
string  Roman::getGenre(){
    return this->genre;
}                                                                                                          
void    Roman::setGenre(string genre){
    this->genre = genre;
}                                                                         
void    Roman::affiche (){
    cout<< "auteur : "<< auteur <<endl;
    cout<< "titre : "<< titre <<endl;
    cout<< "editeur : "<< editeur <<endl;
    cout<< "isbn : "<< isbn <<endl;
    cout<< "public viisé : "<< public_vise <<endl;
    cout<< "etats : "<< etats <<endl;
    cout<<"genre : "<< genre<< endl;
}