#include "matriz.h"
#include <cstddef>
#include "casillero.h"

void limpiar_matriz(Casillero*** matriz, int fil, int col){
    for (int i = 0; i <fil; i++){
        for (int j = 0; j <fil; j++){
            matriz[i][j] = NULL;
        } 
    }

}

Matriz::Matriz(int filas, int columnas){
    this->filas = filas;
    this->columnas = columnas;

    matriz = new Casillero** [filas];

    for (int i = 0; i < this->filas; i++){
        matriz[i] = new Casillero *[columnas];
    }

    limpiar_matriz(matriz, this->filas, this->columnas);

}

bool Matriz::llenar_matriz(Casillero* casilla,  int fila, int columna){

    for (int i = 0; i <fil; i++){
        for (int j = 0; j <fil; j++){
            if (matriz[i][j] = NULL){
                matriz[i][j] = casilla;
                return true;
            }
        } 
    }

    return false;

}


void Matriz::mostrar(){




}