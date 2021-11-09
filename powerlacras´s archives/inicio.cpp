#include <iostream>
#include <thread>
#include <chrono>

#include "colors.h"



using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

void imprimir_salida(const string color, const string color1){

cout << color << "\t\t\t    " "                                 .''.                     " << endl <<    
               "\t\t\t    "  "       .''.             *''*    :_"<<color1<<"\\/"<<color<<"_:     .              "  << endl << 
               "\t\t\t    "  "      :_"<<color1<<"\\/"<<color<<"_:   .    .:.*_"<<color1<<"\\/"<<color<<"_*   : "<<color1<<"/\\"<<color<<" :  .'.:.'.           " << endl << 
               "\t\t\t    "  "  .''.: "<<color1<<"/\\"<<color<<" : _"<<color1<<"\\(/"<<color<<"_  ':'* "<<color1<<"/\\"<<color<<" *  : '..'.  -="<<color1<<":o:"<<color<<"=-           "<< endl << 
               "\t\t\t    "  " :_"<<color1<<"\\/"<<color<<"_:'.:::. "<<color1<<"/)\\"<<color<<"*''*  " <<TXT_LIGHT_BLUE_39 << ".|."<< color<< "* '.\\'/.'_"<<color1<<"\\(/"<<color<<"_'.':'.'           "<<endl << 
               "\t\t\t    "  " : "<<color1<<"/\\"<<color<<" : :"<<color1<<":::"<<color<<":  '*_"<<color1<<"\\/"<<color<<"_* " <<TXT_LIGHT_BLUE_39 << "| |"<< color<< "  -= "<<color1<<"o"<<color<<" =- "<<color1<<"/)\\"<<color<<"    '  *           "<<endl << 
               "\t\t\t    "  "  '..'  ':::'   * "<<color1<<"/\\"<<color<<" * " <<TXT_LIGHT_BLUE_39 << "|'|"<< color<< "  .'/.\\'.  '."<<TXT_LIGHT_BLUE_39<<"_____              "<<endl << 
               "\t\t\t    "  "      "<<color<<"*        "<<TXT_LIGHT_BLUE_39<<"__"<<color<<"*..*"<<TXT_LIGHT_BLUE_39<<" |  |     :      |.   |' .---'|     "  << endl << 
               "\t\t\t    "  "       _"<<color<<"*"<<TXT_LIGHT_BLUE_39<<"   .-'   '-. |  |     .--'|  ||   | _|    |     "<< endl << 
               "\t\t\t    "  "    .-'|  _.|  |    ||   '-__  |   |  |    ||      |     "<< endl << 
               "\t\t\t    "  "    |' | |.    |    ||       | |   |  |    ||      |     "<< endl << 
               "\t\t\t    "  " ___|  '-'     '    ''       '-'   '-.'    '`      |____ "<< END_COLOR << endl; 



}
void mostrar_salida_parpaeante(){

    bool estado = true;
    int contar = 0;

    do
    {
        if (contar = 0){
            system("clear");
            imprimir_salida(END_COLOR,TXT_LIGHT_RED_9);
            sleep_for(seconds(1));
        }
        if (contar = 1){
            system("clear");
            imprimir_salida(TXT_LIGHT_RED_9,TXT_LIGHT_YELLOW_155 );
            sleep_for(seconds(1));
        }
        if (contar = 2){
            system("clear");
            imprimir_salida(TXT_LIGHT_YELLOW_155,TXT_LIGHT_PURPLE_135 );
            sleep_for(seconds(1));
        }
        if (contar = 3){
            system("clear");
            imprimir_salida(TXT_LIGHT_PURPLE_135,TXT_LIGHT_GREEN_119 );
            sleep_for(seconds(1));
        }
        if (contar = 4){
            system("clear");
            imprimir_salida(TXT_LIGHT_GREEN_119, TXT_LIGHT_PINK_204 );
            sleep_for(seconds(1));
        }
        if (contar = 5){
            system("clear");
            imprimir_salida(TXT_LIGHT_PINK_204,END_COLOR );
            sleep_for(seconds(1));
        }
        if (contar = 6){
            system("clear");
            imprimir_salida(END_COLOR,END_COLOR );
            estado=false;
            sleep_for(seconds(1));
        }

        contar ++;
    } while (estado ==true);
    
}

void imprimir_edificio(){
    cout << TXT_LIGHT_BLUE_39 << "                                                                                                " << TXT_LIGHT_YELLOW_185 << "☺/" << END_COLOR << TXT_LIGHT_BLUE_39 << endl <<
            "                                                         " << TXT_LIGHT_YELLOW_185 << "\\☺/" << TXT_LIGHT_BLUE_39 << "                             ╦  ╦╦ " << TXT_LIGHT_YELLOW_185 << "/|" << TXT_LIGHT_BLUE_39 << " ╦ " << endl <<
            "                                                       ╦╦ " << TXT_LIGHT_YELLOW_185 << "|" << TXT_LIGHT_BLUE_39 << " ╦╦                           ╔╗╔╗╔╗╔╗╔╗" << endl <<
            "                                                       ╔╗╔╗╔╗╔         " <<TXT_LIGHT_YELLOW_185 << "███" <<TXT_LIGHT_BLUE_39 << "║              ╔╗╔╗╔╗╔╗╔╗                 " << endl <<
            "   " << TXT_LIGHT_PINK_167 << "█PL█" << TXT_LIGHT_BLUE_39 << "                                 " <<TXT_LIGHT_GREEN_46 << "█AP█║" <<TXT_LIGHT_BLUE_39 << "          ╔╔╗  ╔╗            ║          ╔╗╔╗╔╗╔╗╔╗╔╗╔╗              " << endl <<
            "      ║                                     ║          ╔╔╗  ╔╗           ╦╦          ╔╗╔╗╔    ╔╗╔╗╔              " << endl <<
            "   ╦╦ ║ ╦╦           " << TXT_LIGHT_YELLOW_185 << "███" << TXT_LIGHT_BLUE_39 << "║            ╦╦    ╦╦    ╦╦    ╔╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗    ╔╗╔╗╔             " << endl <<
            "  ╔╗╔╗╔╗╔╗              ║           ╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗" <<TXT_LIGHT_YELLOW_185 << "/======\\\\\\\\\\\\\\\\" << TXT_LIGHT_BLUE_39 << "╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗                     " << endl <<
            "╦╗╔╗╔╗╔╗╔╗╔╦    ╦╦   ╦╦ ║ ╦╦  ╦╦    ╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╔╗╔╗╔╗" <<TXT_LIGHT_YELLOW_185 << "/========\\\\\\\\\\\\\\\\" << TXT_LIGHT_BLUE_39 << "╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╦╦╔╗╔╗    ╦╦    ╦" << endl <<
            "╔╗╔  ╗╔╗╔╗╔╗╔╗╔╗╔╗╔□╗╔╗╔╗╔□╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗/    \\╔╗╔╗╔╗╔╗╔╗╔╗" <<TXT_LIGHT_YELLOW_185 << "/==========\\\\\\\\\\\\\\\\" << TXT_LIGHT_BLUE_39 << "╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔" << endl <<
            "╔╗╔  ╗╔╗╔----╗╔╗╔╗╔□╗╔╗╔╗╔□╗╔╗╔╗╔╗╔╗╔╗╔╗╔□      ╗╔╗╔╗╔╗╔╗╔╗╔" <<TXT_LIGHT_YELLOW_185 << "║░░░░████░░║░░░░░░║" << TXT_LIGHT_BLUE_39 << "╗╔╗╔╗╔╗╔╗╔╗    ╔╗╔╗╔╗╔╗╔----╔╗╔╗╔╗╔" << endl<<
            "╔╗╔╗╔╗╔╗╔    ╗╔╗╔□╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔      ╗╔╗╔╗╔╗╔╗╔╗╔" <<TXT_LIGHT_YELLOW_185 << "║░░░░███▀░░║░░░░░░║" << TXT_LIGHT_BLUE_39 << "╗╔╗╔╗╔╗╔╗╔╗    ╔╗╔╗╔╗╔╗╔    ╔╗╔╗╔╗╔" << endl <<
            "╔╗╔╗╔╗╔╗╔    ╗╔╗╔╗╔□╗╔╗╔╗╔□╗╔╗╔╗╔╗╔╗╔╗╔╗╔□      ╗╔╗╔╗╔╗╔╗╔╗╔" <<TXT_LIGHT_YELLOW_185 << "║░░░░████░░║░░░░░░║" << TXT_LIGHT_BLUE_39 << "╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔╗╔    ╔╗╔╗╔╗╔ " << END_COLOR << endl;


}

void imprimir_bienvenida(){

    cout << "\t\t"" ____  _                           _     _        " << endl <<    
            "\t\t""| __ )(_) ___ _ ____   _____ _ __ (_) __| | ___  ___           __ _  " << endl << 
            "\t\t""|  _ \\| |/ _ \\ '_ \\ \\ / / _ \\ '_ \\| |/ _` |/ _ \\/ __|         / _` |   " << endl << 
            "\t\t""| |_) | |  __/ | | \\ V /  __/ | | | | (_| | (_) \\__ \\        | (_| | " << endl << 
            "\t\t""|____/|_|\\___|_| |_|\\_/ \\___|_| |_|_|\\__,_|\\___/|___/         \\__,_|    " << endl << 
            "\t\t\t""    _              _                   _ _            " << endl <<
            "\t\t\t""   / \\   _ __   __| |_   _ _ __   ___ | (_)___        " << endl <<
            "\t\t\t""  / _ \\ | '_ \\ / _` | | | | '_ \\ / _ \\| | / __|       " << endl <<
            "\t\t\t"" / ___ \\| | | | (_| | |_| | |_) | (_) | | \\__ \\       " << endl <<
            "\t\t\t""/_/   \\_\\_| |_|\\__,_|\\__, | .__/ \\___/|_|_|___/      " << endl << 
            "\t\t\t""                     |___/|_|                         "<< endl;

}
int main (){   //  g++ main2.cpp mapa.cpp casilleroc.cpp casilleroi.cpp casillerot.cpp casillero.cpp parser.cpp parsere.cpp leer_archivos.cpp ubicaciones.cpp juego.cpp cargar_archivos.cpp aserradero.cpp mina.cpp escuela.cpp fabrica.cpp obelisco.cpp planta_electrica.cpp edificios.cpp material.cpp -o o

    imprimir_edificio();
    imprimir_bienvenida();
    
    mostrar_salida_parpaeante();

}

