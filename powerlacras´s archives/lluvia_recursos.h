#ifndef LLUVIA_RECURSOS_H
#define LLUVIA_RECURSOS_H
#include "opciones.h"
#include "constantes.h"
#include "colors.h"
#include <iomanip>
#include "casillerot.h"
#include <stdlib.h>
#include <time.h>
//#include "opciones.h"



class Lluvia_recursos : public Opciones{
private:
int fil, col;
int  numero_aleatorio(int limite_inferior, int limite_superior);
bool  casilla_disponible();
void  asignar_coordenada();
void  colocar_material(int cantidad_material, char tipo);
int  casillas_disponibles(int total_materiales);


public:
    Lluvia_recursos(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa);
    void accion();
};



#endif //LLUVIA_RECURSOS_H