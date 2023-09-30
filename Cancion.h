#pragma once
#include <string>

class Cancion {
public:
    Cancion(const std::string& nombre, const std::string& artista, int duracion);
    std::string ObtenerNombre() const;
    std::string ObtenerArtista() const;
    int ObtenerDuracion() const;

private:
    std::string nombre;
    std::string artista;
    int duracion;
};
