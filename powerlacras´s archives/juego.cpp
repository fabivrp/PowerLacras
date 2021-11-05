#include "juego.h"

/*Juego::Juego()
{
}
*/
Juego::~Juego(){
    delete this -> mapa;
    this-> vector_edificios.Vector_destructor();
    this-> vector_ubicaciones.Vector_destructor();
}




bool Juego ::cargar_archivos(){
    bool si_hay_archivos = true;
    Cargar_archivos cargar_archivos;
    this->mapa = cargar_archivos.cargar_mapa();
    this->vector_edificios = cargar_archivos.cargar_edificios();
    
    
    //this->edificios =  cargar_archivos.cargar_edificios();
    //this->ubicaciones =  cargar_archivos.cargar_ubicaciones();
    /*if (this->mapa == nullptr ){
        si_hay_archivos = false;
    }*/
    
    
    return si_hay_archivos;
}
void Juego :: agregar_ubicaciones(){
    
}