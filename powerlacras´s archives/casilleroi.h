#ifndef CASILLEROI_H
#define CASILLEROI_H

#include "casillero.h"
#include <iostream>
using namespace std;



class Casilleroi : public Casillero{

public:
    Casilleroi(char tipo_casilla);

    /*
    *PRE:
    *POST:
    */
    void mostrar();
    void dar_mensaje();
};




#endif //CASILLEROI_H