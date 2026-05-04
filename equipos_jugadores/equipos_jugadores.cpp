#include <iostream>
#include <string>

class EquipoFutbol{
    
    private:
        std::string nombre;

    protected:
        int puntosTemporada;

    //Settters
    void setNombre(std::string nom){
        nombre = nom;
    }

    void setPuntosTemporada(int puntos){
        puntosTemporada = puntos;
    }

    //getters
    std::string getNombre(){
        return nombre;
    }

    int getPuntos(){
        return puntosTemporada;
    }

};