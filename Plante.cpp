#ifndef PLANTE_CPP
#define PLANTE_CPP

#include "Plante.h"
#include <string>
#include <iostream>


    Plante::Plante(std::string name) : Plantes(name) {}
    
        void Plante::engrais(){
            _sante-=10;
            if(_sante<0) _sante=0;
            _soif+=10;
        }
        
        void Plante::tailler(int centimetres){
            _taille-=centimetres;
            if(_taille<0) _taille=0;
        }
        
        void Plante::arroser(int eau){
            _soif-=eau;
            if(_soif<0) _soif=0;
        }
        
        void Plante::mourir(){
            std::cout << _nom << "meurt" << std::endl;
        }
        
        void Plante::affiche(){
            std::cout << "La Plante s'appelle "  << _nom << " a une sante de " << _sante <<"/100 , une taille de " << _taille << "/100 et une soif de " << _soif <<"/100" << std::endl
        ;}
    