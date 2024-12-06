//
// Created by Pablo Alcolea Sesse on 6/12/24.
//

#include "Algoritmo.h"
#include <iostream>
#include <vector>
#include <algorithm>

void algoritmos() {
    std::vector<int> numeros;
    int num = 60;
    for (int i = 5; i > 0; i--) {
        num -= 10;
        numeros.push_back(num);
    }
    for (int num : numeros) {
        std::cout << num << " ";
    }

    std::cout << "\n";

    std::sort(numeros.begin(), numeros.end());
    for(int num : numeros) {
        std::cout << num << " ";
    }
    int maxNum = *std::max_element(numeros.begin(), numeros.end());
    std::cout << "\nEl número máximo es: " << maxNum << std::endl;
}