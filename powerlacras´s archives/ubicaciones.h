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
    string devolver_nombre();
    int devolver_fil();
    int devolver_col();

   
};








#endif //H_P_UBICACIONES_H