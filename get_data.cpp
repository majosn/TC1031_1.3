//
// Created by majo on 9/17/25.
//
#include <iostream>
#include <fstream>
#include <vector>
using::std::ifstream;
using std::getline;
using std::stringstream;

using namespace std;

struct Entrada {
    int dia;
    string mes;
    string hora;
    string ip;
    string mensaje;

    Entrada(const string& linea) {
        stringstream ss(linea);

    };


};

vector <Entrada> entries;


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
        Entrada* aaa = new Entrada(linea);
        entries.push_back(*aaa);

        cout << entries.size() << endl;

        delete aaa;
    }
    bitacora.close();

}
