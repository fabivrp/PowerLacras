#ifndef CONSULTAR_COORDENADA_H
#define CONSULTAR_COORDENADA_H
#include "constantes.h"
#include "vector.h"
#include "edificios.h"
#include "mapa.h"
#include "material.h"
#include "ubicaciones.h"


class Consultar_coordenada{

private:
    void procesar_coordenada();
    int fil,col;
    Vector <Ubicaciones> vector_ubicaciones_aux;
    Vector <Edificios> vector_edificios_aux;
    Vector <Material> vector_materiales_aux;
    Mapa *mapa_aux;
    


    
public:

    Consultar_coordenada(Vector <Edificios> vector_edificio,Vector <Ubicaciones> vector_ubicaciones,Vector <Material> vector_materiales ,Mapa *mapa);
/*
    *PRE: -
    *POST: Verifica que la coordenada sea valida, en el caso de que lo sea informa al usuario 
    *qué tipo de casilla es.
    */
    void accion();

private:
/*
    *PRE: -
    *POST: devuelve la posicion que ocupa el edificio buscado en el vecto
    */
    int buscar_edificio(char simobolo_a_buscar);
    /*
    *PRE: -
    *POST: devuelve la posicion que ocupa el material buscado en el vector
    */
    int buscar_material(char simobolo_a_buscar);
};



#endif //CONSULTAR_COORDENADA_H