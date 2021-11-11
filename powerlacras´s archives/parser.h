#ifndef H_P_PARSER_H
#define H_P_PARSER_H
#include <iostream>
#include "casillero.h"
#include "casilleroc.h"
#include "casilleroi.h"
#include "casillerot.h"

using namespace std;

class Parser
{
private:
    char entrada;
public:

   
    Parser(char letra);
  
    /*
    *PRE:
    *POST:Determina que tipo de casilla es segun un simbolo representativo
    */
    Casillero* procesar_entrada();
  
};





#endif //H_P_PARSER_H