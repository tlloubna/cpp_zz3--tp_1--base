#ifndef VECTEUR_HPP
#define VECTEUR_HPP
#include <ostream>

class Iterateur {
    private:
        int * position;
    public:
        Iterateur(int *p):position(p) {}
        //definir les operators:
        Iterateur & operator++();
        Iterateur operator++(int);
        int operator*() const;
        bool operator==(const Iterateur &) const;
        bool operator!=(const Iterateur &) const;

};
class Vecteur{
    private:
        int * elements; //est un pointeur vers le tableau elements
        int Capacite;
        int taille;
    public: //forme coplien 
        //ajouter les iterateurs;
        //on retourne l'iterateur de debut
        Iterateur begin() const {
            return Iterateur(elements);
        }
        //on retourne l'iterateur de la fin 
        Iterateur end() const {
            return Iterateur(elements+taille);
        }
        Vecteur(int c);
        Vecteur(const Vecteur & v);
       ~Vecteur(){delete[] elements; } 
       int getTaille() const {return taille;}
        std::ostream & afficher(std::ostream & os) const ;
        void ajouter(int e);
        void retirer(int e);
        friend std::ostream & operator<<(std::ostream & os,const Vecteur & v){
          
            return v.afficher(os);
        } 
       void copier(const Vecteur &v);
       
       //acces lecture et ecriture 
       int operator[](int i) const {return elements[i];}
       int  & operator[] (int i) {return elements[i];}

       
};
//fonctions
Vecteur operator+(const Vecteur &v1,const Vecteur &v2) ;
int operator*(const Vecteur &v1,const Vecteur & v2) ;

#endif


