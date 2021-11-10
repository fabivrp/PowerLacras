#include "listar_edificios_construidos.h"
#include <iomanip>





Listar_edificios_construidos::Listar_edificios_construidos(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa) : Opciones(vector_edificio,vector_ubicaciones,vector_materiales,mapa){
}



void Listar_edificios_construidos :: accion(){
    cout << BGND_DARK_AQUA_29<<"╔-------------------------------------------------------------------------------------------------------╗" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|          TIPO         |            MATERIALES  REQUERIDOS             |   UNIDADES    |  DISPONIBLES  |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|           DE          |-----------------------------------------------|      EN       |     PARA SU   |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|        EDIFICIO       |     PIEDRA    |     MADERA    |     METAL     |   ANDYPOLIS   |  CONSTRUCCION |" << END_COLOR << endl;

    for (int i = 0; i < this->vector_edificio->tamanio(); i++){
        Edificios* aux = this->vector_edificio->devolver_info(i);
        cout << BGND_DARK_AQUA_29<<"|-------------------------------------------------------------------------------------------------------|" << END_COLOR <<endl;

        int espacio_delantero = this->calcular_espacio_delantero(ESPACIO_TIPO_EDIFICIO, aux->devolver_nombre().length());
        int espacio_trasero = ESPACIO_TIPO_EDIFICIO - espacio_delantero - aux->devolver_nombre().length();
        string material = to_string(aux->devolver_cantidad_piedra());
        
        cout << BGND_BLACK_16<< setfill(' ');
        cout << "|" << setw(espacio_delantero) << "" << aux->devolver_nombre() << setw(espacio_trasero) << "|";
        
        
        espacio_delantero = calcular_espacio_delantero (ESPACIO_MATERIALES, material.length());
        espacio_trasero = ESPACIO_MATERIALES - espacio_delantero - material.length();
        cout << setw(espacio_delantero) << "" << material << setw(espacio_trasero) << "|";
        
        material = to_string(aux->devolver_cantidad_madera());
        espacio_delantero = calcular_espacio_delantero (ESPACIO_MATERIALES, material.length());
        espacio_trasero = ESPACIO_MATERIALES - espacio_delantero - material.length();
        cout << setw(espacio_delantero) << "" << material << setw(espacio_trasero) << "|";
        
        material = to_string(aux->devolver_cantidad_metal());
        espacio_delantero = calcular_espacio_delantero (ESPACIO_MATERIALES, material.length());
        espacio_trasero = ESPACIO_MATERIALES - espacio_delantero - material.length();
        cout << setw(espacio_delantero) << "" << material << setw(espacio_trasero) << "|";
        
        material = to_string(aux->devolver_construidos());
        espacio_delantero = calcular_espacio_delantero(ESPACIO_UNIDADES_CONSTRUIDAS, material.length());
        espacio_trasero = ESPACIO_UNIDADES_CONSTRUIDAS - espacio_delantero - material.length();
        cout << setw(espacio_delantero) << "" << material << setw(espacio_trasero) << "|";
        
        material = to_string(aux->devolver_max_construccion()-1);
        espacio_delantero = calcular_espacio_delantero(ESPACIO_UNIDADES_DISPONIBLES, material.length());
        espacio_trasero = ESPACIO_UNIDADES_DISPONIBLES - espacio_delantero - material.length();
        cout << setw(espacio_delantero) << "" << material << setw(espacio_trasero) << "|" << END_COLOR <<endl;
        
        
      
    }
    
    cout << BGND_DARK_AQUA_29 << "╚-------------------------------------------------------------------------------------------------------╝" << END_COLOR << endl;
    cout << endl;
    
}
