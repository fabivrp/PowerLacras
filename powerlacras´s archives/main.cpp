#include <iostream>
#include "casillero.h"
#include "edificios.h"
#include "leer_archivos.h"
#include "mapa.h"
#include "parser.h"
#include "parsere.h"
#include "ubicaciones.h"
#include "juego.h"
#include <fstream>




using namespace std;

int main(){
    Juego juego;

    if (juego.cargar_archivos()){
       juego.menu();
       
    }

    return 0;
}


