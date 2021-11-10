#ifndef DEMOLER_EDIFICIO_H
#define DEMOLER_EDIFICIO_H
#include "opciones.h"
#include "constantes.h"
//#include "vector.h"


class Demoler_edificio : public Opciones{

private:
    int fil,col,cant_piedra,cant_madera,cant_metal;
    bool hay_edificio(int fila, int columna);
    void obtener_datos(char tipo_casilla);
    void regresar_material(string tipo, int cant_material);

public:
    Demoler_edificio(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa);
    void accion();
};



#endif //DEMOLER_EDIFICIO_H