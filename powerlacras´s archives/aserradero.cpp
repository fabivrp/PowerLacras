#include "aserradero.h"




Aserradero::Aserradero(string nombre,int piedra,int madera,int metal, int cant_max_construidos) : Edificios(nombre,piedra,madera,metal,cant_max_construidos){
    this->produccion = 25;
    this->simbolo = 'A';
}

int Aserradero :: cuanto_produce(){
    return  this->produccion;
}

const string Aserradero :: tipo_produccion(){

    return TIPO_PRODUCCION_ASERRADERO;
}

