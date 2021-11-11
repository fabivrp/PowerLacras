#ifndef LISTAR_EDIFICIOS_CONSTRUIDOS_H
#define LISTAR_EDIFICIOS_CONSTRUIDOS_H

#include "opciones.h"
#include "constantes.h"
#include "vector.h"


class Listar_edificios_construidos{

private:
    Vector <Ubicaciones> vector_ubicaciones_aux;
    Vector <Edificios> vector_edificios_aux;

private:

    /*
    *PRE:
    *POST:Almacena en una variable tipo string todas las coordenadas en las que hay un 
    *edificio del tipo pasado por parámetro
    */
    string extraer_coordenadas(string edificio);

    
public:

    Listar_edificios_construidos(Vector <Edificios> vector_edificio,Vector <Ubicaciones> vector_ubicaciones);
    
    /*
    *PRE:
    *POST:Muestra por pantalla los edificios que hay construidos en andypolis así como
    *las coordnadas en donde se encuntran
    */
    void mostrar_edificios_construidos();
};



#endif //LISTAR_EDIFICIOS_CONSTRUIDOS_H