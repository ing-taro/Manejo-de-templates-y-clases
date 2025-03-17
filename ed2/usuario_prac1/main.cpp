#include "multiconjunto.h"
#include "persona.h"
#include <iostream>

int main() {

    Multiconjunto<int> mcInt;

    mcInt.anade(10);

    mcInt.anade(20);

    std::cout << "Cardinalidad (int): " << mcInt.cardinalidad() << std::endl;


    Multiconjunto<char> mcChar;

    mcChar.anade('a');

    mcChar.anade('b');

    std::cout << "Pertenece 'a'? " << mcChar.pertenece('a') << std::endl;


    Multiconjunto<Persona> mcPersona;

    Persona p1("Ana", 25);

    Persona p2("Juan", 30);

    mcPersona.anade(p1);

    mcPersona.anade(p2);

    std::cout << "Pertenece Juan? " << mcPersona.pertenece(p2) << std::endl;

    return 0;
}
