#ifndef DEMOLER_EDIFICIO_H
#define DEMOLER_EDIFICIO_H
#include "opciones.h"
#include "constantes.h"
//#include "vector.h"


class Demoler_edificio : public Opciones{

private:
    int fil,col;
    int cant_piedra,cant_madera,cant_metal;
    
public:
    /*
    *PRE:
    *POST:
    */
    Demoler_edificio(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa);
    
    /*
    *PRE:
    *POST:
    */
    void accion();

private:
    
    /*
    *PRE:
    *POST: Verifica que en la coordenada haya un edificio
    */
    bool hay_edificio(int fila, int columna);
    
    /*
    *PRE:
    *POST: Obtiene los datos del edificio que se encuentra en la casilla consultada
    */
    void obtener_datos(char tipo_casilla);
    
    /*
    *PRE:
    *POST:Devuelve la mitad de los materiales usados a la hora de construir al stock.
    */
    void regresar_material(string tipo, int cant_material);

};



#endif //DEMOLER_EDIFICIO_H