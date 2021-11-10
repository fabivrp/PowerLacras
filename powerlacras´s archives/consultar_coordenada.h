#ifndef CONSULTAR_COORDENADA_H
#define CONSULTAR_COORDENADA_H
#include "opciones.h"
#include "constantes.h"
//#include "vector.h"


class Consultar_coordenada : public Opciones{

private:
    void procesar_coordenada();
    int fil,col;
    
public:
    Consultar_coordenada(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa);
    /*
    *PRE: -
    *POST: Verifica que la coordenada sea valida, en el caso de que lo sea informa al usuario 
    *qué tipo de casilla es.
    */
    void accion();
};



#endif //CONSULTAR_COORDENADA_H