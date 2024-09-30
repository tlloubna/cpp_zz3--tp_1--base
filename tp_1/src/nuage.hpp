#ifndef NUAGE_HPP
#define NUAGE_HPP

#include "point.hpp"
#include "cartesien.hpp"
#include <vector>

class Nuage{
    private:
        std::vector<Point *> points;
    public:
        Nuage()=default;
        Nuage(const Nuage & other ) {
            for (const auto & point : other.points) {
            
            points.push_back(point->clone()); 
        
    }
        }
        void ajouter(const Point & p ){
            points.push_back(p.clone());
        } 
        std::size_t size() const{
            return points.size();
        } 
       ~Nuage(){
        for (Point *point:points){
            delete point;
        }  
       }  
        using iterator =std::vector<Point *>::iterator;
        using const_iterator=std::vector<Point *>::const_iterator;
        iterator begin(){return points.begin();}
        iterator end(){return points.end();}
        const_iterator begin()const {return points.begin();}
        const_iterator end() const{ return points.end();}  
        
}; 
Cartesien barycentre(Nuage n);
class BarycentreCartesien{
    public:
        Cartesien operator()(const Nuage &n) const {
            Cartesien c=barycentre(n);
            return c;

        }
};
class BarycentrePolaire {
    public:
    Polaire operator()(const Nuage & n) const {
        Cartesien c=barycentre(n);
        return c;
    }
};
#endif

