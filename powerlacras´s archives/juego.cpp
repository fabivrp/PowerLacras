#include "juego.h"

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
        mapa->mostrar();
    }
}


void Juego :: menu(){
    
    int opcion;
    do{
        cin >> opcion;
        switch (opcion) {
        case 1:
        cout << "entre aqui  1" << endl;
            
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
        cin >> opcion;
    }
        //mostrar_menu
        
    } while (opcion < 9);
    

}