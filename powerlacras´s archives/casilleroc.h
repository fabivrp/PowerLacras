#ifndef H_P_CASILLEROC_H
#define H_P_CASILLEROC_H

#include "casillero.h"
#include <iostream>
using namespace std;

class Casilleroc: public Casillero{

public:
    
    Casilleroc (char tipo_casilla);
     /*
    *PRE: -
    *POST:Devuleve que es de tipo Terreno si está vacía, en otro caso devuelve el 
    *identificador del edificio que ocupa la casilla.
    */
    void mostrar();
    
    /*
    *PRE: -
    *POST:Muestra al usuario una descripción del tipo de casilla.
    */
    void dar_mensaje();
   
};

#endif //H_P_CASILLEROC_H