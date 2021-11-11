#include"cargar_archivos.h"


Mapa* Cargar_archivos :: cargar_mapa(int *cont_archivos){
    
    Leer_archivos archivo = Leer_archivos(PATH_ENTRADA_MAPA);
    Mapa* mapa = nullptr;
    if (archivo.hay_archivo()){
        ifstream archivo_mapa(PATH_ENTRADA_MAPA);
        int fil = stoi(archivo.leer_hasta_espacio(archivo_mapa,' '));
        int col = stoi( archivo.leer_hasta_espacio(archivo_mapa,'\n'));
        mapa = new Mapa(fil,col);
        for(int i = 0 ; i < fil ; i++ ){
            char deli =' ';
            for (int j = 0 ; j < col ; j++){
                if(j+1 == col){
                    deli = '\n';
                }
                string letra = archivo.leer_hasta_espacio(archivo_mapa,deli);
                Casillero *casilla;
                Parser parser = Parser(letra[0]);
                casilla = parser.procesar_entrada();
                mapa->llenar_mapa(casilla,i,j);
            }
        }
        archivo_mapa.close();
        *cont_archivos = *cont_archivos + 1 ;
    }
    return mapa;
}

Vector <Edificios> Cargar_archivos :: cargar_edificios(int *cont_archivos){
    
    Leer_archivos archivo = Leer_archivos(PATH_ENTRADA_EDIFICIOS);
    Edificios* edificio;
    Vector <Edificios> vector;
    if (archivo.hay_archivo()){
        ifstream archivo_edificios(PATH_ENTRADA_EDIFICIOS);
        while (!archivo_edificios.eof()){
            Parsere parsere = Parsere(archivo.leer_hasta_espacio(archivo_edificios,' '));
            edificio = parsere.procesar_entrada(archivo_edificios);
            vector.anadir_elemento(edificio);
        } 
        archivo_edificios.close();  
        *cont_archivos = *cont_archivos + 1 ;
    }
    return vector;
}

Vector <Ubicaciones> Cargar_archivos :: cargar_ubicaciones(int *cont_archivos){
    
    Leer_archivos archivo = Leer_archivos(PATH_ENTRADA_UBICACIONES);
    Ubicaciones* ubicaciones;
    Vector <Ubicaciones> vector;
    if(archivo.hay_archivo()){
        ifstream archivo_ubicaciones(PATH_ENTRADA_UBICACIONES);
        while (!archivo_ubicaciones.eof()){
            string nombre = archivo.leer_hasta_espacio(archivo_ubicaciones,' ');
            if(nombre == "planta") archivo.leer_hasta_espacio(archivo_ubicaciones,' ');
            archivo.leer_hasta_espacio(archivo_ubicaciones,'(');
            int fil = stoi(archivo.leer_hasta_espacio(archivo_ubicaciones,','));
            int col = stoi(archivo.leer_hasta_espacio(archivo_ubicaciones,')'));
            archivo.leer_hasta_espacio(archivo_ubicaciones,'\n');
            ubicaciones = new Ubicaciones(nombre,fil,col);
            vector.anadir_elemento(ubicaciones);
        }
        archivo_ubicaciones.close();
        *cont_archivos = *cont_archivos + 1 ;
    }
    return vector;
}

Vector <Material> Cargar_archivos :: cargar_materiales(int *cont_archivos){
    
    Leer_archivos archivo = Leer_archivos(PATH_ENTRADA_MATERIALES);
    Material* material;
    Vector <Material> vector;
    if(archivo.hay_archivo()){
        ifstream archivo_materiales(PATH_ENTRADA_MATERIALES);
        while (!archivo_materiales.eof()){
            material = new Material(archivo.leer_hasta_espacio(archivo_materiales,' '),stoi(archivo.leer_hasta_espacio(archivo_materiales,'\n')));
            vector.anadir_elemento(material);  

        }
        archivo_materiales.close();
        *cont_archivos = *cont_archivos + 1 ;
    }
    return vector;
}

