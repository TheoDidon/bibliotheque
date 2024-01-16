#include"Theatre.h"
#include<iostream>
#include<string>

using namespace std ;


Theatre::Theatre   (string auteur, string titre, string editeur, string isbn, string public_vise, string etats, string siecle){
    this->auteur = auteur;
    this->titre = titre;
    this->editeur = editeur;
    this->isbn = isbn ;
    this->public_vise = public_vise ;
    this->etats = etats;
    this->siecle = siecle ;

}
string  Theatre::getSiecle(){
    return this->siecle;
}                                                                                                         
void    Theatre::setSiecle(string siecle) {
    this->siecle =siecle;
}                                                                                           
void    Theatre::affiche () {
    cout<< "auteur : "<< auteur <<endl;
    cout<< "titre : "<< titre <<endl;
    cout<< "editeur : "<< editeur <<endl;
    cout<< "isbn : "<< isbn <<endl;
    cout<< "public viisé : "<< public_vise <<endl;
    cout<< "etats : "<< etats <<endl;
    cout<<"siecle : "<< siecle<< endl;

}                                                                                                         