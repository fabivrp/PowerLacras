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
    bool hay_edificio(int fila, int columna);
    void obtener_datos(char tipo_casilla);
    void regresar_material(string tipo, int cant_material);
    void Demoler_edificio :: eliminar_del_vector(int pos);
    int Demoler_edificio :: buscar_edificicacion_en_ubicaciones();



public:
    Demoler_edificio(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa);
    void accion();
};



#endif //DEMOLER_EDIFICIO_H