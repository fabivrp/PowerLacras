#ifndef LISTAR_EDIFICIOS_H
#define LISTAR_EDIFICIOS_H
#include "opciones.h"
#include "vector.h"
#include "edificios.h"
#include <iomanip>
#include "colors.h"
#include "constantes.h"


class Listar_edificios
{
private:
Vector <Edificios> vector_edificios_aux;
Vector <Ubicaciones> vector_ubicaciones_aux;
Vector <Material> vector_materiales_aux;
    
public:
    Listar_edificios(Vector <Edificios> vector_edificio,Vector <Ubicaciones> vector_ubicaciones,Vector <Material> vector_materiales);
    void accion();

};



#endif //LISTAR_EDIFICIOS_H