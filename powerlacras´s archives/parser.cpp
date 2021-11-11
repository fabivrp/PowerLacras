#include "parser.h"


Parser::Parser(char letra){
    
    this->entrada = letra;
}

Casillero* Parser :: procesar_entrada(){
    
    Casillero* casillero;
    if(this->entrada == LAGO){
        casillero = new Casilleroi(this->entrada);
    }
    else if (this->entrada == PIEDRA ||this->entrada == MADERA ||this->entrada == METAL ||this->entrada == CAMINO){
        casillero = new Casillerot(this->entrada);

    }
    else{
        casillero = new Casilleroc(this->entrada);
    }
    return casillero;
}