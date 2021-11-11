#include "obelisco.h"

Obelisco::Obelisco(string nombre,int piedra,int madera,int metal, int cant_max_construidos) : Edificios(nombre,piedra,madera,metal,cant_max_construidos){
    
    this->produccion = NO_PRODUCE;
    this->simbolo = OBELISCO;
}

const string Obelisco :: tipo_produccion(){
    
    return TIPO_PRODUCCION_OBELISCO;
}

void Obelisco :: imprimir_mensaje(){
    
    cout << "tiene un Obelisco construida" << endl;
}
