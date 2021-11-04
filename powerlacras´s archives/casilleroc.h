#ifndef H_P_CASILLEROC_H
#define H_P_CASILLEROC_H

#include "casillero.h"
#include <iostream>
using namespace std;

class Casilleroc: public Casillero{

public:
    
    Casilleroc (char tipo_casilla);
    void mostrar();
   
};

#endif //H_P_CASILLEROC_H