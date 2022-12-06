#ifndef PERSONA_HPP
#define PERSONA_HPP

#include<string>

class Persona{
	private:
		std::string personaNombre, personaApellido;
		char personaSexo;
		int personaEdad, personaPeso, personaRut;
		float personaAltura;
		bool esMayor, poseeLicencia;
	
	public:
		// constructor prototype method with params.
		Persona(std::string nombre, std::string apellido, char sexo, int edad, int peso, int rut, float altura, bool mayor, bool licencia);
		
		// default constructor prototype method.
		Persona();

		// getter & setter prototype methods.
		std::string getNombre();
		void setNombre(std::string nombre);

		std::string getApellido();
		void setApellido(std::string apellido);

		char getSexo();
		void setSexo(char sexo);

		int getEdad();
		void setEdad(int edad);

		int getPeso();
		void setPeso(int peso);

		int getRut();
		void setRut(int rut);

		float getAltura();
		void setAltura(float altura);

		bool getEsMayor();
		void setEsmayor(bool esAdulto);

		bool getPoseeLicencia();
		void setPoseeLicencia(bool tieneLicencia);

		// just prints out all the variables assigned values.
		void imprDatos();

};


#endif // PERSONA_HPP