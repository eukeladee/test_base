#include "Vehiculo.hpp"
#include <iostream>

Vehiculo :: Vehiculo(std::string marca, std::string modelo, std::string ppu, int ano, int puertas, float cc, bool dueno)
{
	setMarca(marca);
	setModelo(modelo);
	setPatente(ppu);
	setAno(ano);
	setPuertas(puertas);
	setCc(cc);
	setDueno(dueno);
}

Vehiculo :: Vehiculo()
{
	setMarca("marca");
	setModelo("modelo");
	setPatente("ppu");
	setAno(1);
	setPuertas(1);
	setCc(.8);
	setDueno(false);
}

std::string Vehiculo :: getMarca()
{
	return vehiculoMarca;
}

void Vehiculo :: setMarca(std::string marca)
{
	vehiculoMarca = marca;
}

std::string Vehiculo :: getModelo()
{
	return vehiculoModelo;
}

void Vehiculo :: setModelo(std::string modelo)
{
	vehiculoModelo = modelo;
}

std::string Vehiculo :: getPatente()
{
	return vehiculoPatente;
}

void Vehiculo :: setPatente(std::string ppu)
{
	vehiculoPatente = ppu;
}

int Vehiculo :: getAno()
{
	return vehiculoAno;
}

void Vehiculo :: setAno(int ano)
{
	vehiculoAno = ano;
}

int Vehiculo :: getPuertas()
{
	return vehiculoPuertas;
}

void Vehiculo :: setPuertas(int puertas)
{
	vehiculoPuertas = puertas;
}

float Vehiculo :: getCc()
{
	return vehiculoCc;
}

void Vehiculo :: setCc(float cc)
{
	vehiculoCc = cc;
}

bool Vehiculo :: getDueno()
{
	return poseeDueno;
}

void Vehiculo :: setDueno(bool dueno)
{
	poseeDueno = dueno;
}

void Vehiculo :: imprDatos(){
	std::cout << getMarca() << std::endl;
	std::cout << getModelo() << std::endl;
	std::cout << getPatente() << std::endl;
	std::cout << getAno() << std::endl;
	std::cout << getPuertas() << std::endl;
	std::cout << getCc() << std::endl;
	std::cout << getDueno() << std::endl;
}