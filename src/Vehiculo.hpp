#ifndef VEHICULO_HPP
#define VEHICULO_HPP

#include<string>

class Vehiculo{
    private:
        std::string vehiculoMarca, vehiculoModelo, vehiculoPatente;
        int vehiculoAno, vehiculoPuertas;
        float vehiculoCc;
        bool poseeDueno;
    public:
        Vehiculo(std::string marca, std::string modelo, std::string ppu, int ano, int puertas, float cc, bool dueno);
        
        Vehiculo();

        std::string getMarca();
        void setMarca(std::string marca);

        std::string getModelo();
        void setModelo(std::string modelo);

        std::string getPatente();
        void setPatente(std::string ppu);

        int getAno();
        void setAno(int ano);

        int getPuertas();
        void setPuertas(int puertas);

        float getCc();
        void setCc(float cc);

        bool getDueno();
        void setDueno(bool dueno);

		void imprDatos();


};

#endif // VEHICULO_HPP