#include "vector.h"
#include <iostream>
using namespace std;

//CONSTRUCTOR
template <typename Tipo>
Vector<Tipo>::Vector() {
    largo = VACIO;
    elementos = VACIO;
}

//DESTRUCTOR
template <typename Tipo>
Vector<Tipo>::~Vector() {
    if(largo > VACIO)
        delete [] elementos;
}

//DEVOLVER LARGO DEL VECTOR
template <typename Tipo>
int Vector<Tipo>::tamanio() {
    return this -> largo;
}


//COPIAR 
template <typename Tipo>
void Vector<Tipo>::copiar(Tipo* auxiliar, int desde, int hasta){

    for (int i = desde; i < hasta; i++){
        elementos[i] = auxiliar[i];
    }
    

}

//REDIMENSIONAR
template <typename Tipo>
void Vector<Tipo>::redimensionar() {
   Tipo* auxiliar = elementos;
   elementos = new Tipo [(largo)+1];
   copiar(auxiliar,INICIO,largo);
   delete [] auxiliar;
   largo ++;
   cout << " largo " << largo << endl;
   
}

//AÑADIR ELEMENTO
template <typename Tipo>
void Vector<Tipo>::anadir_elemento(Tipo* dato) {
    redimensionar();
    elementos[largo-1] = dato;
}  