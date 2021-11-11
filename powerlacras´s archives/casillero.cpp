#include "casillero.h"


Casillero :: Casillero(char tipo_casilla){
    
    this->tipo_casilla = tipo_casilla;
    if (tipo_casilla != LAGO && tipo_casilla != TERRENO && tipo_casilla != CAMINO ){
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

Casillero :: ~Casillero(){}

