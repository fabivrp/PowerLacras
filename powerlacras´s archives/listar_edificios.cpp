#include "listar_edificios.h"
#include <iomanip>





Listar_edificios::Listar_edificios(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa) : Opciones(vector_edificio,vector_ubicaciones,vector_materiales,mapa){
}



void Listar_edificios :: accion(){
  cout << BGND_DARK_AQUA_29<<"╔-----------------------------------------------------------------------------------------------------------------------╗" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|          TIPO         |            MATERIALES  REQUERIDOS             |   UNIDADES    |  DISPONIBLES  |     BRINDA    |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|           DE          |-----------------------------------------------|      EN       |     PARA SU   |     ALGUN     |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|        EDIFICIO       |     PIEDRA    |     MADERA    |     METAL     |   ANDYPOLIS   |  CONSTRUCCION |    MATERIAL   |" << END_COLOR << endl;

    for (int i = 0; i < this->vector_edificio->tamanio(); i++){
        Edificios* aux = this->vector_edificio->devolver_info(i);
        cout << BGND_DARK_AQUA_29<<"|-----------------------------------------------------------------------------------------------------------------------|" << END_COLOR <<endl;

        int espacio_delantero = calcular_espacio_delantero(ESPACIO_TIPO_EDIFICIO, aux->devolver_nombre().length());
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
        cout << setw(espacio_delantero) << "" << material << setw(espacio_trasero) << "|";

        if (aux->cuanto_produce()>0){
            espacio_delantero = calcular_espacio_delantero(ESPACIO_UNIDADES_DISPONIBLES, BRINDA_MATERIALES.length());
            espacio_trasero = ESPACIO_UNIDADES_DISPONIBLES - espacio_delantero - BRINDA_MATERIALES.length();
            cout << setw(espacio_delantero) << "" << BRINDA_MATERIALES << setw(espacio_trasero) << "|" << END_COLOR <<endl;
            
        }else{
            
            espacio_delantero = calcular_espacio_delantero(ESPACIO_UNIDADES_DISPONIBLES, NO_BRINDA_MATERIALES.length());
            espacio_trasero = ESPACIO_UNIDADES_DISPONIBLES - espacio_delantero - NO_BRINDA_MATERIALES.length();
            cout << setw(espacio_delantero) << "" << NO_BRINDA_MATERIALES << setw(espacio_trasero) << "|" << END_COLOR <<endl;
        }
        
        
      
    }
    
    cout << BGND_DARK_AQUA_29 << "╚-----------------------------------------------------------------------------------------------------------------------╝" << END_COLOR << endl;
    cout << endl;
    
}
