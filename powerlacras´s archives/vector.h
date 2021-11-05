#ifndef VECTOR_H
#define VECTOR_H
#include "material.h"

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



#endif //VECTOR_H