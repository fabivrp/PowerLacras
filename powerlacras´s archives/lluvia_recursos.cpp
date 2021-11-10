//#include "lluvia_recursos.h"
#include "lluvia_recursos.h"






Lluvia_recursos::Lluvia_recursos(Vector <Edificios> *vector_edificio,Vector <Ubicaciones> *vector_ubicaciones,Vector <Material> *vector_materiales ,Mapa *mapa) : Opciones(vector_edificio,vector_ubicaciones,vector_materiales,mapa){
}





void Lluvia_recursos :: accion(){
    srand((unsigned)time(NULL));
    
    int cantidad_madera, cantidad_metal, cantidad_piedra, total_materiales;

    cantidad_madera = numero_aleatorio(MIN_MADERA, MAX_MADERA);
    cantidad_piedra = numero_aleatorio(MIN_PIEDRA, MAX_PIEDRA);
    cantidad_metal = numero_aleatorio(MIN_METAL, MAX_METAL);
    
    total_materiales = cantidad_madera + cantidad_metal + cantidad_piedra;
    if (total_materiales == casillas_disponibles(total_materiales)){ 
        colocar_material(cantidad_madera, MADERA);
        colocar_material(cantidad_piedra, PIEDRA);
        colocar_material(cantidad_metal, METAL);
    }
    else cout << "No hay suficiente espacio para hacer la lluvia de materiales" << endl;

}

 
int Lluvia_recursos :: casillas_disponibles(int total_materiales){
    int casillas_disponibles = 0;
    int i = 0;
    while(i < this->mapa->devolver_filas() && casillas_disponibles < total_materiales){
        int j = 0;
        while(j < this->mapa->devolver_columnas() && casillas_disponibles < total_materiales){
            if (this-> mapa->consultar_tipo(i,j) == CAMINO){
                casillas_disponibles++;
            }
            j++;
        } 
        i++;      
    }
    return casillas_disponibles;
}



int Lluvia_recursos :: numero_aleatorio(int limite_inferior, int limite_superior){
    return(limite_inferior + rand() % (limite_superior + 1 - limite_inferior)) ;
}

bool Lluvia_recursos :: casilla_disponible(){
   
    return this->mapa->consultar_tipo(this->fil, this->col) == CAMINO;

}

void Lluvia_recursos :: asignar_coordenada(){
        
    while (!casilla_disponible()){ 
        this->fil = numero_aleatorio(MIN_FILAS, (this->mapa->devolver_filas()-1));
        this->col = numero_aleatorio(MIN_COLUMNAS, (this->mapa->devolver_columnas()-1));    
    }
}

void Lluvia_recursos :: colocar_material(int cantidad_material, char tipo){
    
    this->fil = 0; 
    this->col = 0; 

    if (cantidad_material > 0){
        
        for (int i = 0; i < cantidad_material; i++){
            
            asignar_coordenada();
            Casillerot* casilla = new Casillerot(tipo);

            mapa->actualizar_mapa(casilla, this->fil, this->col);
        }
    }
    

}