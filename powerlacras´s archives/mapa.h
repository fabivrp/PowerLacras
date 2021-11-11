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
*PRE:la cantidad de filas y columnas deben ser >=0
*POST:crea un mapa con la cantidad de filas eleccionadas
*/
Mapa(int filas, int columnas);

/*
*PRE:las coordenadas deben ser >=0
*POST:Guarda un casillero en el mapa devuelve true si lo hizo correctamente, en aso contrario
*devuelve false
*/
bool llenar_mapa(Casillero* casilla,int coordenadaf,int coordenadac);

/*
*PRE:coordenadas deben ser >=0
*POST:Reemplaza una casilla antigua con una nueva
*/
void actualizar_mapa(Casillero* casilla,int coordenadaf,int coordenadac);

/*
*PRE:
*POST:Muestra por pantalla el mapa
*/
void mostrar();

/*
    *PRE:
    *POST:Devuelve el tipo de casilla que hay en las coordenadas seleccionadas
    */
char consultar_tipo(int fila, int columna);
/*
    *PRE:
    *POST:Devuelve cuantas filas tiene el mapa
    */
int devolver_filas();
/*
    *PRE:
    *POST:devuelve cuntas columnas tiene el mapa
    */
int devolver_columnas();

Casillero* devolver_casilla(int fil,int col);

~Mapa();

};

#endif //H_P_MAPA_H
