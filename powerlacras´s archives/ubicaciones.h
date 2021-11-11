#ifndef H_P_UBICACIONES_H
#define H_P_UBICACIONES_H
#include <iostream>
using namespace std;

class Ubicaciones
{
private:
    int fil, col;
    string nombre;
public:

    Ubicaciones(string nombre , int fil , int col);
  
    /*
    *PRE:
    *POST:devuelve el nombre del elemento que hay en esa ubicacion
    */
    string devolver_nombre();
  
    /*
    *PRE:
    *POST:devuelve la fila de la coordenada
    */
    int devolver_fil();
  
    /*
    *PRE:
    *POST:devuelve la columna de la coordenada
    */
    int devolver_col();

   
};








#endif //H_P_UBICACIONES_H