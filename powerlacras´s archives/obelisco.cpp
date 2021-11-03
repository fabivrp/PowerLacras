#include "obelisco.h"




Obelisco::Obelisco(int piedra,int madera,int metal, int cant_max_construidos) : Edificios(piedra,madera,metal,cant_max_construidos){
    this->produccion = 0;
    this->simbolo = 'O';
}

int Obelisco :: cuanto_produce(){
    return  this->produccion;
}
