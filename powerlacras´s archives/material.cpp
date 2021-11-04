#include "material.h"
#include <string>
#include <iostream>

using namespace std;

Material::Material(char tipo, int stock){
    this -> tipo = tipo;
    this -> stock = stock;
}


void Material::mostrar(){
    cout << "Tipo de material en la casila: " << this -> tipo << "Cantidad disponible: " << this -> stock << endl;  
}

void Material::disminuir_stock(int decremento){
    this -> stock = this -> stock - decremento;
}

void Material::agregar_al_stock(int incremento){    
    this -> stock = this -> stock + incremento;
}