#include <iostream>
#include "casillero.h"
#include "edificios.h"
#include "leer_archivos.h"
#include "mapa.h"
#include "parser.h"
#include "parsere.h"
#include "ubicaciones.h"
#include "juego.h"
#include <fstream>




using namespace std;

int main(){
    Juego juego;

    if (juego.cargar_archivos()){
       cout << "si cargoooooooooooooooooooo" << endl;
    }

   /* Leer_archivos archivo = Leer_archivos("mapa_vacio.txt");
    
    
    if (!archivo.hay_archivo()) return 0;
    if (!archivoe.hay_archivo()) return 0;



    ifstream archivot("mapa_vacio.txt");
    ifstream archivow("edificios.txt");
    ifstream archivouu("ubicaciones.txt");
    bool si_leyo = true;
    string leido;
    
    Ubicaciones* ubi[15];
    int contador = 0;
    for(int i = 0 ;!archivouu.eof();i++ ){
    string nombre;
    int fil , col;
    
    nombre = archivou.leer_hasta_espacio(archivouu,' ');
    archivou.leer_hasta_espacio(archivouu,'(');
    fil = stoi(archivou.leer_hasta_espacio(archivouu,','));
    col = stoi(archivou.leer_hasta_espacio(archivouu,')'));
    archivoe.leer_hasta_espacio(archivouu,'\n');
    ubi[i] = new Ubicaciones(nombre,fil,col); 
    contador++; 
    }
for(int i = 0 ; i < contador ; i++ ){
    cout << ubi[i]->devolver_nombre() << " ";
    cout << ubi[i]->devolver_fil() << " ";
    cout << ubi[i]->devolver_col() << endl;
}

    for(int i = 0 ; i < 6 ; i++){
        delete ubi[i];
    }
    //delete [] ubi;


    
    Edificios *edificios[6];*/
    //archivoe.leer_hasta_espacio(archivow,&si_leyo);
    //hola = stoi(archivoe.leer_hasta_espacio(archivow,&si_leyo));
    //cout << hola << endl;
    
    
    /*for(int i = 0 ; i < 6 ; i++){
        Parsere parsere = Parsere(archivoe.leer_hasta_espacio(archivow,' '));
        edificios[i] = parsere.procesar_entrada(archivow);
    }
    
    for(int i = 0 ; i < 6 ; i++){
        delete edificios[i];
    }*/
    //delete [] edificios;
    /*do {
         edificios = new Mina(archivoe.leer_hasta_espacio(archivow,&si_leyo),stoi(archivoe.leer_hasta_espacio(archivow,&si_leyo)),stoi(archivoe.leer_hasta_espacio(archivow,&si_leyo)),stoi(archivoe.leer_hasta_espacio(archivow,&si_leyo)),stoi(archivoe.leer_hasta_espacio(archivow,&si_leyo)));
         cout << "pirmera " << endl ;
     } while(si_leyo);
    
    cout << edificios->cuanto_produce() << endl;*/



/*
    int fil = stoi(archivo.leer_hasta_espacio(archivot,' '));
    int col = stoi( archivo.leer_hasta_espacio(archivot,' '));
    Mapa *mapa = new Mapa(fil,col);
    //Casillero *vector_of_pointers = new int[(fil*col)];
    //Casillero **arreglo = new Casillero*[(fil*col)];
    int tam_m = fil * col;
    int contador = 0;
    for(int i = 0 ; i < fil ; i++ ){
    //char deli =' ';
        for (int j = 0 ; j < col ; j++){
            if(j+1 == col){
                //deli = '\n';
            }
            string letra = archivo.leer_hasta_espacio(archivot,' ');
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
delete mapa;*/
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


