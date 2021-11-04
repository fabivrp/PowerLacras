#ifndef H_P_EDIFICIOS_H
#define H_P_EDIFICIOS_H


//CREO QUE LA CLASE TENDRIA QUE SER EN SINGULAR  LIKE ---> -EDIFICIO. 

<<<<<<< HEAD

class Edificios{

=======
class Edificios{
>>>>>>> 06835690e2c7e365e072c3c65fe382e91864995e
protected:
    int cant_max_construidos;
    int piedra;
    int madera;
    int metal;
    int cant_construidos;
    int produccion;
    char simbolo;
public:
    Edificios(int piedra,int madera,int metal,int cant_max_construidos);
    void aumentar_construidos();
    int devolver_construidos();

    //~edificios();
};

//Prueba

#endif //H_P_EDIFICIOS_H