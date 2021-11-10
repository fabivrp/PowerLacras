#ifndef H_P_CASILLERO_H
#define H_P_CASILLERO_H

#include "colors.h"

class Casillero
{
public:
    char tipo_casilla;
    char tipo_objeto;
    
public:

    Casillero(char tipo_casilla);
    virtual void mostrar() = 0;
    
    char devolver_tipo();

};




#endif //H_P_CASILLERO_H