#include "juego.h"
#include <stdlib.h>
#include <time.h>



const int PRODUCCION_MINIMA = 0;

/*Juego::Juego()
{
}
*/
Juego::~Juego(){
    delete this -> mapa;
    this-> vector_edificios.Vector_destructor();
    this-> vector_ubicaciones.Vector_destructor();
    this-> vector_materiales.Vector_destructor();
}

bool Juego ::cargar_archivos(){
    bool hay_archivos = false;
    int cont_archivos = 0;
    Cargar_archivos cargar_archivos;
    
    this->mapa = cargar_archivos.cargar_mapa(&cont_archivos);
    this->vector_edificios = cargar_archivos.cargar_edificios(&cont_archivos);
    this->vector_ubicaciones =  cargar_archivos.cargar_ubicaciones(&cont_archivos);
    this->vector_materiales = cargar_archivos.cargar_materiales(&cont_archivos);
    if(cont_archivos == 4){
        agregar_ubicaciones();
        hay_archivos = true;
    }
    return hay_archivos;
}

// esta funcion se usa en opciones.cpp (codigo repetido), hay que hacer que haya sola una una de estas.Codigo repetido
int Juego :: devolver_pos_vector(string nombre_a_buscar) {
    int pos_vector_edificio;
    for (int i = 0 ; i < this->vector_edificios.tamanio();i++){
        Edificios *edificios = vector_edificios.devolver_info(i);
            if (edificios->devolver_nombre() == nombre_a_buscar ) pos_vector_edificio = i;
    }
    return pos_vector_edificio;
}

//cosa para ubicaciones
int Juego :: devolver_pos_vector2(string nombre_a_buscar) {
    int pos_vector_ubicaciones;
    for (int i = 0 ; i < this->vector_ubicaciones.tamanio();i++){
        Ubicaciones *ubicacions = vector_ubicaciones.devolver_info(i);
            if (ubicacions->devolver_nombre() == nombre_a_buscar ) pos_vector_ubicaciones = i;
    }
    return pos_vector_ubicaciones;
}

void Juego :: agregar_ubicaciones(){
        mapa->mostrar();
    for(int i = 0 ; i < this->vector_ubicaciones.tamanio() ; i++){
        Ubicaciones *ubicacion = vector_ubicaciones.devolver_info(i);
        string nombre_edificio = ubicacion->devolver_nombre();
        int fil = ubicacion->devolver_fil();
        int col = ubicacion->devolver_col();
        Edificios *edificio = vector_edificios.devolver_info(devolver_pos_vector(nombre_edificio));
        edificio->aumentar_construidos();
        Casilleroc *casilla = new Casilleroc(edificio->devolver_simbolo());
        mapa->actualizar_mapa(casilla,fil,col);
    }
    cout << endl;
        mapa->mostrar();
}

int calcular_espacio_delantero(int espacio, int  largo_palabra){
    
    return (espacio - largo_palabra)/2;
}
void Juego :: mostrar_edificios(){
    cout << BGND_DARK_AQUA_29<<"╔-----------------------------------------------------------------------------------------------------------------------╗" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|          TIPO         |            MATERIALES  REQUERIDOS             |   UNIDADES    |  DISPONIBLES  |     BRINDA    |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|           DE          |-----------------------------------------------|      EN       |     PARA SU   |     ALGUN     |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|        EDIFICIO       |     PIEDRA    |     MADERA    |     METAL     |   ANDYPOLIS   |  CONSTRUCCION |    MATERIAL   |" << END_COLOR << endl;

    for (int i = 0; i < vector_edificios.tamanio(); i++){
        Edificios* aux = vector_edificios.devolver_info(i);
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

string Juego::extraer_coordenadas(string edificio){
    string coordenadas = " ";

    for(int i = 0 ; i < this->vector_ubicaciones.tamanio() ; i++){
        Ubicaciones *ubicacion = vector_ubicaciones.devolver_info(i);
        
        if (edificio == ubicacion->devolver_nombre()){
            coordenadas = coordenadas + '(' + to_string(ubicacion->devolver_fil()) + ',' + to_string(ubicacion->devolver_col()) + ") ";
        }
    }

    return coordenadas;

}
void Juego :: mostrar_edificios_construidos(){
    cout << BGND_DARK_AQUA_29<< "\t\t" "╔---------------------------------------------------------------------╗" << END_COLOR << endl
         << BGND_DARK_AQUA_29<< "\t\t" "|          TIPO         |   UNIDADES    |         COORDENADAS         |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<< "\t\t" "|           DE          |      EN       |            EN EL            |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<< "\t\t" "|        EDIFICIO       |   ANDYPOLIS   |            MAPA             |" << END_COLOR << endl;

    for (int i = 0; i < this->vector_edificios.tamanio(); i++){
        Edificios* aux = this->vector_edificios.devolver_info(i);

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

void Juego :: mostrar_materiales(){
    cout << "\t\t\t       "<< BGND_DARK_AQUA_29 <<"╔---------------------------------------╗" << END_COLOR << endl
         << "\t\t\t       "<< BGND_DARK_AQUA_29 <<"|          TIPO         |   UNIDADES    |" << END_COLOR << endl
         << "\t\t\t       "<< BGND_DARK_AQUA_29 <<"|           DE          |     EN EL     |" << END_COLOR << endl
         << "\t\t\t       "<< BGND_DARK_AQUA_29 <<"|        MATERIAL       |     STOCK     |" << END_COLOR << endl;

    for (int i = 0; i < this->vector_materiales.tamanio(); i++){
        cout << "\t\t\t       "<< BGND_DARK_AQUA_29 <<"|-----------------------|---------------|" << END_COLOR <<endl;
        
        Material* aux = this->vector_materiales.devolver_info(i);

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
void Juego::recolectar_materiales(){

    for (int i = 0; i < vector_edificios.tamanio(); i++){
        Edificios* aux = vector_edificios.devolver_info(i);

        if (aux->cuanto_produce() > PRODUCCION_MINIMA){
            for (int j = 0; j < vector_materiales.tamanio(); j++){
                Material* aux_material = vector_materiales.devolver_info(j);
              
                if (aux->tipo_produccion() == aux_material->devolver_nombre()){
                    aux_material->agregar_al_stock(aux->cuanto_produce());    
                }
            }
        }
    }    
}

void Juego :: describir_contenido(char tipo_casilla){
     
     switch (tipo_casilla) {
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
}

void Juego :: consultar_coordenada(){
    
    int fila, columna;
    
    cout << "Igrese la fila de la coordenada que desea consultar: ";
    cin >> fila; 
    
    cout << "Igrese la columna de la coordenada que desea consultar: ";
    cin >> columna; 

    describir_contenido(mapa->consultar_tipo(fila,columna));
}


int Juego :: casillas_disponibles(){
    int casillas_disponibles = 0;
    for(int i = 0 ; i < mapa->devolver_filas() ; i++){
        for(int j = 0; j < mapa->devolver_columnas() ; j++){
            
            if (mapa->consultar_tipo(i,j) == CAMINO){
                casillas_disponibles++;
            }
        }       
    }
    return casillas_disponibles;
}

int Juego :: numero_aleatorio(int limite_inferior, int limite_superior){
    return(limite_inferior + rand() % (limite_superior + 1 - limite_inferior)) ;
}

bool Juego :: casilla_disponible(Coordenada coordenada){
   
    return this->mapa->consultar_tipo(coordenada.fila, coordenada.columna) == CAMINO;

}

Coordenada Juego :: asignar_coordenada(Coordenada coordenada){

    coordenada.fila = numero_aleatorio(MIN_FILAS, mapa->devolver_filas());

    return coordenada;
}

void Juego ::ejecutar_lluvia_materiales(){
    srand((unsigned)time(NULL));
    
    int cantidad_madera, cantidad_metal, cantidad_piedra, total_materiales;
    Coordenada coordenada_piedra, coordenada_metal, coordenada_madera;

    cantidad_madera = numero_aleatorio(MIN_MADERA, MAX_MADERA);
    cantidad_piedra = numero_aleatorio(MIN_PIEDRA, MAX_PIEDRA);
    cantidad_metal = numero_aleatorio(MIN_METAL, MAX_METAL);

    total_materiales = cantidad_madera + cantidad_metal + cantidad_piedra;

    if (total_materiales < casillas_disponibles()){
        
    }
    

    //cout << cantidad_metal << " metal " << cantidad_piedra << " piedra " << cantidad_madera << "madera" << endl;

}
/*
*/
int Juego :: procesar_opcion(){
     string opcion;
        //Opciones opciones(&this->vector_edificios,&this->vector_ubicaciones,&this->vector_materiales,this->mapa);
        Construir_edificio optt(&this->vector_edificios,&this->vector_ubicaciones,&this->vector_materiales,this->mapa);
        cout << "Ingresar una de las siguientes opciones:"<< endl;
        getline(cin,opcion);
        switch (stoi(opcion)) {
        case 1:
        cout << "entre aqui  1" << endl;
        optt.accion();
        this->mapa->mostrar();
            break;
        case 2:
        cout << "entre aqui  2" << endl;
            
            break;
        case 3:
        cout << "entre aqui  3" << endl;
            
            break;
        case 4:
        cout << "entre aqui  4" << endl;
            
            break;
        case 5:
        cout << "entre aqui  5" << endl;
        	
			break;
        case 6:
        cout << "entre aqui  6" << endl;
			break;
        case 7:
        cout << "entre aqui  7" << endl;
			break;
        case 8:
        cout << "entre aqui  8" << endl;
			break;
        case 9:
        cout << "entre aqui  9" << endl;
			break;
        case 10:
        cout << "entre aqui  10" << endl;
			break;
            cout << " que opcion desea " << endl;
    }
    return stoi (opcion);

}


void Juego :: menu(){
    
    int opcion;
    do{
        opcion = procesar_opcion();
        if(opcion > 10  || opcion < 1) cout << " invalida respuesta" << endl;

    } while (opcion < 10 || opcion > 10);
    

}