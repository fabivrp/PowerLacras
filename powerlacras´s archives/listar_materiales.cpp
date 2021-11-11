#include "listar_materiales.h"

Listar_materiales::Listar_materiales(Vector <Material> vector_materiales){ 
    this->vector_materiales_aux = vector_materiales;

}

void Listar_materiales :: mostrar_materiales(){
cout     << "\t\t\t       " << BGND_DARK_AQUA_29 << "╔---------------------------------------╗" << END_COLOR << endl
         << "\t\t\t       " << BGND_DARK_AQUA_29 << "|          TIPO         |   UNIDADES    |" << END_COLOR << endl
         << "\t\t\t       " << BGND_DARK_AQUA_29 << "|           DE          |     EN EL     |" << END_COLOR << endl
         << "\t\t\t       " << BGND_DARK_AQUA_29 << "|        MATERIAL       |     STOCK     |" << END_COLOR << endl;

    for (int i = 0; i < this->vector_materiales_aux.tamanio(); i++){
        cout << "\t\t\t       " << BGND_DARK_AQUA_29 << "|-----------------------|---------------|" << END_COLOR <<endl;
        
        Material* aux = this->vector_materiales_aux.devolver_info(i);

        cout << "\t\t\t       " << BGND_BLACK_16 << "|";
        imprimir_centrado(ESPACIO_TIPO_MATERIAL, aux->devolver_nombre());
        imprimir_centrado(ESPACIO_UNIDADES_STOCK, to_string(aux->devolver_stock()));
        cout << endl;
        
      
    }
    
    cout << "\t\t\t       " << BGND_DARK_AQUA_29 << "╚---------------------------------------╝" << END_COLOR << endl;
    cout << endl;
}
    

