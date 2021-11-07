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

void Juego :: mostrar_edificios(){
    cout << BGND_DARK_AQUA_29<<"+-------------------------------------------------------------------------------------------------------+" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|          TIPO         |            MATERIALES  REQUERIDOS             |   UNIDADES    |  DISPONIBLES  |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|           DE          |-----------------------------------------------|      EN       |     PARA SU   |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|        EDIFICIO       |     PIEDRA    |     MADERA    |     METAL     |   ANDYPOLIS   |  CONSTRUCCION |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|-----------------------------------------------------------------------|-------------------------------|" << END_COLOR <<endl;

    for (int i = 0; i < vector_edificios.tamanio(); i++){
        Edificios* aux = vector_edificios.devolver_info(i);

        int espacio_delantero = calcular_espacio_delantero(LARGO_EDIFICIO, aux->devolver_nombre().length());
        int espacio_trasero = LARGO_EDIFICIO - espacio_delantero - aux->devolver_nombre().length();
        string material = to_string(aux->devolver_cantidad_piedra());
        
        cout << BGND_BLACK_16<< setfill(' ');
        cout << "|" << setw(espacio_delantero) << "" << aux->devolver_nombre() << setw(espacio_trasero) << "|";
        
        
        espacio_delantero = calcular_espacio_delantero(LARGO_CARACTERISTICAS, material.length());
        espacio_trasero = LARGO_CARACTERISTICAS - espacio_delantero - material.length();
        cout << setw(espacio_delantero) << "" << material << setw(espacio_trasero) << "|";
        
        material = to_string(aux->devolver_cantidad_madera());
        espacio_delantero = calcular_espacio_delantero(LARGO_CARACTERISTICAS, material.length());
        espacio_trasero = LARGO_CARACTERISTICAS - espacio_delantero - material.length();
        cout << setw(espacio_delantero) << "" << material << setw(espacio_trasero) << "|";
        
        material = to_string(aux->devolver_cantidad_piedra());
        espacio_delantero = calcular_espacio_delantero(LARGO_CARACTERISTICAS, material.length());
        espacio_trasero = LARGO_CARACTERISTICAS - espacio_delantero - material.length();
        cout << setw(espacio_delantero) << "" << material << setw(espacio_trasero) << "|";
        
        material = to_string(aux->devolver_construidos());
        espacio_delantero = calcular_espacio_delantero(LARGO_CARACTERISTICAS, material.length());
        espacio_trasero = LARGO_CARACTERISTICAS - espacio_delantero - material.length();
        cout << setw(espacio_delantero) << "" << material << setw(espacio_trasero) << "|";
        
        material = to_string(aux->devolver_max_construccion());
        espacio_delantero = calcular_espacio_delantero(LARGO_CARACTERISTICAS, material.length());
        espacio_trasero = LARGO_CARACTERISTICAS - espacio_delantero - material.length();
        cout << setw(espacio_delantero) << "" << material << setw(espacio_trasero) << "|" << END_COLOR <<endl;
        
        
        cout << BGND_DARK_AQUA_29 << "|-----------------------------------------------------------------------|-------------------------------|" << END_COLOR << endl;
      
    }
    
}
int calcular_espacio_delantero(int espacio, int  largo_palabra){
    
    return (espacio - largo_palabra)/2;
}

void Juego :: mostrar_edificios_construidos(){
    cout << BGND_DARK_AQUA_29<<"+-------------------------------------------------------+" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|          TIPO         |   UNIDADES    |  COORDENADAS  |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|           DE          |      EN       |      EN EL    |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|        EDIFICIO       |   ANDYPOLIS   |      MAPA     |" << END_COLOR << endl
         << BGND_DARK_AQUA_29<<"|-----------------------|-------------------------------|" << END_COLOR <<endl;

    for (int i = 0; i < vector_edificios.tamanio(); i++){
        Edificios* aux = vector_edificios.devolver_info(i);

        int espacio_delantero = calcular_espacio_delantero(LARGO_EDIFICIO, aux->devolver_nombre().length());
        int espacio_trasero = LARGO_EDIFICIO - espacio_delantero - aux->devolver_nombre().length();
        string caracteristica = to_string(aux->devolver_construidos());
        
        cout << BGND_BLACK_16<< setfill(' ');
        cout << "|" << setw(espacio_delantero) << "" << aux->devolver_nombre() << setw(espacio_trasero) << "|";
        
        
        espacio_delantero = calcular_espacio_delantero(LARGO_CARACTERISTICAS, caracteristica.length());
        espacio_trasero = LARGO_CARACTERISTICAS - espacio_delantero - caracteristica.length();
        cout << setw(espacio_delantero) << "" << caracteristica << setw(espacio_trasero) << "|";
         
        cout << BGND_DARK_AQUA_29 << "|-----------------------|-------------------------------|" << END_COLOR << endl;
      
    }
    
}
int Juego :: procesar_opcion(){
    string opcion;
        Opciones opciones(this->vector_edificios,this->vector_ubicaciones,this->vector_materiales,this->mapa);
        cout << "Ingresar una de las siguientes opciones:"<< endl;
        getline(cin,opcion);
        switch (stoi(opcion)) {
        case 1:
        cout << "entre aqui  1" << endl;
            opciones.costruir_edificio();
            
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