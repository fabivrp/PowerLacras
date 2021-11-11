#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

using namespace std;

const int VACIO = 0;
const int INICIO = 0;

template <typename Tipo>
class Vector {
private:
    //Atributos
    int largo;
    Tipo** elementos;

    /*
    *PRE:
    *POST:Redimensiona el vector
    */
    void redimensionar();
  
    /*
    *PRE:
    *POST:copia los datos existentes desde una posicio hasta otra determinada
    */
    void copiar(Tipo** vector, int desde, int hasta);
public:
    //Metodos
    Vector();
  
    void Vector_destructor();
  
    /*
    *PRE:
    *POST:devuelve la longitud del vector
    */
    int tamanio();
      
    /*
    *PRE:
    *POST: devuelve la informacion que hay en el vector en la posicion solicitada
    */
    Tipo* devolver_info(int pos);
  
    /*
    *PRE:
    *POST:añade un elemeto al vector
    */
    void anadir_elemento(Tipo* elemento);
    void restar_tamanio();

};
//CONSTRUCTOR
template <typename Tipo>
Vector<Tipo>::Vector() {
    
    largo = VACIO;
    elementos = NULL;
}

//DESTRUCTOR
template <typename Tipo>
void Vector<Tipo>::Vector_destructor() {
    
    for(int i = 0 ; i < largo ; i++){
        delete elementos[i];
    }
    delete  [] elementos;
}

//DEVOLVER LARGO DEL VECTOR
template <typename Tipo>
int Vector<Tipo>::tamanio() {
    
    return this -> largo;
}


//COPIAR 
template <typename Tipo>
void Vector<Tipo>::copiar(Tipo** auxiliar, int desde, int hasta){

    for (int i = desde; i < hasta; i++){
        elementos[i] = auxiliar[i];
    }
    

}

//REDIMENSIONAR
template <typename Tipo>
void Vector<Tipo>::redimensionar() {
   
   Tipo** auxiliar = elementos;
   elementos = new Tipo* [(largo)+1];
   copiar(auxiliar,INICIO,largo);
   delete [] auxiliar;
   largo ++;
   
}

//AÑADIR ELEMENTO
template <typename Tipo>
void Vector<Tipo>::anadir_elemento(Tipo* dato) {
    
    redimensionar();
    elementos[largo-1] = dato;
}  

template <typename Tipo>
Tipo* Vector<Tipo>::devolver_info(int pos) {
    
    return elementos[pos];
} 






#endif //VECTOR_H