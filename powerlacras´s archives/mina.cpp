#include "mina.h"




Mina::Mina(int piedra,int madera,int metal, int cant_max_construidos) : Edificios(piedra,madera,metal,cant_max_construidos){
    this->produccion = 15;
    this->simbolo = 'M';
}

int Mina :: cuanto_produce(){
    return  this->produccion;
}

