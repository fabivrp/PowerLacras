#include "juego.h"

int main(){
    Juego juego;
    if (juego.cargar_archivos()) juego.menu();
    
    else cout << "Faltan archivos!!!, revisar cuales faltan arriba " << endl ;
    return 0;
}