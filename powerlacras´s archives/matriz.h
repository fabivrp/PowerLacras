#ifndef H_P_MATRIZ_H
#define H_P_MATRIZ_H
#include "edificios.h"
#include "casillero.h"

class Matriz : public Casillero {


public:
    Matriz(int pidra,int madera, int metal, int cant_max_construidos);
    int cuanto_produce();
    //~mina();
};



#endif //H_P_MATRIZ_H