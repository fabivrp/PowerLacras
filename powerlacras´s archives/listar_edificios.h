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
    
    /*
    *PRE:
    *POST:Muestra por pantalla todos los edificios que pueden ser construidos en 
    *Andypolis, así ocmo la cantidad de materiales que se requieren para su construcción 
    *y si proveen materiales o no
    */
    void mostrar_edificios();
};



#endif //LISTAR_EDIFICIOS_H