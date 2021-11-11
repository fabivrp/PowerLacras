#include "escuela.h"




Escuela::Escuela(string nombre,int piedra,int madera,int metal, int cant_max_construidos) : Edificios(nombre,piedra,madera,metal,cant_max_construidos){
    this->produccion = PRODUCCION_ESCUELA;
    this->simbolo = ESCUELA;
}

int Escuela :: cuanto_produce(){
    return  this->produccion;
}

const string Escuela :: tipo_produccion(){
    return TIPO_PRODUCCION_ESCUELA;
}

