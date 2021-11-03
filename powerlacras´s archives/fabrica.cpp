#include "fabrica.h"




Fabrica::Fabrica(int piedra,int madera,int metal, int cant_max_construidos) : Edificios(piedra,madera,metal,cant_max_construidos){
    this->produccion = 40;
    this->simbolo = 'F';
}

int Fabrica :: cuanto_produce(){
    return  this->produccion;
}

