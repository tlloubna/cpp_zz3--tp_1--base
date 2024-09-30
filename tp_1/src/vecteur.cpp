#include "vecteur.hpp"
#include <ostream>
#include <iostream>

Vecteur::Vecteur(int c):elements(new int[c]),Capacite(c),taille(0){}

Vecteur::Vecteur(const Vecteur & v):elements(new int[0]),Capacite(0),taille(0){copier(v);}

void Vecteur::copier(const Vecteur & v){
    if (Capacite<v.taille){
        if(elements ) delete[]  elements;
        Capacite=v.taille;
       
        elements=new int[Capacite]; 

    } 
    taille=v.taille;
    for (int i=0;i<taille;i++){
        elements[i]=v.elements[i]  ;
    } 
} 

std::ostream & Vecteur::afficher(std::ostream &os ) const{

    os<<"La capacité est:" <<Capacite << " de taille " << taille <<std::endl ;
    os<<"les elements de vecteurs sont :  ";
    for (int i=0;i<taille;i++){
        os<<elements[i] <<","; 
    } 
    os <<"\n";
    return os ;
    }  
void Vecteur::ajouter(int e ){
    if (Capacite==taille){
        int  *tab=new int[Capacite*2];
        for (int i=0;i<Capacite;i++){
            tab[i]=elements[i];  
        }                                                                   
        Capacite*=2;
        if (elements ) delete[] elements;
        elements=tab; 
 }
 elements[taille++] =e;
 }

void Vecteur::retirer(int e) {
    int index=-1;
    //retourner le premier occurence de e
    for (int i=0;i<taille;i++) {
        if(e==elements[i]) {
            index=i;
            break;
        }
    }
    //si on le trouve
    if (index ==-1) {
        return ;
    }
    //deplacer les elements vers la gauche de vecteur;
    for (int i=index;i<taille-1;i++) {
        elements[i]=elements[i+1];
    }
    taille--;
    //ne rien retourner
}
Vecteur operator+(const Vecteur &v1,const Vecteur &v2)  {
    Vecteur sum= v1;
    for (int i=0;i<v2.getTaille();i++) {
        sum.ajouter(v2[i]);
    }
    return sum;

}

int operator*(const Vecteur & v1,const Vecteur & v2) {
    int res=0;
    if (v1.getTaille()!=v2.getTaille()) {
        throw std::string("Erreur produit scalaire");
    }
    int taille=v1.getTaille();
    for (int i=0;i<taille;i++) {
        res+=v1[i]*v2[i];
            }
    return res;
}

//Les iterateurs
//prefixe 
/*Cette méthode incrémente
 la position de l'itérateur et retourne 
 une référence à l'itérateur lui-même.
  Cela permet d'utiliser l'itérateur dans
   des expressions comme ++it.*/
Iterateur & Iterateur::operator++() {
    ++position;
    return (*this);
}

//postifixe
/*Cette méthode incrémente la position 
de l'itérateur, mais retourne une copie 
de l'itérateur avant l'incrémentation. 
Cela permet d'utiliser 
l'itérateur dans des expressions comme it++.*/
Iterateur Iterateur::operator++(int ){
    Iterateur i(position);
    ++position;
    return i;
}

//acces à l'element pointé

int Iterateur::operator*() const{
    return * position;

}

//egalité entre deux element

bool Iterateur::operator==(const Iterateur & I) const  {
    return (position==I.position);
}
//non egalite 

bool Iterateur::operator!=(const Iterateur & I) const  {
    return (position!=I.position);
}
