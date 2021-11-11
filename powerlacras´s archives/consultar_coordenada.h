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
    int buscar_edificio(char simobolo_a_buscar);
    int buscar_material(char simobolo_a_buscar);


    
public:
    Consultar_coordenada(Vector <Edificios> vector_edificio,Vector <Ubicaciones> vector_ubicaciones,Vector <Material> vector_materiales ,Mapa *mapa);
    void accion();
};



#endif //CONSULTAR_COORDENADA_H