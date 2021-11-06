#include "juego.h"

/*Juego::Juego()
{
}
*/
Juego::~Juego(){
    delete this -> mapa;
    this-> vector_edificios.Vector_destructor();
    this-> vector_ubicaciones.Vector_destructor();
    this-> vector_materiales.Vector_destructor();
}




bool Juego ::cargar_archivos(){
    bool si_hay_archivos = true;
    Cargar_archivos cargar_archivos;
    this->mapa = cargar_archivos.cargar_mapa(&si_hay_archivos);
    this->vector_edificios = cargar_archivos.cargar_edificios(&si_hay_archivos);
    this->vector_ubicaciones =  cargar_archivos.cargar_ubicaciones(&si_hay_archivos);
    this->vector_materiales = cargar_archivos.cargar_materiales(&si_hay_archivos);
    agregar_ubicaciones();
    return si_hay_archivos;
}








int Juego :: devolver_pos_vector(string nombre_a_buscar) {
    int pos_vector_edificio;
    for (int i = 0 ; i < this->vector_edificios.tamanio();i++){
        Edificios *edificios = vector_edificios.devolver_info(i);
            if (edificios->devolver_nombre() == nombre_a_buscar ) pos_vector_edificio = i;
    }
    return pos_vector_edificio;
}





void Juego :: agregar_ubicaciones(){
    for(int i = 0 ; i < this->vector_ubicaciones.tamanio() ; i++){
        Ubicaciones *ubicacion = vector_ubicaciones.devolver_info(i);
        string nombre_edificio = ubicacion->devolver_nombre();
        int fil = ubicacion->devolver_fil();
        int col = ubicacion->devolver_col();
        Edificios *edificio = vector_edificios.devolver_info(devolver_pos_vector(nombre_edificio));
        edificio->aumentar_construidos();
        Casilleroc *casilla = new Casilleroc(edificio->devolver_simbolo());
        mapa->actualizar_mapa(casilla,fil,col);
        }
    }