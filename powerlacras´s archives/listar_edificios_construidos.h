#ifndef LISTAR_EDIFICIOS_CONSTRUIDOS_H
#define LISTAR_EDIFICIOS_CONSTRUIDOS_H
#include "opciones.h"
#include "constantes.h"
//#include "vector.h"


class Listar_edificios_construidos : public Opciones
{
private:

    
public:
    Listar_edificios_construidos(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa);
    void accion();
};



#endif //LISTAR_EDIFICIOS_CONSTRUIDOS_H