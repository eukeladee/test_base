cmake_minimum_required(VERSION 3.24)

project(test_base)

add_executable(std.out
    ./src/main.cpp
    ./src/Persona.cpp
    ./src/Vehiculo.cpp
)

target_include_directories(std.out PRIVATE
    ./src
    ./include
)