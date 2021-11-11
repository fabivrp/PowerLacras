#ifndef LLUVIA_RECURSOS_H
#define LLUVIA_RECURSOS_H

#include "constantes.h"
#include "casillerot.h"
#include <stdlib.h>
#include <time.h>
#include "mapa.h"

class Lluvia_recursos{
    
private:
    int fil, col;
    Mapa* mapa_aux;

public:
    Lluvia_recursos(Mapa *mapa);
     /*
    *PRE:
    *POST:ejecuta la lluvia de materiales
    */
    void accion();

private:   
     /*
    *PRE:
    *POST:genera un numero aleatorio entre el limite inferior y el limite superior
    */
    int  numero_aleatorio(int limite_inferior, int limite_superior);
     /*
    *PRE:
    *POST:verifica que la casilla est'e libre para colocar un material y que sea de tipo camino
    */
    bool  casilla_disponible();
     /*
    *PRE:
    *POST:le asigna coordenadas validas al material
    */
    void  asignar_coordenada();
     /*
    *PRE:
    *POSTguarda el material en la casilla de tipo camino
    */
    void  colocar_material(int cantidad_material, char tipo);
     /*
    *PRE:
    *POST:contabiliza cuantas casillas de tipo camino hay libres de materiales
    */
    int  casillas_disponibles(int total_materiales);
};



#endif //LLUVIA_RECURSOS_H