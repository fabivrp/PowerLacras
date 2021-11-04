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
    Parser(char letra);
    Casillero* procesar_entrada();
    string tipo_casilla();
};





#endif //H_P_PARSER_H