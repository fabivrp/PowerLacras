#ifndef H_P_CASILLERO_H
#define H_P_CASILLERO_H

#include "colors.h"

class Casillero
{

protected:
    bool ocupado;
    char tipo_casilla;
    //char tipo_objeto;
    
public:

    Casillero(char tipo_casilla);
    bool esta_ocupado();
    virtual void mostrar() = 0;
    virtual void dar_mensaje() = 0;
    char devolver_tipo();

    virtual ~Casillero();

};




#endif //H_P_CASILLERO_H