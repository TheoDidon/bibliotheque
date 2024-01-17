#include"Theatre.h"
#include<iostream>
#include<string>

using namespace std ;


Theatre::Theatre   (int code, string auteur, string titre, string editeur, string isbn, string public_vise, string etats, string siecle){
    this->code = code;
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
    Livre::affiche();
    cout<<"siecle : "<< siecle<< endl;
}                                                                                                         