#ifndef H_P_MAPA_H
#define H_P_MAPA_H

//#include "edificios.h"
#include "casillero.h"

class Mapa {


private:

int filas, columnas;
Casillero*** mapa;

public: 

/*
*PRE:
*POST:
*/
Mapa(int filas, int columnas);

/*
*PRE:
*POST:
*/
bool llenar_mapa(Casillero* casilla,int coordenadaf,int coordenadac);

/*
*PRE:
*POST:
*/
void actualizar_mapa(Casillero* casilla,int coordenadaf,int coordenadac);

/*
*PRE:
*POST:
*/
void mostrar();
~Mapa();

};

#endif //H_P_MAPA_H
