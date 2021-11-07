#include "material.h"

Material::Material(string tipo, int stock){
    this -> tipo = tipo;
    this -> stock = stock;
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
    return this -> tipo;
}

int Material::devolver_stock(){
    return this -> stock;
}