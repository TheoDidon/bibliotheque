#include"Roman.h"
#include<iostream>
#include<string>

using namespace std;

Roman::Roman(int code, string auteur, string titre, string editeur, string isbn, string public_vise, string etats, string categorie, string genre) : Livre(code, auteur, titre, editeur, isbn, public_vise, etats, categorie){
    this->genre = genre ;
}
string  Roman::getGenre(){
    return this->genre;
}                                                                                                          
void    Roman::setGenre(string genre){
    this->genre = genre;
}                                                                         
void    Roman::affiche (){
    Livre::affiche();
    cout<<"genre : "<< genre<< endl;
}