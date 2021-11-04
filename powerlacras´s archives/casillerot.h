#ifndef CASILLEROT_H
#define CASILLEROT_H

#include "casillero.h"
#include <iostream>
using namespace std;



class Casillerot : public Casillero{

public:
    Casillerot(char tipo_casilla);
    void mostrar();
};




#endif //CASILLEROT_H