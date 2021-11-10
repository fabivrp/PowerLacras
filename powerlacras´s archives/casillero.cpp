#include "casillero.h"


Casillero :: Casillero(char tipo_casilla){
    this->tipo_casilla = tipo_casilla;
}

char Casillero :: devolver_tipo(){
    return this->tipo_casilla;
}

