#ifndef CASILLEROT_H
#define CASILLEROT_H

#include "casillero.h"
#include <iostream>
using namespace std;



class Casillerot : public Casillero{

public:


    Casillerot(char tipo_casilla);
    
    /*
    *PRE:
    *POST:
    */
    void cambiar_contenido( char tipo_nuevo);
    
    /*
    *PRE:
    *POST:
    */
    void mostrar();
    void dar_mensaje();
    
};




#endif //CASILLEROT_H