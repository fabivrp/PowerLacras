#include "listar_edificios_construidos.h"
#include <iomanip>





Listar_edificios_construidos::Listar_edificios_construidos(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa) : Opciones(vector_edificio,vector_ubicaciones,vector_materiales,mapa){
}

string Listar_edificios_construidos::extraer_coordenadas(string edificio){
    string coordenadas = " ";

    for(int i = 0 ; i < this->vector_ubicaciones->tamanio() ; i++){
        Ubicaciones *ubicacion = vector_ubicaciones->devolver_info(i);
        
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

    for (int i = 0; i < this->vector_edificio->tamanio(); i++){
        Edificios* aux = this->vector_edificio->devolver_info(i);

        if (aux->devolver_construidos()>0){
            cout << BGND_DARK_AQUA_29<< "\t\t" "|---------------------------------------------------------------------|" << END_COLOR <<endl;
            int espacio_delantero = calcular_espacio_delantero(ESPACIO_TIPO_EDIFICIO, aux->devolver_nombre().length());
            int espacio_trasero = ESPACIO_TIPO_EDIFICIO - espacio_delantero - aux->devolver_nombre().length();
            string caracteristica = to_string(aux->devolver_construidos());
        
            cout << BGND_BLACK_16<< setfill(' ');
            cout << "\t\t" "|" << setw(espacio_delantero) << "" << aux->devolver_nombre() << setw(espacio_trasero) << "|";
        
        
            espacio_delantero = calcular_espacio_delantero(ESPACIO_UNIDADES_CONSTRUIDAS, caracteristica.length());
            espacio_trasero = ESPACIO_UNIDADES_CONSTRUIDAS - espacio_delantero - caracteristica.length();
            cout << setw(espacio_delantero) << "" << caracteristica << setw(espacio_trasero) << "|";

       
            string coordenadas =  extraer_coordenadas(aux->devolver_nombre());
        
            espacio_delantero = calcular_espacio_delantero(ESPACIO_COORDENADAS, coordenadas.length());
            espacio_trasero = ESPACIO_COORDENADAS - espacio_delantero - coordenadas.length();
            cout << setw(espacio_delantero) << "" << coordenadas << setw(espacio_trasero) << "|" << END_COLOR << endl;
        }
    }

    cout << "\t\t" << BGND_DARK_AQUA_29 << "╚---------------------------------------------------------------------╝" << END_COLOR << endl;
    cout << endl; 
    
}
