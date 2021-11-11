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

    Parsere(string nombre_edificio);
  
    /*
    *PRE:
    *POST:Determina el tipo de edificio segun el simbolo representativo que se prove
    */
    Edificios* procesar_entrada(ifstream & archivo);
  
    /*
    *PRE:
    *POST:
    */
    string tipo_edificio();
};





#endif //H_P_PARSERE_H