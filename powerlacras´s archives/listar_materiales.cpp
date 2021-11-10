#include "listar_materiales.h"

Listar_materiales::Listar_materiales(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa) : Opciones(vector_edificio,vector_ubicaciones,vector_materiales,mapa){
}



void Listar_materiales :: accion(){
cout     << "\t\t\t       " << BGND_DARK_AQUA_29 << "╔---------------------------------------╗" << END_COLOR << endl
         << "\t\t\t       " << BGND_DARK_AQUA_29 << "|          TIPO         |   UNIDADES    |" << END_COLOR << endl
         << "\t\t\t       " << BGND_DARK_AQUA_29 << "|           DE          |     EN EL     |" << END_COLOR << endl
         << "\t\t\t       " << BGND_DARK_AQUA_29 << "|        MATERIAL       |     STOCK     |" << END_COLOR << endl;

    for (int i = 0; i < this->vector_materiales->tamanio(); i++){
        cout << "\t\t\t       " << BGND_DARK_AQUA_29 << "|-----------------------|---------------|" << END_COLOR <<endl;
        
        Material* aux = this->vector_materiales->devolver_info(i);

        cout << "\t\t\t       " << BGND_BLACK_16 << "|";
        imprimir_centrado(ESPACIO_TIPO_MATERIAL, aux->devolver_nombre());
        imprimir_centrado(ESPACIO_UNIDADES_STOCK, to_string(aux->devolver_stock()));
        cout << endl;
        
      
    }
    
    cout << "\t\t\t       " << BGND_DARK_AQUA_29 << "╚---------------------------------------╝" << END_COLOR << endl;
    cout << endl;
}
    

