#include "aserradero.h"




Aserradero::Aserradero(int piedra,int madera,int metal, int cant_max_construidos) : Edificios(piedra,madera,metal,cant_max_construidos){
    this->produccion = 25;
    this->simbolo = 'A';
}

int Aserradero :: cuanto_produce(){
    return  this->produccion;
}

