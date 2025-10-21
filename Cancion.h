#ifndef EJERCICIO_1_CANCION_H
#define EJERCICIO_1_CANCION_H

#include <string>
using namespace std;

class Cancion {
private:
    string Titulo;
    string Autor;
    int DuracionSeg;

public:
    // Constructor
    Cancion(string Titulo, string Autor, int DuracionSeg);

    // Métodos públicos
    void mostrarInformacion();
    string obtenerDuracionMMSS();

    // Getters
    string getTitulo();
    string getAutor();
    int getDuracionSeg();
};

#endif //EJERCICIO_1_CANCION_H
// Created by RAGUS on 21/10/2025.
