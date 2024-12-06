cmake_minimum_required(VERSION 3.29)
project(Coleccion_de_ejercicios_contenedores_dinamicos)

set(CMAKE_CXX_STANDARD 14)

include_directories(Ejercicio1)

add_executable(Coleccion_de_ejercicios_contenedores_dinamicos
    Ejercicio1/vector.cpp
    Ejercicio1/vector.h
        main.cpp
        "Ejercicio2/list.cpp"
        Ejercicio3/Algoritmo.cpp
        Ejercicio4/matematicas.cpp
        Ejercicio5/moderno.cpp)
