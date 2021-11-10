#ifndef RECOLECTAR_RECURSOS_H
#define RECOLECTAR_RECURSOS_H
#include "opciones.h"
#include "constantes.h"
//#include "vector.h"


class Recolectar_recursos : public Opciones
{


    
public:
    Recolectar_recursos(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa);
    void accion();
};



#endif //RECOLECTAR_RECURSOS_H