//
// Created by majo on 9/17/25.
//
#include <iostream>
#include <fstream>
#include <vector>

#include #Entrada.h

using::std::ifstream;
using std::getline;
using std::stringstream;

using namespace std;

struct Entrada {
    int dia;
    string mes;
    string hora;
// agragar todas las partes de ip, port y mensaje
    int ip1;
    string mensaje;

    Entrada(const string& linea) {

        stringstream ss(linea);

    ss >> dia >> mes >> hora >> ip1 >> mensaje;



    };

};

void get_data() {
    ifstream bitacora("bitacora.txt");
    bitacora.open("bitacora.txt");
    if (!bitacora.is_open()) {
        exit(1);
    }

    string linea;
    while (getline(bitacora,linea,'\n')) {

        cout << linea << std::endl;

        //crear structs dinamicos por cada linea del txt
        Entrada* registro = new Entrada(linea);
        entries.push_back(*registro);

        cout << entries.size() << endl;

        delete registro;
    }
    bitacora.close();

}
