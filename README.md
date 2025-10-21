# Ejercicio-1
Ejercicio 1 - Gestor de Biblioteca Musical Digital

Necesitas modelar la estructura básica para una aplicación de música tipo Spotify. El componente fundamental es la canción.

Requisitos del Sistema:

Se debe poder representar una canción. Cada canción se define por un título, un artista y una duración en segundos (por ejemplo, 210 segundos).

La clase debe tener un método que permita mostrar la información completa de la canción en un formato legible.

Adicionalmente, se requiere un método que devuelva la duración de la canción en formato MM: SS (Minutos: Segundos). Por ejemplo, si la duración es 210 segundos, este método debe devolver el Sting "03:30".

Tarea:

1. Diseño: diagrama de clases en Mermaid.

2. Implementación: la clase en sus archivos .h y .cpp.

3. Simulación: En main.cpp, creen al menos dos objetos de tipo Canción y utilicen todos sus métodos para verificar su correcto funcionamiento.



RESPUESTA:

Mermaid:

classDiagram

    class Cancion { 

        -string Titulo 

        -string Autor 

        -int DuracionSeg 

        +Cancion(string Titulo, string Autor, int DuracionSeg) 

        +mostrarInformacion() void 

        +obtenerDuracionMMSS() string 

        +getTitulo() string 

        +getAutor() string 

        +getDuracionSeg() int 

    }