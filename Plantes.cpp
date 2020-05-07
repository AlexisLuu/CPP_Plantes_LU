#ifndef PLANTES_CPP
#define PLANTES_CPP

#include "Plantes.h"
#include <string>
#include <iostream>


        Plantes::Plantes(std::string name) : _nom(name), _sante(0), _taille(0), _soif(0) {}
        
         void Plantes::engrais(){
            _sante-=10;
            if(_sante<0) _sante=0;
            _soif+=10;
        }
        
        void Plantes::tailler(int centimetres){
            _taille-=centimetres;
            if(_taille<0) _taille=0;
        }
        
        void Plantes::arroser(int eau){
            _soif-=eau;
            if(_soif<0) _soif=0;
        }
        
        void Plantes::affiche(){
            std::cout << "La plante s'appelle "  << _nom << " a une sante de " << _sante <<"/100 , une taille de " << _taille << " et une soif de " << _soif <<"/100" << std::endl
        ;}

#endif