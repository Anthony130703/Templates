#ifndef IMPRIMIR_H
#define IMPRIMIR_H

#include <iostream>
using namespace std;

// Función que resibe diferentes argumentos
template <typename... Args> //args es el template de plantilla para resibir diferentes tipos de parametros
void Imprimir(Args... args) {
    ((cout << args << " "), ...) << endl; // Expande e imprime cada argumento
}

#endif // IMPRIMIR_H
