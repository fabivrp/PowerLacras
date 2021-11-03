#include "escuela.h"




Escuela::Escuela(int piedra,int madera,int metal, int cant_max_construidos) : Edificios(piedra,madera,metal,cant_max_construidos){
    this->produccion = 0;
    this->simbolo = 'E';
}

int Escuela :: cuanto_produce(){
    return  this->produccion;
}

