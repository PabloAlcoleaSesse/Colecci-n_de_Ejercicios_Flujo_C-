//
// Created by Pablo Alcolea Sesse on 6/12/24.
//

#include "moderno.h"
#include <iostream>
#include <vector>
#include <memory> // Para punteros inteligentes
#include <algorithm> // Para std::for_each

void moderno() {
    // Crear un vector de números enteros
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    // Definir una expresión lambda que devuelve el cuadrado de un número
    auto cuadrado = [](int n) { return n * n; };

    // Crear un puntero inteligente para gestionar memoria (uso de std::unique_ptr)
    auto resultados = std::make_unique<std::vector<int>>();

    // Recorrer el vector con for_each y calcular los cuadrados
    std::for_each(numeros.begin(), numeros.end(), [&](int n) {
        resultados->push_back(cuadrado(n)); // Aplicar la lambda y almacenar el resultado
    });

    // Mostrar los resultados utilizando otro bucle for_each
    std::cout << "Cuadrados de los números:" << std::endl;
    std::for_each(resultados->begin(), resultados->end(), [](int resultado) {
        std::cout << resultado << " ";
    });
    std::cout << std::endl;


}