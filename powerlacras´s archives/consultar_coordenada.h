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
    void accion();
};



#endif //CONSULTAR_COORDENADA_H