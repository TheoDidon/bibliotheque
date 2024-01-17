#include"Album.h"

#include<iostream>
#include<string>

using namespace std;

Album::Album  (int code; string auteur, string titre, string editeur, string isbn, string public_vise, string etats, string illustration){
    this->code = code;
    this->auteur = auteur;
    this->titre = titre;
    this->editeur = editeur;
    this->isbn = isbn;
    this-> public_vise = public_vise;
    this->etats = etats;
    this->illustration = illustration;
} 
string  Album::getIllustration(){
    return this->illustration;
}                                                     
void    Album::setIllustration(){
    this->illustration = illustration;
}                                          
void    Album::affiche (){
    cout<< "auteur : "<< auteur <<endl;
    cout<< "titre : "<< titre <<endl;
    cout<< "editeur : "<< editeur <<endl;
    cout<< "isbn : "<< isbn <<endl;
    cout<< "public viisé : "<< public_vise <<endl;
    cout<< "etats : "<< etats <<endl;
    cout<<"illustration : "<< illustration<< endl;
}