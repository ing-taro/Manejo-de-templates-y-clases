#include "multiconjunto.h"
#include "persona.h"
#include <iostream>

using namespace std;

int main() {

    Multiconjunto<int> mcInt;

    mcInt.anade(10);

    mcInt.anade(20);

    cout << "Cardinalidad (int): " << mcInt.cardinalidad() << endl;


    Multiconjunto<char> mcChar;

    mcChar.anade('a');

    mcChar.anade('b');

    cout << "Pertenece 'a'? " << mcChar.pertenece('a') << endl;


    Multiconjunto<Persona> mcPersona;

    Persona p1("Ana", 25);

    Persona p2("Juan", 30);

    mcPersona.anade(p1);

    mcPersona.anade(p2);

    cout << "Pertenece Juan? " << mcPersona.pertenece(p2) << endl;

    return 0;
}
