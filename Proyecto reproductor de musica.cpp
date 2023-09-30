#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <fstream>
#include "CD.h"
#include "Cancion.h"

// Función para cargar CDs desde archivos
void CargarCDsDesdeCarpeta(const std::string& carpeta, std::vector<CD>& listaCDs) {
    // Implementa la lógica para cargar CDs desde archivos en la carpeta especificada
    // ...
}

// Función para mostrar la cola de reproducción
void MostrarColaReproduccion(const std::queue<Cancion>& colaReproduccion) {
    std::cout << "Cola de Reproducción:" << std::endl;
    std::queue<Cancion> tempCola = colaReproduccion;
    while (!tempCola.empty()) {
        Cancion cancion = tempCola.front();
        std::cout << "Nombre: " << cancion.ObtenerNombre() << ", Artista: " << cancion.ObtenerArtista()
            << ", Duración: " << cancion.ObtenerDuracion() << " segundos" << std::endl;
        tempCola.pop();
    }
}

int main() {
    std::vector<CD> listaCDs;
    std::queue<Cancion> colaReproduccion;
    std::string carpeta;

    // Carga los CDs desde una carpeta
    std::cout << "Ingrese la ruta de la carpeta con los archivos de CDs: ";
    std::cin >> carpeta;
    CargarCDsDesdeCarpeta(carpeta, listaCDs);

    int opcion;
    do {
        std::cout << "\nMenú de Reproductor de Canciones:" << std::endl;
        std::cout << "1. Agregar Canción" << std::endl;
        std::cout << "2. Ver Cola de Reproducción" << std::endl;
        std::cout << "3. Reproducción Actual" << std::endl;
        std::cout << "4. Reproducir Siguiente" << std::endl;
        std::cout << "5. Ordenar" << std::endl;
        std::cout << "6. Salir" << std::endl;
        std::cout << "Ingrese una opción: ";
        std::cin >> opcion;

        switch (opcion) {
        case 1: {
            // Implementa la lógica para agregar canciones a la cola de reproducción
            // ...
            break;
        }
        case 2: {
            // Implementa la lógica para mostrar la cola de reproducción
            // ...
            break;
        }
        case 3: {
            // Implementa la lógica para mostrar la canción en reproducción actual
            // ...
            break;
        }
        case 4: {
            // Implementa la lógica para reproducir la siguiente canción
            // ...
            break;
        }
        case 5: {
            // Implementa la lógica para ordenar la cola de reproducción
            // ...
            break;
        }
        case 6: {
            std::cout << "Saliendo del programa." << std::endl;
            break;
        }
        default: {
            std::cout << "Opción no válida. Intente nuevamente." << std::endl;
            break;
        }
        }
    } while (opcion != 6);

    return 0;
}
