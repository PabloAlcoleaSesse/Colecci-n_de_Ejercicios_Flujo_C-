cmake_minimum_required(VERSION 3.29)
project(Coleccion_de_ejercicios_contenedores_dinamicos)

set(CMAKE_CXX_STANDARD 14)

include_directories(Ejercicio1)
find_package(Boost REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})


add_executable(Coleccion_de_ejercicios_contenedores_dinamicos
    Ejercicio1/vector.cpp
    Ejercicio1/vector.h
        main.cpp
        "Ejercicio2/list.cpp"
        Ejercicio3/Algoritmo.cpp
        Ejercicio4/matematicas.cpp
        Ejercicio5/moderno.cpp
        Ejercicio6/Boost.cpp)
target_link_libraries(Coleccion_de_ejercicios_contenedores_dinamicos ${Boost_LIBRARIES})
