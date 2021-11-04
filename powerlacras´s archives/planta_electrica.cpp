#include "planta_electrica.h"



Planta_electrica::Planta_electrica(string nombre,int piedra,int madera,int metal, int cant_max_construidos) : Edificios(nombre,piedra,madera,metal,cant_max_construidos){
    this->produccion = 0;
    this->simbolo = 'P';
}

int Planta_electrica :: cuanto_produce(){
    return  this->produccion;
}
