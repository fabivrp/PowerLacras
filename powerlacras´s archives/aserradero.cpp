#include "aserradero.h"

Aserradero::Aserradero(string nombre,int piedra,int madera,int metal, int cant_max_construidos) : Edificios(nombre,piedra,madera,metal,cant_max_construidos){
    
    this->produccion = PRODUCCION_ASERRADERO;
    this->simbolo = ASERRADERO;
}

const string Aserradero :: tipo_produccion(){
    
    return TIPO_PRODUCCION_ASERRADERO;
}

void Aserradero :: imprimir_mensaje(){
    
    cout << "tiene un Aserradero construido" << endl;
}


