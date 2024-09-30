#include <cstdlib>
#include "vecteur.hpp"
#include <iostream>

int main() {
 Vecteur v(1);
 for (int x=0; x<10;x++){
    v.ajouter(x);
 } 
//std::cout<<"Ajout :"<<v;
 v.retirer(0);
 //std::cout<<"Apres :"<<v;
 //tester l'operateur de l'addition :
 Vecteur v2(1);
 for (int i=11;i<20;i++) {
   v2.ajouter(i);
 }
 Vecteur v3=v+v2;
 //std::cout<<"Vecteur somme:"<<v3;
int v4=v*v2;
//std::cout<<"Vecteur produit sclaire :"<<v4<<std::endl;
std::cout<<"Test lecture"<<std::endl;
for (int i=0 ;i<v.getTaille();i++) {
   //std::cout<<"("<<i<<":"<<v[i]<<')'<<std::endl;
}

//tester
//std::cout<<"Test ecriture"<<std::endl;
for (int i=0;i<v.getTaille();i++) {
   v[i]=10;
}
//std::cout<<"ça marche ^^:"<<v;

/************Test Iterator ************ */
Vecteur v_test(15);
//remplir le tableau :
for (int i=0;i<14;i++) {
   v_test.ajouter(i);
}
std::cout <<v_test;
//tester l'incrementation prefixe ++it;
//incrementer ouis retourner
std::cout<<"Utilisation de l'iterateur  "<<std::endl;
std::cout<<std::endl;

std::cout<<"Prefixe  "<<std::endl;

for (Iterateur it=v_test.begin();it!=v_test.end();++it) {
   std::cout <<*it<<" ";
}
std::cout<<std::endl;
std::cout<<"Postfixe  "<<std::endl;
for (Iterateur it=v_test.begin();it!=v_test.end();it++) {
   std::cout <<*it<<" ";
}
std::cout<<std::endl;



return EXIT_SUCCESS;
}
