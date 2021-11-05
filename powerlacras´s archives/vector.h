#ifndef VECTOR_H
#define VECTOR_H

const int VACIO = 0;
const int INICIO = 0;

template <typename Tipo>
class Vector {
private:
    //Atributos
    int largo;
    Tipo* elementos;
public:
    //Metodos
    Vector();

    ~Vector();

    int tamanio();


    void anadir_elemento(Tipo* elemento);

private:

    void redimensionar();

    void copiar(Tipo* vector, int desde, int hasta);
};

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
    return largo;
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
   elementos = new Tipo elementos[(largo)+1];
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
   


#endif //VECTOR_H