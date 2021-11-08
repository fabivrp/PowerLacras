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

    /*
    *PRE:
    *POST:
    */
    Ubicaciones(string nombre , int fil , int col);
  
    /*
    *PRE:
    *POST:
    */
    string devolver_nombre();
  
    /*
    *PRE:
    *POST:
    */
    int devolver_fil();
  
    /*
    *PRE:
    *POST:
    */
    int devolver_col();

   
};








#endif //H_P_UBICACIONES_H