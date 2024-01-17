#include"Album.h"

#include<iostream>
#include<string>

using namespace std;

Album::Album  (string auteur, string titre, string editeur, string isbn, string public_vise, string etats, string illustration){
    this->auteur = auteur;
    this->titre = titre;
    this->editeur = editeur;
    this->isbn = isbn;
    this-> public_vise = public_vise;
    this->etats = etats;
    this->illustration = illustration;
} 
string Album::getIllustration(){
    return this->illustration;
}                                                     
void    Album::setIllustration(){
    this->illustration = illustration;
}                                          
void Album::affiche (){
    Livre::affiche();
    cout<<"illustration : "<< illustration<< endl;
}