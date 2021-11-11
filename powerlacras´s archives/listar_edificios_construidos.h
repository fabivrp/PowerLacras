#ifndef LISTAR_EDIFICIOS_CONSTRUIDOS_H
#define LISTAR_EDIFICIOS_CONSTRUIDOS_H

#include "opciones.h"
#include "constantes.h"
#include "vector.h"


class Listar_edificios_construidos
{
private:
    string extraer_coordenadas(string edificio);
    Vector <Ubicaciones> vector_ubicaciones_aux;
    Vector <Edificios> vector_edificios_aux;

    
public:
    Listar_edificios_construidos(Vector <Edificios> vector_edificio,Vector <Ubicaciones> vector_ubicaciones);
    void accion();
};



#endif //LISTAR_EDIFICIOS_CONSTRUIDOS_H