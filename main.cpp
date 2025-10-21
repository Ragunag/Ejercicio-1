#include <iostream>
#include "Cancion.h"

using namespace std;

int main() {
    cout << "\n=== BIBLIOTECA MUSICAL DIGITAL ===" << endl;
    cout << "Sistema de Gestión de Canciones\n" << endl;

    // Crear primera canción (210 segundos = 3:30)
    Cancion cancion1("Bohemian Rhapsody", "Queen", 354);

    // Crear segunda canción
    Cancion cancion2("Shape of You", "Ed Sheeran", 233);

    // Crear tercera canción para más pruebas
    Cancion cancion3("Imagine", "John Lennon", 183);

    // Probar todos los métodos con la primera canción
    cout << "\n--- CANCION 1 ---" << endl;
    cancion1.mostrarInformacion();

    cout << "\nProbando getters individuales:" << endl;
    cout << "Titulo: " << cancion1.getTitulo() << endl;
    cout << "Artista: " << cancion1.getAutor() << endl;
    cout << "Duracion en segundos: " << cancion1.getDuracionSeg() << endl;
    cout << "Duracion en formato MM:SS: " << cancion1.obtenerDuracionMMSS() << endl;

    // Probar con la segunda canción
    cout << "\n--- CANCION 2 ---" << endl;
    cancion2.mostrarInformacion();

    cout << "\nProbando getters individuales:" << endl;
    cout << "Titulo: " << cancion2.getTitulo() << endl;
    cout << "Artista: " << cancion2.getAutor() << endl;
    cout << "Duracion en segundos: " << cancion2.getDuracionSeg() << endl;
    cout << "Duracion en formato MM:SS: " << cancion2.obtenerDuracionMMSS() << endl;

    // Probar con la tercera canción
    cout << "\n--- CANCION 3 ---" << endl;
    cancion3.mostrarInformacion();

    // Demostrar el caso específico del ejercicio (210 segundos = 03:30)
    cout << "\n--- PRUEBA DEL CASO ESPECIFICO (210 segundos) ---" << endl;
    Cancion cancionPrueba("Cancion de Prueba", "Artista Demo", 210);
    cancionPrueba.mostrarInformacion();
    cout << "\nVerificacion: 210 segundos = " << cancionPrueba.obtenerDuracionMMSS() << endl;

    cout << "\n=== FIN DEL PROGRAMA ===" << endl;

    return 0;
}//
// Created by RAGUS on 21/10/2025.
//