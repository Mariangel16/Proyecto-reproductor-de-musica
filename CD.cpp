#include "CD.h"

CD::CD(const std::string& nombre) : nombre(nombre) {}

void CD::AgregarCancion(const Cancion& cancion) {
    canciones.push_back(cancion);
}

std::string CD::ObtenerNombre() const {
    return nombre;
}

std::vector<Cancion> CD::ObtenerCanciones() const {
    return canciones;
}

int CD::ObtenerCantidadCanciones() const {
    return canciones.size();
}
