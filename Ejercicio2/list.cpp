//
// Created by Pablo Alcolea Sesse on 6/12/24.
//

#include "list.h"
#include <list>
#include <iostream>


void listIterador() {
    std::list<double> decimalList;
    double num = 0.0;
    for (int i = 0; i < 6; i++) {
        num += 1.1;
        decimalList.push_back(num);
    }

    // Adaptar la lista como una pila utilizando std::stack
    std::stack<double, std::list<double>> decimalStack(decimalList);

    // Mostrar los elementos iniciales de la pila
    std::cout << "Contenido inicial de la pila:" << std::endl;
    while (!decimalStack.empty()) {
        std::cout << decimalStack.top() << " "; // Mostrar el elemento en la cima
        decimalStack.pop();                    // Eliminar el elemento en la cima
    }
    std::cout << "\n";

    // Insertar nuevos elementos en la pila con push
    decimalStack.push(5.5);
    decimalStack.push(6.6);
    decimalStack.push(7.7);

    // Mostrar el elemento en la cima (top)
    std::cout << "Elemento en la cima: " << decimalStack.top() << std::endl;

    // Eliminar un elemento de la pila con pop
    decimalStack.pop();
    std::cout << "Elemento eliminado. Nueva cima: " << decimalStack.top() << std::endl;

    // Mostrar el contenido actual de la pila
    std::cout << "Contenido actual de la pila:" << std::endl;
    while (!decimalStack.empty()) {
        std::cout << decimalStack.top() << " "; // Mostrar el elemento en la cima
        decimalStack.pop();                    // Eliminar el elemento en la cima
    }
    std::cout << "\n";

}