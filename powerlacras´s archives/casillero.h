#ifndef H_P_CASILLERO_H
#define H_P_CASILLERO_H
#include "constantes.h"

class Casillero
{

protected:
    bool ocupado;
    char tipo_casilla;
    
public:

    Casillero(char tipo_casilla);
    /*
    *PRE: -
    *POST:Devuleve true si la casilla se encuentra ocupada por un ,aterial o un edificio, 
    *en caso contrario devuelve false.
    */
    bool esta_ocupado();
    
    /*
    *PRE: -
    *POST:Muestra por pantalla el tipo de elemento que la ocupa, en caso de no estar 
    *ocupada muestra de que tipo es (Terreno, Lago, Camino).
    */
    virtual void mostrar() = 0;
    
    /*
    *PRE: -
    *POST:Muestra por pantalla la descripciòn del elemento que la ocupa.
    */
    virtual void dar_mensaje() = 0;
    
    /*
    *PRE: -
    *POST:Devuleve el tipo de casilla, en caso de estar ocupada por un material o un 
    *edificio, devuelve su identificador.
    */
    char devolver_tipo();

    virtual ~Casillero();

};




#endif //H_P_CASILLERO_H