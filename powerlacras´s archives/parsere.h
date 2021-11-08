#ifndef H_P_PARSERE_H
#define H_P_PARSERE_H
#include <iostream>
#include "edificios.h"

using namespace std;

class Parsere
{
private:
    string entrada;
public:

    /*
    *PRE:
    *POST:
    */
    Parsere(string nombre_edificio);
  
    /*
    *PRE:
    *POST:
    */
    Edificios* procesar_entrada(ifstream & archivo);
  
    /*
    *PRE:
    *POST:
    */
    string tipo_edificio();
};





#endif //H_P_PARSERE_H