#include "mina.h"




Mina::Mina(string nombre, int piedra,int madera,int metal, int cant_max_construidos) : Edificios(nombre,piedra,madera,metal,cant_max_construidos){
    
    this->produccion = PRODUCCION_MINA;
    this->simbolo = MINA;
}



const string Mina:: tipo_produccion(){
    
    return TIPO_PRODUCCION_MINA;
}
void Mina :: imprimir_mensaje(){
    
    cout << "tiene una Mina construida" << endl;
}

