#ifndef H_P_MAPA_H
#define H_P_MAPA_H

//#include "edificios.h"
#include "casillero.h"

class Mapa {


private:

int filas, columnas;
Casillero*** mapa;

public: 

Mapa(int filas, int columnas);
bool llenar_mapa(Casillero* casilla,int coordenadaf,int coordenadac);
void mostrar(int fila, int columna);
~Mapa();

};

#endif //H_P_MAPA_H
