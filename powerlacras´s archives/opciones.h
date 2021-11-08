#ifndef H_P_OPCIONES_H
#define H_P_OPCIONES_H
#include "vector.h"
#include "edificios.h"
#include "ubicaciones.h"
#include "material.h"
#include "mapa.h"
#include <iostream>
using namespace std;

class Opciones
{
private:
    Vector <Edificios> vector_edificio;
    Vector <Ubicaciones> vector_ubicaciones;
    Vector <Material> vector_materiales;
    Mapa *mapa;
    template <typename Tipo>
    bool hay_objeto(string nombre_a_buscar,Vector <Tipo> vector,int *pos_vector);
    bool hay_materiales_suficiente(int pos_vector_edificio);
public:

/*
*PRE:
*POST:
*/
void costruir_edificio();

/*
*PRE:
*POST:
*/
Opciones (Vector <Edificios> vector_edificio,Vector <Ubicaciones> vector_ubicaciones,Vector <Material> vector_materiales ,Mapa *mapa);
    
};

#endif //H_P_OPCIONES_H
