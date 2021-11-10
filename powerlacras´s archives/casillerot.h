#ifndef CASILLEROT_H
#define CASILLEROT_H

#include "casillero.h"
#include <iostream>
using namespace std;



class Casillerot : public Casillero{

public:


    Casillerot(char tipo_casilla);
    
    /*
    *PRE: -
    *POST:Reemplaza el tipo de la casilla por el identificador del material indicado.
    */
    void cambiar_contenido( char tipo_nuevo);
    
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




#endif //CASILLEROT_H