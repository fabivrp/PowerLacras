#include "juego.h"

/*Juego::Juego()
{
}
*/
Juego::~Juego(){
delete mapa;
delete edificios;
delete ubicaciones;
}




bool Juego ::cargar_archivos(){
    bool si_hay_archivos = true;
    Cargar_archivos cargar_archivos;
    this->mapa = cargar_archivos.cargar_mapa();
    this->edificios =  cargar_archivos.cargar_edificios();
    this->ubicaciones =  cargar_archivos.cargar_ubicaciones();
    if (this->mapa == nullptr ){
        si_hay_archivos = false;
    }
    
    
    return si_hay_archivos;
}
void Juego :: agregar_ubicaciones(){
    
}