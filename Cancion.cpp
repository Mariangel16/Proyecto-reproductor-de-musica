#include "Cancion.h"

Cancion::Cancion(const std::string& nombre, const std::string& artista, int duracion)
    : nombre(nombre), artista(artista), duracion(duracion) {}

std::string Cancion::ObtenerNombre() const {
    return nombre;
}

std::string Cancion::ObtenerArtista() const {
    return artista;
}

int Cancion::ObtenerDuracion() const {
    return duracion;
}
