#include "Inventaire.h"
#include "Livre.h"

Inventaire::Inventaire(){
    head = nullptr;
}

Inventaire::Inventaire(const Inventaire& inventaire){
    head = inventaire.head;
}

Inventaire::~Inventaire() {
    Noeud* current = head;

    while( current != nullptr ) {
        Noeud* step = current;
        current = current->getSuivant();
        delete step;
    }
}

Noeud* Inventaire::getHead(){
    return head;
}


void Inventaire::setHead(Noeud* newhead) {
    head = newhead;
}

void Inventaire::ajoute(Livre l) {

    Noeud* nouveauNoeud = new Noeud(l);     // on peut le construire comme ceci comme on le delete dans le destructeur

    if( head == nullptr ) {
        nouveauNoeud->setSuivant(head);
        head = nouveauNoeud;
    }

    else {
        Noeud* current = head;

        while ( current->getSuivant() != nullptr ) {
            current = current->getSuivant();
        }
        nouveauNoeud->setSuivant(current->getSuivant());
        current->setSuivant(nouveauNoeud);
    }
}

void Inventaire::enleve() {

    if ( head == nullptr ) {
        return;
    }

    if ( head->getSuivant()== nullptr ) {
        delete head;
        head = nullptr;
        return;
    }

    Noeud* current = head;

    while ( current->getSuivant()->getSuivant() != nullptr ) {
        current = current->getSuivant();
    }
    delete current->getSuivant();
    current->setSuivant(nullptr);
}

void Inventaire::affiche() {
    
    Noeud* current = head;

    if ( current == nullptr ) {
        printf("\nVotre inventaire est vide\n");
    }

    else {
        while ( current->getSuivant() != nullptr ) {
            current->getLivre().affiche();
            current = current->getSuivant();
        }

        current->getLivre().affiche();
    }

}