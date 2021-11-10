#include "listar_materiales.h"





Listar_materiales::Listar_materiales(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa) : Opciones(vector_edificio,vector_ubicaciones,vector_materiales,mapa){
}



void Listar_materiales :: accion(){
cout << "\t\t\t       "<< BGND_DARK_AQUA_29 <<"╔---------------------------------------╗" << END_COLOR << endl
         << "\t\t\t       "<< BGND_DARK_AQUA_29 <<"|          TIPO         |   UNIDADES    |" << END_COLOR << endl
         << "\t\t\t       "<< BGND_DARK_AQUA_29 <<"|           DE          |     EN EL     |" << END_COLOR << endl
         << "\t\t\t       "<< BGND_DARK_AQUA_29 <<"|        MATERIAL       |     STOCK     |" << END_COLOR << endl;

    for (int i = 0; i < this->vector_materiales->tamanio(); i++){
        cout << "\t\t\t       "<< BGND_DARK_AQUA_29 <<"|-----------------------|---------------|" << END_COLOR <<endl;
        
        Material* aux = this->vector_materiales->devolver_info(i);

        int espacio_delantero = calcular_espacio_delantero(ESPACIO_TIPO_MATERIAL, aux->devolver_nombre().length());
        int espacio_trasero = ESPACIO_TIPO_MATERIAL - espacio_delantero - aux->devolver_nombre().length();

        cout << "\t\t\t       " << BGND_BLACK_16<< setfill(' ');
        cout << "|" << setw(espacio_delantero) << "" << aux->devolver_nombre() << setw(espacio_trasero) << "|";
        
        string caracteristica = to_string(aux->devolver_stock());
    
        espacio_delantero = calcular_espacio_delantero(ESPACIO_UNIDADES_CONSTRUIDAS, caracteristica.length());
        espacio_trasero = ESPACIO_UNIDADES_CONSTRUIDAS - espacio_delantero - caracteristica.length();
        cout << setw(espacio_delantero) << "" << caracteristica << setw(espacio_trasero) << "|" << END_COLOR << endl;   
     
      
    }
    
    cout << "\t\t\t       " << BGND_DARK_AQUA_29 << "╚---------------------------------------╝" << END_COLOR << endl;
    cout << endl;
}
    

