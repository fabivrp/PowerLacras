#include "escuela.h"




Escuela::Escuela(string nombre,int piedra,int madera,int metal, int cant_max_construidos) : Edificios(nombre,piedra,madera,metal,cant_max_construidos){
    this->produccion = 0;
    this->simbolo = 'E';
}


const string Escuela :: tipo_produccion(){
    return TIPO_PRODUCCION_ESCUELA;
}
void Escuela :: imprimir_mensaje(){
    cout << "tiene una Escuela construida" << endl;
}

