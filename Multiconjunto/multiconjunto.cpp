#include "multiconjunto.h"
#include <iostream>
#include <string>
#include "persona.h"

using namespace std;

template <typename T>

bool Multiconjunto<T>::esVacio() const {

    return (num ==0);

}

template <typename T>

int Multiconjunto<T>::cardinalidad() const {

    return num;
}


template <typename T>

void Multiconjunto<T>::anade(const T& objeto) {

    if (num < 100) {

        c[num] = objeto;

        num++;

    } else {
        cout << "El Multiconjunto esta lleno." <<endl;
    }
}


template <typename T>

void Multiconjunto<T>::elimina(const T& objeto){

    int i = 0;

    while (i < num) {

        if (c[i] == objeto) {

            for (int j = i; j < num - 1; j++) {

                c[j] = c[j + 1];
            }
            num--;

        } else {

            i++;
        }
    }

}


template <typename T>

bool Multiconjunto<T>::pertenece(const T& objeto) const {

    for(int i = 0; i< num; i++){

        if(c[i] == objeto)

            return true;

        else

            return false;

    }

}

template class Multiconjunto<Persona>;
template class Multiconjunto<int>;
template class Multiconjunto<char>;
