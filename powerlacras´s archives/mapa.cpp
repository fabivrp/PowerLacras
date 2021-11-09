#include "mapa.h"
#include "casillero.h"
#include <iostream>

using namespace std;


void limpiar_mapa(Casillero*** mapa, int fil, int col){
    for (int i = 0; i <fil; i++){
        for (int j = 0; j <fil; j++){
            mapa[i][j] = nullptr;
        } 
    }
}

Mapa::Mapa(int filas, int columnas){
    this->filas = filas;
    this->columnas = columnas;

    mapa = new Casillero** [filas];

    for (int i = 0; i < this->filas; i++){
        mapa[i] = new Casillero *[columnas];
    }

    limpiar_mapa(mapa, this->filas, this->columnas);

}

bool Mapa::llenar_mapa(Casillero* casilla,  int fila, int columna){
    //cout << "hilo" << endl;
    
        mapa[fila][columna] = casilla;
        return true;

}
void Mapa::actualizar_mapa(Casillero* casilla,  int fila, int columna){
        delete mapa[fila][columna];
        mapa[fila][columna] = casilla;

}


void Mapa :: mostrar(){
    //cout << "____________________________________________________"<<endl;
    for(int i = 0 ; i < this->filas ; i++){
        for(int j = 0; j < this->columnas ; j++){
            mapa[i][j]->mostrar();
            //cout << "|";
        }
        cout << endl;
        //cout << "_________________________________________________"<<endl;
    }
     
    
}
Mapa ::~Mapa(){
    for(int i = 0 ; i < this->filas ; i++){
        for(int j = 0; j < this->columnas ; j++){
            delete mapa[i][j];
        }
        delete [] mapa [i];
    }
    delete []mapa;
}

char Mapa::consultar_tipo(int fila, int columna){

    return this-> mapa[fila][columna]->tipo_casilla;
}

int Mapa :: devolver_filas(){
    return this -> filas;
}

int Mapa :: devolver_columnas(){
    return this -> columnas;
}
