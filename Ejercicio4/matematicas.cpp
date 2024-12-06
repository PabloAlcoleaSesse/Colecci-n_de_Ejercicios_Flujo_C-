//
// Created by Pablo Alcolea Sesse on 6/12/24.
//

#include "matematicas.h"
#include <iostream>
#include <valarray>

void matematicas() {
    std::valarray<double> valores(5); // Initialize with size 5
    double num = 0.0;
    for (int i = 0; i < 5; i++) {
        num += 1;
        valores[i] = num;
    }

    // Crear otro valarray para realizar las operaciones
    std::valarray<double> operando = {0.5, 1.0, 1.5, 2.0};
    double operador = 0.5;

    // Suma
    std::valarray<double> suma = valores + operando;
    std::cout << "Suma: ";
    for (double x : suma) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    // Otro tipo de suma
    valores += operador;
    std::cout << "Suma con operador: ";
    for (double x : valores) {
        std::cout << x << " ";
    }

    // Resta
    std::valarray<double> resta = valores - operando;
    std::cout << "Resta: ";
    for (double x : resta) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    // Multiplicación
    std::valarray<double> multiplicacion = valores * operando;
    std::cout << "Multiplicación: ";
    for (double x : multiplicacion) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    // División
    std::valarray<double> division = valores / operando;
    std::cout << "División: ";
    for (double x : division) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}