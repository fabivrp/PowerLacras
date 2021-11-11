#include "ubicaciones.h"

Ubicaciones::Ubicaciones(string nombre, int fil,int col){
    
    this->nombre = nombre;
    this->fil = fil;
    this->col = col;

}

string Ubicaciones::devolver_nombre(){
    
    return this->nombre;
}

int Ubicaciones ::devolver_fil(){
    
    return this->fil;
}

int Ubicaciones ::devolver_col(){
    
    return this->col;
}