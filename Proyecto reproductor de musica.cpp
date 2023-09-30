#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <fstream>
#include "CD.h"
#include "Cancion.h"

// Funci�n para cargar CDs desde archivos
void CargarCDsDesdeCarpeta(const std::string& carpeta, std::vector<CD>& listaCDs) {
    // Implementa la l�gica para cargar CDs desde archivos en la carpeta especificada
    // ...
}

// Funci�n para mostrar la cola de reproducci�n
void MostrarColaReproduccion(const std::queue<Cancion>& colaReproduccion) {
    std::cout << "Cola de Reproducci�n:" << std::endl;
    std::queue<Cancion> tempCola = colaReproduccion;
    while (!tempCola.empty()) {
        Cancion cancion = tempCola.front();
        std::cout << "Nombre: " << cancion.ObtenerNombre() << ", Artista: " << cancion.ObtenerArtista()
            << ", Duraci�n: " << cancion.ObtenerDuracion() << " segundos" << std::endl;
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
        std::cout << "\nMen� de Reproductor de Canciones:" << std::endl;
        std::cout << "1. Agregar Canci�n" << std::endl;
        std::cout << "2. Ver Cola de Reproducci�n" << std::endl;
        std::cout << "3. Reproducci�n Actual" << std::endl;
        std::cout << "4. Reproducir Siguiente" << std::endl;
        std::cout << "5. Ordenar" << std::endl;
        std::cout << "6. Salir" << std::endl;
        std::cout << "Ingrese una opci�n: ";
        std::cin >> opcion;

        switch (opcion) {
        case 1: {
            // Implementa la l�gica para agregar canciones a la cola de reproducci�n
            // ...
            break;
        }
        case 2: {
            // Implementa la l�gica para mostrar la cola de reproducci�n
            // ...
            break;
        }
        case 3: {
            // Implementa la l�gica para mostrar la canci�n en reproducci�n actual
            // ...
            break;
        }
        case 4: {
            // Implementa la l�gica para reproducir la siguiente canci�n
            // ...
            break;
        }
        case 5: {
            // Implementa la l�gica para ordenar la cola de reproducci�n
            // ...
            break;
        }
        case 6: {
            std::cout << "Saliendo del programa." << std::endl;
            break;
        }
        default: {
            std::cout << "Opci�n no v�lida. Intente nuevamente." << std::endl;
            break;
        }
        }
    } while (opcion != 6);

    return 0;
}
