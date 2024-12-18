//
// Created by Pablo Alcolea Sesse on 4/12/24.
//
#include <iostream>
#include "Ejercicio1/vector.h"
#include "Ejercicio2/list.h"
#include "Ejercicio3/Algoritmo.h"
#include "Ejercicio4/matematicas.h"
#include "Ejercicio5/moderno.h"
#include "Ejercicio6/Boost.h"



int main() {
    std::cout << "Que ejercicio quieres ejecutar? (1,2,3,4,5,6): ";
    int respuesta;
    std::cin >> respuesta;
    switch (respuesta) {
        case 1:
            vectorIterador();
        break;
        case 2:
            listIterador();
        break;
        case 3:
            algoritmos();
        break;
        case 4:
            matematicas();
        break;
        case 5:
            moderno();
        break;
        case 6:
            bost();
        break;
        default:
            std::cout << "Ejercicio no encontrado" << std::endl;
    }
}