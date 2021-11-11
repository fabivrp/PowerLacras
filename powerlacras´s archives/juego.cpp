#include "juego.h"
#include <stdlib.h>
#include <time.h>





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

int Juego :: procesar_opcion(){
     string opcion;
        Construir_edificio op1(&this->vector_edificios,&this->vector_ubicaciones,&this->vector_materiales,this->mapa);
        Demoler_edificio op4(&this->vector_edificios,&this->vector_ubicaciones,&this->vector_materiales,this->mapa);
        Listar_edificios_construidos op2(&this->vector_edificios,&this->vector_ubicaciones,&this->vector_materiales,this->mapa);
        Listar_edificios op3(&this->vector_edificios,&this->vector_ubicaciones,&this->vector_materiales,this->mapa);
        Listar_materiales op7(&this->vector_edificios,&this->vector_ubicaciones,&this->vector_materiales,this->mapa);
        Consultar_coordenada op6(&this->vector_edificios,&this->vector_ubicaciones,&this->vector_materiales,this->mapa);
        Recolectar_recursos op8(&this->vector_edificios,&this->vector_ubicaciones,&this->vector_materiales,this->mapa);
        Lluvia_recursos op9(&this->vector_edificios,&this->vector_ubicaciones,&this->vector_materiales,this->mapa);
        cout << "Ingresar una de las siguientes opciones:"<< endl;
        getline(cin,opcion);
        switch (stoi(opcion)) {
        case 1:
        cout << "entre aqui  1" << endl;
        op1.accion();
        this->mapa->mostrar();
            break;
        case 2:
            cout << "entre aqui  2" << endl;
            op2.accion();
            break;
        case 3:
        cout << "entre aqui  3" << endl;
            op3.accion();
            
            break;
        case 4:
        cout << "entre aqui  4" << endl;
           // op4.accion();
            
            break;
        case 5:
        mapa->mostrar();
        cout << "entre aqui  5" << endl;
        	
			break;
        case 6:

        cout << "entre aqui  6" << endl;
            op6.accion();
			break;
        case 7:
        cout << "entre aqui  7" << endl;
            op7.accion();
			break;
        case 8:
        cout << "entre aqui  8" << endl;
            op8.accion();
        
			break;
        case 9:
        cout << "entre aqui  9" << endl;
            op9.accion();

			break;
        case 10:
        cout << "entre aqui  10" << endl;
			break;
            cout << " que opcion desea " << endl;
    }
    return stoi (opcion);

}

 /*
bool Juego :: hay_edificio(int fila, int columna){
    return ((mapa->consultar_tipo(fila, columna) == ESCUELA) 
            || (mapa->consultar_tipo(fila, columna) == OBELISCO)
            || (mapa->consultar_tipo(fila, columna) == PLANTA_ELECTRICA) 
            || (mapa->consultar_tipo(fila, columna) == ASERRADERO)
            || (mapa->consultar_tipo(fila, columna) == MINA) 
            || (mapa->consultar_tipo(fila, columna) == FABRICA)); 
}

void Juego :: obtener_datos(int& piedra, int& madera, int& metal, int fila, int columna){

    int contador = 0;
    Edificios* aux = vector_edificios.devolver_info(contador); 
    
    while ((aux->devolver_simbolo() != mapa->consultar_tipo(fila, columna)) && (contador < vector_edificios.tamanio())){
        contador++;
        aux = vector_edificios.devolver_info(contador);
    }
    
    piedra = aux->devolver_cantidad_piedra();
    madera = aux->devolver_cantidad_madera();
    metal = aux->devolver_cantidad_metal();

}

void Juego :: regresar_material(string tipo, int cant_material){
    int contador = 0;
    Material* aux = vector_materiales.devolver_info(contador); 
    
    while ((aux->devolver_nombre() != tipo) && (contador < vector_materiales.tamanio())){
        contador++;
        aux = vector_materiales.devolver_info(contador);
    }

    aux->agregar_al_stock(cant_material);
}

void Juego :: demoler_edificio(){
    int fila, columna;
    int piedra_necesaria, metal_necesario, madera_necesaria;

    cout << "Ingrese la fila de la coordenada que desea demoler: ";
    cin >> fila;
    cout << "Ingrese la columna de la coordenada que desea demoler: ";
    cin >> columna;

    if (hay_edificio(fila, columna)){
        obtener_datos(piedra_necesaria, madera_necesaria, metal_necesario, fila, columna);
        Casilleroc* casillero = new Casilleroc(TERRENO);
        mapa->actualizar_mapa(casillero, fila, columna);

        regresar_material(TIPO_PIEDRA, piedra_necesaria/2);
        regresar_material(TIPO_MADERA, madera_necesaria/2);
        regresar_material(TIPO_METAL, metal_necesario/2);
       
    }
}
 */

void Juego :: chequear_respuesta(){
    
    int opcion;
    do{
        opcion = procesar_opcion();
        if(opcion > 10  || opcion < 1) cout << " invalida respuesta" << endl;

    } while (opcion < 10 || opcion > 10);
    

}