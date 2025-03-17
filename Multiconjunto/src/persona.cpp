#include "persona.h"
#include <string>


Persona::Persona(const std::string& n, int e) : nombre(n), edad(e) {}

const std::string& Persona::getNombre() const {
    return nombre;
}

int Persona::getEdad() const {
    return edad;
}

void Persona::setNombre(const std::string& n) {
    nombre = n;
}

void Persona::setEdad(int e) {
    edad = e;
}

bool Persona::operator==(const Persona& p) const {
    return (nombre == p.nombre && edad == p.edad);
}
