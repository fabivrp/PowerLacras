#include "escuela.h"




Escuela::Escuela(string nombre,int piedra,int madera,int metal, int cant_max_construidos) : Edificios(nombre,piedra,madera,metal,cant_max_construidos){
    this->produccion = 0;
    this->simbolo = 'E';
}

int Escuela :: cuanto_produce(){
    return  this->produccion;
}

