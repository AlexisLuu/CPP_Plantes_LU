#ifndef BONTANISTE_CPP
#define BOTANISTE_CPP

#include "Botaniste.h"
#include <string>
#include <iostream>


    Botaniste::Botaniste(std::string name) : Botaniste(name) {}
    
        void Botaniste::dormir(int heures){
            _fatigue-=10;
            if(_fatigue<0) _fatigue=0;
        }
        
        void Botaniste::argent(){
            _argent-=10;
            if(_argent<0) _argent=0;
        }
   
    