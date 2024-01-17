#include"Livre.h"
#include<iostream>
#include<string>

using namespace std;


Livre::Livre(){
}

Livre::Livre(int code, string auteur, string titre, string editeur, string isbn, string public_vise, string etats){
    this->code = code;
    this->auteur = auteur;
    this->titre = titre;
    this->editeur = editeur;
    this->isbn = isbn;
    this->public_vise = public_vise;
    this->etats = etats;

}

void Livre::affiche(){
    cout<< "code : "<< code <<endl;
    cout<< "auteur : "<< auteur <<endl;
    cout<< "titre : "<< titre <<endl;
    cout<< "editeur : "<< editeur <<endl;
    cout<< "isbn : "<< isbn <<endl;
    cout<< "public viisé : "<< public_vise <<endl;
    cout<< "etats : "<< etats <<endl;
}

string Livre::getAuteur(){
    return this->auteur;
}

string Livre::getTitre(){
    return this->titre;
}
string Livre::getEditeur(){
    return this->editeur;
}

string Livre::getIsbn(){
    return this->isbn;
}
 string Livre::getPublic(){
    return this->public_vise;
 }
string Livre::getEtats(){
    return this->etats;
}

void    Livre::setAuteur   (string auteur){
    this->auteur = auteur;
}                                                                            
void    Livre::setTitre    (string titre){
    this->titre = titre;
}                                                                            
void    Livre::setEditeur  (string editeur){
    this->editeur = editeur;
}    
void    Livre::setIsbn     (string isbn){
    this->isbn = isbn;
}                                  
void    Livre::setPublic   (string public_vise){
    this->public_vise = public_vise;
} 
void    Livre::setEtats    (string etats){
    this->etats = etats;
}         