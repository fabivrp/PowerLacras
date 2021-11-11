#include "juego.h"
#include <stdlib.h>
#include <time.h>


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

int Juego :: devolver_pos_vector(string nombre_a_buscar) {
    int pos_vector_edificio;
    for (int i = 0 ; i < this->vector_edificios.tamanio();i++){
        Edificios *edificios = vector_edificios.devolver_info(i);
            if (edificios->devolver_nombre() == nombre_a_buscar ) pos_vector_edificio = i;
    }
    return pos_vector_edificio;
}

void Juego :: agregar_ubicaciones(){
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
}

int Juego :: procesar_opcion(){
     string opcion;
        Construir_edificio construir_edificio(&(this->vector_edificios),&(this->vector_ubicaciones),&(this->vector_materiales),this->mapa);
        Demoler_edificio demoler_edificio(&(this->vector_edificios),&(this->vector_ubicaciones),&(this->vector_materiales),this->mapa);
        Listar_edificios_construidos listar_edificios_construidos(this->vector_edificios,this->vector_ubicaciones);
        Listar_edificios listar_edificios (this->vector_edificios,this->vector_ubicaciones,this->vector_materiales);
        Listar_materiales listar_materiales(this->vector_materiales);
        Consultar_coordenada consultar_coordenada(this->vector_edificios,this->vector_ubicaciones,this->vector_materiales,this->mapa);
        Recolectar_recursos recolectar_recursos(this->vector_edificios,&(this->vector_materiales));
        Lluvia_recursos lluvia_recursos(this->mapa);
        Guardar guardar(this->vector_ubicaciones,this->vector_edificios,this->vector_materiales,this->mapa);
        imprimir_menu();
        cout << "Ingresar una de las siguientes opciones:"<< endl;
        getline(cin,opcion);
        system(CLR_SCREEN);
        switch (stoi(opcion)) {
        case 1:
        construir_edificio.accion();
            break;
        case 2:
            listar_edificios_construidos.accion();
            break;
        case 3:
            listar_edificios.accion();
            break;
        case 4:
           demoler_edificio.accion();
            break;
        case 5:
            mapa->mostrar();
			break;
        case 6:
            consultar_coordenada.accion();
			break;
        case 7:
            listar_materiales.accion();
			break;
        case 8:
            recolectar_recursos.accion();
			break;
        case 9:
            lluvia_recursos.accion();
			break;
        case 10:
        cout << "entre aqui  10" << endl;
        guardar.guardar_todo();
			break;
            cout << " que opcion desea " << endl;
    }

    if(stoi(opcion) > 10  || stoi(opcion) < 1) cout << "Ingresaste un respuesta invalida " << endl;
    cout << endl <<"Presione Enter para continuar";
    cin.get(); 
    system(CLR_SCREEN);
    return stoi (opcion);
}



void Juego :: menu(){

    
    int opcion;
    system(CLR_SCREEN);
    imprimir_edificio();
    imprimir_bienvenida();
    cout << endl <<"Presione Enter para continuar";
    cin.get(); 
    system(CLR_SCREEN);

    do{
        opcion = procesar_opcion();
        //imprimir_menu();

    } while (opcion < 10 || opcion > 10);
    

}