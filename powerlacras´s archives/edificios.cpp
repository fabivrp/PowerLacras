#include "edificios.h"


Edificios :: Edificios(int piedra,int madera, int metal, int cant_max_construidos ) : Casilleroc(tipo_casilla){
    this->piedra = piedra;
    this->madera = madera;
    this->metal = metal;
    this->cant_max_construidos = cant_max_construidos;
    this->cant_construidos = 0;


}

void Edificios :: aumentar_construidos(){
     this->cant_construidos++;
}

int Edificios :: devolver_construidos(){
    return this->cant_construidos;
}