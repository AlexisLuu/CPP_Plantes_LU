#include <iostream>
#include "Plante.h"
#include "Plantes.h"

using namespace std;

int main(){
    char plantName[50];
    int userInput;

    std::cout << "La plante s'appelle... ?" << std::endl;
    cin >> plantName;
    
    if (userInput==1){
    Plante * Plant = new Plante(plantName);
    Plant->affiche();
    Plant->mourir();
    
    }
    
 
   

    return 0;
}
