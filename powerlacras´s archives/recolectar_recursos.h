#ifndef RECOLECTAR_RECURSOS_H
#define RECOLECTAR_RECURSOS_H
#include "opciones.h"
#include "constantes.h"
#include "vector.h"
#include "edificios.h"
#include "material.h"


class Recolectar_recursos
{
private :
    Vector <Edificios> vector_edificios_aux;
    Vector <Material> *vector_materiales_aux;



    
public:
    Recolectar_recursos(Vector <Edificios> vector_edificio,Vector <Material> *vector_materiales);
    void accion();
};



#endif //RECOLECTAR_RECURSOS_H