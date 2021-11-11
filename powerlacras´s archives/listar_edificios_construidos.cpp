#include "listar_edificios_construidos.h"
#include <iomanip>

Listar_edificios_construidos::Listar_edificios_construidos(Vector <Edificios> vector_edificio,Vector <Ubicaciones> vector_ubicaciones){
    this->vector_edificios_aux = vector_edificio; 
    this->vector_ubicaciones_aux = vector_ubicaciones; 
}

string Listar_edificios_construidos::extraer_coordenadas(string edificio){
    string coordenadas = " ";

    for(int i = 0 ; i < this->vector_ubicaciones_aux.tamanio() ; i++){
        Ubicaciones *ubicacion = this->vector_ubicaciones_aux.devolver_info(i);
        
        if (edificio == ubicacion->devolver_nombre()){
            coordenadas = coordenadas + '(' + to_string(ubicacion->devolver_fil()) + ',' + to_string(ubicacion->devolver_col()) + ") ";
        }
    }

    return coordenadas;

}


void Listar_edificios_construidos :: accion(){
    cout << BGND_DARK_AQUA_29<< "\t\t" "╔---------------------------------------------------------------------╗" << END_COLOR << endl
         << BGND_DARK_AQUA_29<< "\t\t" "|          TIPO         |   UNIDADES    |         COORDENADAS         |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<< "\t\t" "|           DE          |      EN       |            EN EL            |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<< "\t\t" "|        EDIFICIO       |   ANDYPOLIS   |            MAPA             |" << END_COLOR << endl;

    for (int i = 0; i < this->vector_edificios_aux.tamanio(); i++){
        Edificios* aux = this->vector_edificios_aux.devolver_info(i);

        if (aux->devolver_construidos()>0){
            cout << BGND_DARK_AQUA_29<< "\t\t" "|---------------------------------------------------------------------|" << END_COLOR <<endl;
            cout << BGND_BLACK_16<< setfill(' ');
            cout << "\t\t" "|";

            imprimir_centrado(ESPACIO_TIPO_MATERIAL,aux->devolver_nombre());
            
            imprimir_centrado(ESPACIO_UNIDADES_CONSTRUIDAS,to_string(aux->devolver_construidos()));

            string coordenadas =  extraer_coordenadas(aux->devolver_nombre());
           
            imprimir_centrado(ESPACIO_COORDENADAS, coordenadas);
            cout << endl;
        }
    }

    cout << "\t\t" << BGND_DARK_AQUA_29 << "╚---------------------------------------------------------------------╝" << END_COLOR << endl;
    cout << endl; 
    
}
