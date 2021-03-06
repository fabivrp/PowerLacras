#ifndef DEMOLER_EDIFICIO_H
#define DEMOLER_EDIFICIO_H
#include "opciones.h"
#include "constantes.h"
#include "vector.h"


class Demoler_edificio{

private:

    int fil,col,cant_piedra,cant_madera,cant_metal,pos_vector_edificio_aux;
    Vector <Ubicaciones> *vector_ubicaciones_aux;
    Vector <Edificios> *vector_edificios_aux;
    Vector <Material> *vector_materiales_aux;
    Mapa *mapa_aux;

public:

    Demoler_edificio(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa);
    
    /*PRE:-
    *POS: Realiza la demolicion del edificio especificado 
    *luego de corroborar la existencia del mismo en la casilla seleccionada
    */
    void realizar_demolicion();

private :
    /*PRE:-
    *POS:  
    *
    */
    bool hay_edificio(int fila, int columna);
    /*PRE:-
    *POS:  
    *
    */
    void obtener_datos(char tipo_casilla);
    /*PRE:-
    *POS:  
    *
    */
    void regresar_material(string tipo, int cant_material);
};



#endif //DEMOLER_EDIFICIO_H