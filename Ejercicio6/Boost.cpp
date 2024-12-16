//
// Created by Pablo Alcolea Sesse on 6/12/24.
//


 // Incluir Boost Lexical Cast

#include "Boost.h"
#include <iostream>
#include <boost/lexical_cast.hpp>

void bost() {
    // Cadena de caracteres para convertir
    std::string cadena = "12345";

    try {
        // Convertir cadena a entero utilizando boost::lexical_cast
        int numero = boost::lexical_cast<int>(cadena);
        std::cout << "La conversión fue exitosa. El número es: " << numero << std::endl;
    } catch (const boost::bad_lexical_cast& e) {
        // Manejo de excepciones en caso de error
        std::cerr << "Error: No se pudo convertir la cadena a un número entero." << std::endl;
        std::cerr << "Detalles: " << e.what() << std::endl;
    }

    // Probar un caso inválido
    std::string cadena_invalida = "abc123";
    try {
        int numero = boost::lexical_cast<int>(cadena_invalida);
        std::cout << "El número es: " << numero << std::endl;
    } catch (const boost::bad_lexical_cast& e) {
        std::cerr << "Error: No se pudo convertir 'abc123' a un número entero." << std::endl;
    }
}