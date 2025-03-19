#include "persona.h"
#include <string>

using namespace std;


Persona::Persona(const string& n, int e) : nombre(n), edad(e) {}

const string& Persona::getNombre() const {
    return this->nombre;
}

int Persona::getEdad() const {
    return this->edad;
}

void Persona::setNombre(const string& n) {
    this->nombre = n;
}

void Persona::setEdad(int e) {
    this->edad = e;
}

bool Persona::operator==(const Persona& p) const {
    return (this->nombre == p.nombre && this->edad == p.edad);
}
