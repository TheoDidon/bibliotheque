#include"Theatre.h"
#include<iostream>
#include<string>

using namespace std ;


Theatre::Theatre   (int code, string auteur, string titre, string editeur, string isbn, string public_vise, string etats, string categorie, string siecle) : Livre(code, auteur, titre, editeur, isbn, public_vise, etats, categorie){
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