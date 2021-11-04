#include "fabrica.h"




Fabrica::Fabrica(string nombre, int piedra,int madera,int metal, int cant_max_construidos) : Edificios(nombre,piedra,madera,metal,cant_max_construidos){
    this->produccion = 40;
    this->simbolo = 'F';
}

int Fabrica :: cuanto_produce(){
    return  this->produccion;
}