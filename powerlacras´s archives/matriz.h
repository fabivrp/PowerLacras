#ifndef H_P_MATRIZ_H
#define H_P_MATRIZ_H
#include "edificios.h"
#include "casillero.h"

class Matriz : public Casillero {


private:

int filas, columnas;
Casillero*** matriz;

public: 

/*
*PRE:
*POST:
*/
Matriz(int filas, int columnas);

/*
*PRE:
*POST:
*/
bool llenar_matriz(Casillero* casilla);

/*
*PRE:
*POST:
*/
void mostrar();
};



#endif //H_P_MATRIZ_H