#include <iostream>
//#include "casillero.h"
#include "edificios.h"
#include "mina.h"
#include "leer_archivos.h"
#include "mapa.h"
#include "parser.h"
#include <fstream>




using namespace std;

int main(){

    Leer_archivos archivo = Leer_archivos("mapa_vacio.txt");
    if (!archivo.hay_archivo()) return 0;



    ifstream archivot("mapa_vacio.txt");
    int fil = stoi(archivo.leer_hasta_espacio(archivot));
    int col = stoi( archivo.leer_hasta_espacio(archivot));
    Mapa *mapa = new Mapa(fil,col);
    //Casillero *vector_of_pointers = new int[(fil*col)];
    //Casillero **arreglo = new Casillero*[(fil*col)];
    int tam_m = fil * col;
    int contador = 0;
    for(int i = 0 ; i < fil ; i++ ){
        for (int j = 0 ; j < col ; j++){
            string letra = archivo.leer_hasta_espacio(archivot);
            Casillero *casilla;
            Parser parser = Parser(letra[0]);
            casilla = parser.procesar_entrada();
            mapa->llenar_mapa(casilla,i,j);
            
            
        }

    }
    archivot.close();


            //arreglo[contador] = q;
            //vector_of_pointers[contador] = q;
    //cout << archivo.leer_hasta_espacio(archivot) << endl;
    for(int i = 0 ; i < fil ; i++ ){
        for (int j = 0 ; j < col ; j++){
            mapa->mostrar(i,j);
            cout << " ";
        }
        cout << endl;
    }
//delete [] vector_of_pointers;
//delete [] arreglo;
//delete q;
delete mapa;
    //q->mostrar();
    //x->llenar_mapa(q,0,0);
    //x->mostrar(0,0);
    //Parser parser = Parser()


    //cout << archivo.leer_hasta_espacio() << endl;

    /*Mina* q = new Mina(50,20,30,100);
    cout << q->devolver_construidos() << endl;
    q->aumentar_construidos();
    cout << q->devolver_construidos() << endl;
    cout << q->cuanto_produce() << endl;

    Casillero*** mapa = new Casillero**[10];
    for (int i = 0; i<10;i++){
        mapa[i] = new Casillero*[10]; 
    }
    char casiilla = 'M';
    if(casiilla == 'M'){
        Casilleroc* casilla = new Casilleroc('M');
         mapa[0][0] = casilla;
    }*/
/* MATRIZ DINÁMICA 
    int numero_fil = 3, numero_col = 3;
    Casillero**  mapa_ = new Casillero* [numero_fil];

    for (int i = 0; i < numero_fil; i++){
        mapa[i] = new Casillero [numero_col];
    }

*/
    return 0;
}


