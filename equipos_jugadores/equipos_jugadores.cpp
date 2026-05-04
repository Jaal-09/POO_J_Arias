#include <iostream>
#include <string>

class EquipoFutbol{
    
    private:
        std::string nombre;

    protected:
        int puntosTemporada;

    //Settters
    void setNombre(string nom){
        nombre = nom;
    }

    void setPuntosTemporada(int puntos){
        puntosTemporada = puntos;
    }

    //getters
    string getNombre(){
        return nombre;
    }

    int getPuntos(){
        return puntosTemporada;
    }

};