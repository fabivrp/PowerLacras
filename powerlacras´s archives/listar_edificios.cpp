#include "listar_edificios.h"
#include <iomanip>

Listar_edificios::Listar_edificios(Vector <Edificios> vector_edificio,Vector <Ubicaciones> vector_ubicaciones,Vector <Material> ector_materiales){
    
    this->vector_edificios_aux = vector_edificio; 
    this->vector_ubicaciones_aux = vector_ubicaciones; 
}

void Listar_edificios :: mostrar_edificios(){
  
  cout   << BGND_DARK_AQUA_29<<"╔-----------------------------------------------------------------------------------------------------------------------╗" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|          TIPO         |            MATERIALES  REQUERIDOS             |   UNIDADES    |  DISPONIBLES  |     BRINDA    |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|           DE          |-----------------------------------------------|      EN       |     PARA SU   |     ALGUN     |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|        EDIFICIO       |     PIEDRA    |     MADERA    |     METAL     |   ANDYPOLIS   |  CONSTRUCCION |    MATERIAL   |" << END_COLOR << endl;

    for (int i = 0; i < this->vector_edificios_aux.tamanio(); i++){
        Edificios* aux = this->vector_edificios_aux.devolver_info(i);
        cout << BGND_DARK_AQUA_29<<"|-----------------------------------------------------------------------------------------------------------------------|" << END_COLOR <<endl;
        cout << BGND_BLACK_16 << "|";
        imprimir_centrado(ESPACIO_TIPO_EDIFICIO, aux->devolver_nombre());
        imprimir_centrado(ESPACIO_MATERIALES, to_string(aux->devolver_cantidad_piedra()));
        imprimir_centrado(ESPACIO_MATERIALES, to_string(aux->devolver_cantidad_madera()));
        imprimir_centrado(ESPACIO_MATERIALES, to_string(aux->devolver_cantidad_metal()));
        imprimir_centrado(ESPACIO_UNIDADES_CONSTRUIDAS, to_string(aux->devolver_construidos()));
        imprimir_centrado(ESPACIO_UNIDADES_DISPONIBLES, to_string(aux->devolver_max_construccion()-aux->devolver_construidos()));
        if (aux->cuanto_produce()>0){
            imprimir_centrado(ESPACIO_BRIDA_MATERIALES, BRINDA_MATERIALES);
            cout << endl;
           
        } else{
            imprimir_centrado(ESPACIO_BRIDA_MATERIALES, NO_BRINDA_MATERIALES);
            cout << endl;
        }
    }
    cout << BGND_DARK_AQUA_29 << "╚-----------------------------------------------------------------------------------------------------------------------╝" << END_COLOR << endl;
    cout << endl;
}
