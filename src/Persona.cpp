#include "Persona.hpp"
#include <iostream>

// parametyzed constructor
Persona::Persona(std::string nombre, std::string apellido, char sexo, int edad, int peso, int rut, float altura, bool mayor, bool licencia){
    setNombre(nombre);
    setApellido(apellido);
    setSexo(sexo);
    setEdad(edad);
    setPeso(peso);
    setRut(rut);
    setAltura(altura);
    setEsmayor(mayor);
    setPoseeLicencia(licencia);
}

// default constructor
Persona::Persona(){
    setNombre("undef");
    setApellido("undef");
    setSexo('N');
    setEdad(1);
    setPeso(1);
    setRut(1);
    setAltura(1.0);
    setEsmayor(0);
    setPoseeLicencia(0);
}

std::string Persona :: getNombre(){
    return personaNombre;
}

void Persona :: setNombre(std::string nombre){
    personaNombre = nombre;
}

std::string Persona :: getApellido(){
    return personaApellido;
}

void Persona :: setApellido(std::string apellido){
    personaApellido = apellido;
}

char Persona :: getSexo(){
    return personaSexo;
}

void Persona :: setSexo(char sexo){
    personaSexo = sexo;
}

int Persona :: getEdad(){
    return personaEdad;
}

void Persona :: setEdad(int edad){
    personaEdad = edad;
}

int Persona :: getPeso(){
    return personaPeso;
}

void Persona :: setPeso(int peso){
    personaPeso = peso;
}

int Persona :: getRut(){
    return personaRut;
}

void Persona :: setRut(int rut){
    personaRut = rut;
}

float Persona :: getAltura(){
    return personaAltura;
}

void Persona :: setAltura(float altura){
    personaAltura = altura;
}

bool Persona :: getEsMayor(){
    return esMayor;
}

void Persona :: setEsmayor(bool esAdulto){
    esMayor = esAdulto;
}

bool Persona :: getPoseeLicencia(){
    return poseeLicencia;
}

void Persona :: setPoseeLicencia(bool tieneLicencia){
    poseeLicencia = tieneLicencia;
}

void Persona :: imprDatos(){
    std::cout << getNombre() << std::endl;
    std::cout << getApellido() << std::endl;
    std::cout << getSexo() << std::endl;
    std::cout << getEdad() << std::endl;
    std::cout << getPeso() << std::endl;
    std::cout << getRut() << std::endl;
    std::cout << getAltura() << std::endl;
    std::cout << getEsMayor() << std::endl;
    std::cout << getPoseeLicencia() << std::endl;
}