#include "planta_electrica.h"



Planta_electrica::Planta_electrica(string nombre,int piedra,int madera,int metal, int cant_max_construidos) : Edificios(nombre,piedra,madera,metal,cant_max_construidos){
    this->produccion = 0;
    this->simbolo = 'P';
}

const string Planta_electrica :: tipo_produccion(){
    return TIPO_PRODUCCION_PLANTA;
}

int Planta_electrica :: cuanto_produce(){
    return  this->produccion;
}

