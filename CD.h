#pragma once
#include <string>
#include <vector>
#include "Cancion.h"

class CD {
public:
    CD(const std::string& nombre);
    void AgregarCancion(const Cancion& cancion);
    std::string ObtenerNombre() const;
    std::vector<Cancion> ObtenerCanciones() const;
    int ObtenerCantidadCanciones() const;

private:
    std::string nombre;
    std::vector<Cancion> canciones;
};
