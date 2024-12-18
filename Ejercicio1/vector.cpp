//
// Created by Pablo Alcolea Sesse on 4/12/24.
//
/*Ejercicio 1: Utilización completa de un espacio de nombres Escribe un programa que defina un espacio de nombres "Matemáticas" que contenga dos funciones: suma y resta. Luego, desde la función main, utiliza estas funciones.*/
#include "vector.h"
#include <vector>
#include <iostream>

void vectorIterador() {
    std::vector<int> v;
    int num = 0;
    for (int i = 0; i < 10; i++) {

        num += 10;
        v.push_back(num);
    }
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << std::endl;
    }
}

