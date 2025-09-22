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
    string mes;
    int dia;
    string hora;
    string ip;
    string mensaje;

    Entrada(const string& linea) {
        stringstream ss(linea);

        ss >> mes >> dia >> hora >> ip;
        getline(ss, mensaje);

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

        Entrada registro(linea);
        entries.push_back(registro);

        //cout << entries.size() << endl;

    }
    bitacora.close();

}
