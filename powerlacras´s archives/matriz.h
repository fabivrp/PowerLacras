#ifndef H_P_MATRIZ_H
#define H_P_MATRIZ_H
#include "edificios.h"
#include "casillero.h"

class Matriz : public Casillero {


private:

int filas, columnas;
Casillero*** matriz;

public: 

Matriz(int filas, int columnas);
bool llenar_matriz(Casillero* casilla);
void mostrar();
};



#endif //H_P_MATRIZ_H