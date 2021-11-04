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
    Edificios* procesar_entrada(ifstream & archivo);
    string tipo_edificio();
};





#endif //H_P_PARSERE_H