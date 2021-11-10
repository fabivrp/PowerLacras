#include "consultar_coordenada.h"






Consultar_coordenada::Consultar_coordenada(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa) : Opciones(vector_edificio,vector_ubicaciones,vector_materiales,mapa){
}





void Consultar_coordenada :: accion(){
    
    this->coordenada_es_valida(&this->fil,&this->col);
    Casillero *casilla = mapa->devolver_casilla(fil,col);
    casilla->dar_mensaje();
}


//void Juego :: describir_contenido(char tipo_casilla){
     
    /* switch (tipo_casilla) {
        case ASERRADERO:

            cout << "La casilla es de tipo terreno y tiene un Aserradero construido " << endl;

            break;
        case ESCUELA:

            cout << "La casilla es de tipo terreno y tiene una Escuela construida " << endl;

            break;
        case MINA:

            cout << "La casilla es de tipo terreno y tiene una Mina construida " << endl;

            break;
        case FABRICA:

            cout << "La casilla es de tipo terreno y tiene una Fábrica construida " << endl;

            break;
        case OBELISCO:
    
            cout << "La casilla es de tipo terreno y tiene un Obelisco construido " << endl;
    
            break;
        case PLANTA_ELECTRICA:
           
            cout << "La casilla es de tipo terreno y tiene una Planta eléctrica construida " << endl;

            break;
        case TERRENO:
           
            cout << "La casilla es de tipo terreno y está disponible para construcción " << endl;
        
            break;
        case LAGO:
           
            cout << "La casilla es de tipo lago, no puedes construir sobre un cuerpo de agua " << endl;
           
           break;
        case CAMINO:
           
            cout << "La casilla es de tipo lago, no puedes construir sobre un cuerpo de agua " << endl;
           
           break;
        case METAL:
           
            cout << "La casilla es de tipo camino y tine material de tipo metal sobre ella " << endl;
           
           break;
        case PIEDRA:
            
            cout << "La casilla es de tipo camino y tine material de tipo piedra sobre ella " << endl;
           
           break;
        case MADERA:
           
            cout << "La casilla es de tipo camino y tine material de tipo madera sobre ella " << endl;
           
           break;
    }
}*/