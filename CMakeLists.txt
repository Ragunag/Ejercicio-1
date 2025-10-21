cmake_minimum_required(VERSION 4.0)
project(Ejercicio_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Ejercicio_1
        Cancion.cpp
        Cancion.h
        main.cpp)
