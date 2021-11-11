#ifndef LLUVIA_RECURSOS_H
#define LLUVIA_RECURSOS_H
//#include "opciones.h"
#include "constantes.h"
#include "prueba2.h"
#include "colors.h"
#include <iomanip>
#include "casillerot.h"
#include <stdlib.h>
#include <time.h>
#include "mapa.h"




class Lluvia_recursos{
private:
int fil, col;
Mapa* mapa_aux;
int  numero_aleatorio(int limite_inferior, int limite_superior);
bool  casilla_disponible();
void  asignar_coordenada();
void  colocar_material(int cantidad_material, char tipo);
int  casillas_disponibles(int total_materiales);


public:
    Lluvia_recursos(Mapa *mapa);
    void accion();
};



#endif //LLUVIA_RECURSOS_H