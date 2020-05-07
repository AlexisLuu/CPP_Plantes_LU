#ifndef PLANTE_H
#define PLANTE_H

#include <string>

#include "Plantes.h"

class Plante : {
    
        public:
            
            Plante(std::string name);
            
            void engrais();
            void tailler(int sante);
            void arroser(int eau);
            void mourir();
            
            void affiche();
};


#endif