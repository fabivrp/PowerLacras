#include "casillero.h"


Casillero :: Casillero(char tipo_casilla){
    this->tipo_casilla = tipo_casilla;
    if (tipo_casilla != 'L' && tipo_casilla != 'T' && tipo_casilla != 'C' ){
        this->ocupado = true;
    }
    else this->ocupado = false;
}

char Casillero :: devolver_tipo(){
    return this->tipo_casilla;
}

bool Casillero :: esta_ocupado(){
    return ocupado;
}

