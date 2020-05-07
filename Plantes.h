#ifndef PLANTES_H
#define PLANTES_H

#include <string>


class Plantes{
    
    protected:
    
        std::string _nom;
        
        int _sante;
        int _taille;
        int _soif;
        
        
    public:
    
        Plantes(std::string name);
        
        void engrais();
        void tailler(int sante);
        void arroser(int eau);
            
        void affiche();
        
};

#endif