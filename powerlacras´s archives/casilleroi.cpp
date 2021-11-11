#include "casilleroi.h"


Casilleroi::Casilleroi(char tipo_casilla) : Casillero(tipo_casilla) {}

void Casilleroi :: mostrar(){
   
   cout << BGND_LIGHT_BLUE_33 << " "<< this-> tipo_casilla<<" " << END_COLOR;
}

void Casilleroi :: dar_mensaje(){

   cout << "La casilla es de tipo lago, no puedes construir sobre un cuerpo de agua " << endl;
}


