#include "material.h"

Material::Material(string nombre, int stock){
    this -> nombre = nombre;
    this -> stock = stock;
    if(nombre == "piedra"){
        this->tipo = PIEDRA;
    }
    else if(nombre == "madera"){
        this->tipo = MADERA;
    }
    else if (nombre == "metal"){
        this->tipo = METAL;
    }
    else {
        this->tipo = ' ';
    }
}


void Material::mostrar(){
    cout << "Tipo de material en la casila: " << this -> tipo << " Cantidad disponible: " << this -> stock << endl;  
}

void Material::disminuir_stock(int decremento){
    this -> stock = this -> stock - decremento;
}

void Material::agregar_al_stock(int incremento){    
    this -> stock = this -> stock + incremento;
}

string Material::devolver_nombre(){
    return this -> nombre;
}

int Material::devolver_stock(){
    return this -> stock;
}
char Material :: devolver_simbolo(){
    return this->tipo;
}
void Material :: imprimir_mensaje(){
    cout << "tengo " << this->nombre << " en mi lugar" << endl;
}