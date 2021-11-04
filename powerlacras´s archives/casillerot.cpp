#include "casillerot.h"



Casillerot::Casillerot(char tipo_casilla) : Casillero(tipo_casilla) {
}

void Casillerot :: mostrar(){
    cout << this->tipo_casilla;
}
