#ifndef LISTAR_EDIFICIOS_H
#define LISTAR_EDIFICIOS_H
#include "opciones.h"
#include "vector.h"
#include "edificios.h"
#include <iomanip>
#include "colors.h"
#include "constantes.h"


class Listar_edificios : public Opciones
{

    
public:
    Listar_edificios(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa);
    void accion();
};



#endif //LISTAR_EDIFICIOS_H