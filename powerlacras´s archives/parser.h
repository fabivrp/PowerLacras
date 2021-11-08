#ifndef H_P_PARSER_H
#define H_P_PARSER_H
#include <iostream>
#include "casillero.h"

using namespace std;

class Parser
{
private:
    char entrada;
public:

    /*
    *PRE:
    *POST:
    */
    Parser(char letra);
  
    /*
    *PRE:
    *POST:
    */
    Casillero* procesar_entrada();
  
    /*
    *PRE:
    *POST:
    */
    string tipo_casilla();
};





#endif //H_P_PARSER_H