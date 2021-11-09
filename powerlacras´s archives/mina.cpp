#include "mina.h"




Mina::Mina(string nombre, int piedra,int madera,int metal, int cant_max_construidos) : Edificios(nombre,piedra,madera,metal,cant_max_construidos){
    this->produccion = 15;
    this->simbolo = 'M';
}

int Mina :: cuanto_produce(){
    return  this->produccion;
}

const string Mina:: tipo_produccion(){
    return TIPO_PRODUCCION_MINA;
}

