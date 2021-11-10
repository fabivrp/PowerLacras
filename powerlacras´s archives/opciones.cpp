#include "opciones.h"

Opciones::Opciones(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa){
    this->vector_edificio = vector_edificio;
    this->vector_ubicaciones = vector_ubicaciones;
    this->vector_materiales = vector_materiales;
    this->mapa = mapa;
    }

bool Opciones :: hay_objeto(string nombre_a_buscar,Vector <Edificios> vectorr,int *pos_vector) {
    bool encontrado = false;
    int i = 0;
    while (i < vectorr.tamanio() && encontrado == false){
        Edificios *vector = vectorr.devolver_info(i);
            Edificios* edificio = vector;
            if (edificio->devolver_nombre() == nombre_a_buscar ){
                *pos_vector = i;
                encontrado = true;
            }
    
        i++;
    }
    if(!encontrado) cout << "No existe el edificio ingresado" << endl;
    return encontrado;
}

bool Opciones :: hay_objeto2(string nombre_a_buscar,Vector <Material> vectorr,int *pos_vector) {
    bool encontrado = false;
    int i = 0;
    while (i < vectorr.tamanio() && encontrado == false){
        Material *vector = vectorr.devolver_info(i);
            Material* material = vector;
            if (material->devolver_nombre() == nombre_a_buscar ){
                *pos_vector = i;
                encontrado = true;
            }
    
        i++;
    }
    return encontrado;
}








/*template <typename Tipo>
bool Opciones :: hay_objeto(string nombre_a_buscar,Vector <Tipo> vectorr,int *pos_vector) {
    bool encontrado = false;
    int i = 0;
    while (i < vectorr.tamanio() && encontrado == false){
        Tipo *vector = vectorr.devolver_info(i);
        if (is_same <Edificios,Tipo> :: value){
            Edificios* edificio = vector;
            if (edificio->devolver_nombre() == nombre_a_buscar ){
                *pos_vector = i;
                encontrado = true;
            }
        }
        i++;
    }
    return encontrado;
}
template <typename Tipo>
bool Opciones :: hay_objeto2(string nombre_a_buscar,Vector <Tipo> vectorr,int *pos_vector) {
    bool encontrado = false;
    int i = 0;
    while (i < vectorr.tamanio() && !encontrado){
        Tipo *vector = vectorr.devolver_info(i);
            Material* material = vector;
            if (material->devolver_nombre() == nombre_a_buscar ){
                *pos_vector = i;
                encontrado = true;
        }
        i++;
    }
    return encontrado;
}
int Opciones :: cant_material_requerido(string material,Edificios *edificio){
    int cantidad;
    if(material == "piedra"){
        cantidad = edificio->devolver_cantidad_piedra(); 
    }
    else if(material == "madera"){
        cantidad = edificio->devolver_cantidad_madera(); 
    }
    else if(material == "metal"){
        cantidad = edificio->devolver_cantidad_metal(); 
    }
    return cantidad;
}
bool Opciones :: hay_material(string nombre_material,int *pos_vector_material,int pos_vector_edificio){
    bool si_hay = true; 
    
    if (hay_objeto2(nombre_material,this->vector_materiales,&(*pos_vector_material))){
        Edificios *edificio = vector_edificio.devolver_info(pos_vector_edificio);
        int cantidad_material = cant_material_requerido(nombre_material,edificio);
        Material *material = vector_materiales.devolver_info(*pos_vector_material);
        if(cantidad_material > material->devolver_stock()) si_hay = false; 
    }
    else{
        si_hay = false;
    }
    if (!si_hay) cout << "No hay suficiente: " << nombre_material << endl;
    return si_hay;
    
}
bool Opciones :: hay_materiales_suficiente(int pos_vector_edificio,int* pos_piedra,int* pos_madera,int* pos_metal){
    bool si_hay_materiales = false;
    if (hay_material("piedra",&(*pos_piedra),pos_vector_edificio) && hay_material("madera",&(*pos_madera),pos_vector_edificio) && hay_material("metal",&(*pos_metal),pos_vector_edificio)){
        si_hay_materiales = true;
    }
    if (!si_hay_materiales) cout << "No hay suficientes materiales para la construccion" << endl;
    return si_hay_materiales;

}
bool Opciones ::hay_espacio(int pos_vector_edificio){
    bool no_hay = true;
    Edificios *edificio = this->vector_edificio.devolver_info(pos_vector_edificio);
    if(edificio->devolver_construidos() == edificio->devolver_max_construccion()) no_hay = false;
    if(!no_hay) cout << "No hay espacio para constuir: " << edificio->devolver_nombre() << endl;
    return no_hay;
}*/
void Opciones:: pedir_coordenada(int *fila, int *columna){
    string fil , col;
    cout << "Ingrese la coordenada de la fila: " ;
    getline(cin,fil);
    cout << endl;
    cout << "Ingrese la coordenada de la columna: " ;
    getline(cin,col);
    cout << endl;
    *fila = stoi(fil);
    *columna = stoi(col);
}
bool Opciones :: coordenada_es_valida(int *fil,int *col){
    bool es_valida = true;
    do {
        pedir_coordenada(&(*fil),&(*col));
        if(*fil < 0 || *col < 0 || *fil >= this->mapa->devolver_filas() || *col >= this->mapa->devolver_columnas()){
            cout << "Las coordenadas ingresadas no son validad " << endl;
            es_valida = false;
        }
        else {
            es_valida =  true;
        }
    }while(!es_valida);
    return true;

}
bool Opciones :: hay_coordenada_disponible(int *fil,int *col){
    bool si_hay = false;
    coordenada_es_valida(&(*fil),&(*col));
    //if(this->mapa->devolver_info_coordenada(*fil,*col) == 'T'){
    if(this->mapa->consultar_tipo(*fil,*col) == 'T'){
        si_hay = true;
    }
    else{
        cout << "la coordenada ingresada esta ocupada" << endl;
    }
    return si_hay;
   
}

bool Opciones :: confirmo_accion(string accion,string objeto){
    string respuesta;
    bool confirmo_accion;
    bool repetir;
    cout << "Desea confirmar la " << accion <<" del " << objeto << " ?" << endl;
    cout << "Escriba 'S' para confirmar 'N' para negar: ";
   do {
    getline(cin,respuesta); 
       if(respuesta[0] != 's' && respuesta[0] != 'n'){
        cout << "No es valida la respuesta, por favor ingrese 'S' para confirmar 'N' para negar: ";
        repetir = true;
       }
       else if (respuesta[0] == 's'){
           repetir = false;
           confirmo_accion = true;
       }
       else{
           repetir = false;
           confirmo_accion = false;
       }
    
   }while(repetir);
   return confirmo_accion;

}
/*void Opciones :: agregar_edificacion(int pos_vector_edificio,int pos_piedra,int pos_madera,int pos_metal){
    Edificios *edificio = this->vector_edificio.devolver_info(pos_vector_edificio);
    cout << edificio->devolver_construidos();
    edificio->aumentar_construidos();
    cout << edificio->devolver_construidos();
    
}*//*
void Opciones :: costruir_edificio(){
    string edificio_a_construir;
    cout << "Que edificio desea construir" << endl;
    getline(cin,edificio_a_construir);
    if (edificio_a_construir == "planta electrica") edificio_a_construir = "planta";
    int pos_vector_edificio;
    if (hay_objeto(edificio_a_construir,this->vector_edificio,&pos_vector_edificio) && hay_espacio(pos_vector_edificio)){
        int pos_piedra,pos_madera,pos_metal;
        if(hay_materiales_suficiente(pos_vector_edificio,&pos_piedra,&pos_madera,&pos_metal)){
            cout << "si hay el materiaaaalll" << endl;
            if(hay_coordenada_disponible()){
                if (confirmo_accion("construir","edificio")){
                    agregar_edificacion(pos_vector_edificio,pos_piedra,pos_madera,pos_metal);
                }
        }
        else {
           // cout << "falta de material" << endl;
        }
    }
    else{
        //cout << "el edificio ingresado no es existe" << endl;

    }

}
}*/


/*template <typename Tipo>
bool Opciones :: hay_objeto(string nombre_a_buscar,Vector <Tipo> vectorr,int *pos_vector,bool(tipoq)(Edificios vec,string nombre_a_buscar)) {
    bool encontrado = false;
    int i = 0;
    while (i < vectorr.tamanio() && encontrado == false){
        Tipo *vector = vectorr.devolver_info(i);
            if(tipoq(vector,nombre_a_buscar)){
                *pos_vector = i;
                encontrado = true;
            }  
        }
        cout << i << endl;
        i++;
    return encontrado;
}*/

/*bool Opciones:: t(Edificios* vectorr,string nombre){
    Edificios * edificio = vectorr;
if (edificio->devolver_nombre() == nombre ) return true;
return false;
}*/
