#include "opciones.h"


bool hay_objeto(string nombre_a_buscar,Vector <Edificios> vectorr,int *pos_vector) {
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

bool hay_objeto2(string nombre_a_buscar,Vector <Material> vectorr,int *pos_vector) {
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

int calcular_espacio_delantero(int espacio, int  largo_palabra){
    return (espacio - largo_palabra)/2;
}


void imprimir_centrado(int espacio, string palabra){
      
        int espacio_delantero = calcular_espacio_delantero (espacio, (int)palabra.length());
        int espacio_trasero = espacio - espacio_delantero - (int)palabra.length();
        cout << BGND_BLACK_16<< setfill(' ');
        cout << setw(espacio_delantero) << "" << palabra << setw(espacio_trasero) << "|" << END_COLOR;
        
}

void pedir_coordenada(int *fila, int *columna){
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
bool coordenada_es_valida(int *fil,int *col,Mapa *mapa){
    bool es_valida = true;
    do {
        pedir_coordenada(&(*fil),&(*col));
        if(*fil < 0 || *col < 0 || *fil >= mapa->devolver_filas() || *col >= mapa->devolver_columnas()){
            cout << "Las coordenadas ingresadas no son validas " << endl;
            es_valida = false;
        }
        else {
            es_valida =  true;
        }
    }while(!es_valida);
    return true;

}
bool hay_coordenada_disponible(int *fil,int *col,Mapa *mapa){
    bool si_hay = false;
    coordenada_es_valida(&(*fil),&(*col),mapa);
    //if(this->mapa->devolver_info_coordenada(*fil,*col) == 'T'){
    if(mapa->consultar_tipo(*fil,*col) == 'T'){
        si_hay = true;
    }
    else{
        cout << "la coordenada ingresada esta ocupada" << endl;
    }
    return si_hay;
   
}

bool confirmo_accion(string accion,string objeto){
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
   cout << endl;
   return confirmo_accion;

}

