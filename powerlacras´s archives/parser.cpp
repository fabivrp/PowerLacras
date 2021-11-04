#include "parser.h"
#include "casilleroc.h"
#include "casilleroi.h"
#include "casillerot.h"


Parser::Parser(char letra){
    this->entrada = letra;
}

Casillero* Parser :: procesar_entrada(){
    Casillero* casillero;
    if(this->entrada == 'L'){
        casillero = new Casilleroi(this->entrada);
    }
    else if (this->entrada == 'S' ||this->entrada == 'W' ||this->entrada == 'I' ||this->entrada == 'C'){
        casillero = new Casillerot(this->entrada);

    }
    else{
        casillero = new Casilleroc(this->entrada);
    }

    return casillero;

}

//string Parser ::tipo_casilla(){
//
//}