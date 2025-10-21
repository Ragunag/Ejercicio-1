#include "Cancion.h"
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

// Constructor
Cancion::Cancion(string Titulo, string Autor, int DuracionSeg) {
    this->Titulo = Titulo;
    this->Autor = Autor;
    this->DuracionSeg = DuracionSeg;
}

// Método para mostrar la información completa de la canción
void Cancion::mostrarInformacion() {
    cout << "========================================" << endl;
    cout << "Titulo: " << Titulo << endl;
    cout << "Artista: " << Autor << endl;
    cout << "Duracion: " << obtenerDuracionMMSS() << " (" << DuracionSeg << " segundos)" << endl;
    cout << "========================================" << endl;
}

// Metodo para convertir la duracion a formato MM:SS
string Cancion::obtenerDuracionMMSS() {
    int minutos = DuracionSeg / 60;
    int segundos = DuracionSeg % 60;

    stringstream ss;
    ss << setfill('0') << setw(2) << minutos << ":"
       << setfill('0') << setw(2) << segundos;

    return ss.str();
}

// Getters
string Cancion::getTitulo() {
    return Titulo;
}

string Cancion::getAutor() {
    return Autor;
}

int Cancion::getDuracionSeg() {
    return DuracionSeg;
}//
// Created by RAGUS on 21/10/2025.
//