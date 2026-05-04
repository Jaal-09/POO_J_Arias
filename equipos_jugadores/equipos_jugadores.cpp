#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class EquipoFutbol{
    
    private:
        std::string nombre;

    protected:
        int puntosTemporada;

    //Settters
    public: 

    void setNombre(std::string nom){
        nombre = nom;
    }

    void setPuntos(int puntos){
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

class Jugador : public EquipoFutbol {

    public:
        int golesAnotados;
        std::string posicion;


        void mostrarInfo(){
            std::cout << "=== JUGADOR ===" << std::endl;
            std::cout << "Equipo: " << getNombre() << std::endl;
            std::cout << "Puntos: " << getPuntos() << std::endl;
            std::cout << "Goles: " << golesAnotados << std::endl;
            std::cout << "Posicion: " << posicion << std::endl;
            std::cout << std::endl;
        }

};

class Entrenador : public EquipoFutbol {
    public:
        int aniosExperiencia;
        std::string equipoDirigido;

        void mostrarInfo(){
            std::cout << "=== ENTRENADOR ===" << std::endl;
            std::cout << "Equipo: " << getNombre() << std::endl;
            std::cout << "Puntos: " << getPuntos() << std::endl;
        std::cout << "Experiencia: " << aniosExperiencia << " años" << std::endl;
        std::cout << "Dirige a: " << equipoDirigido << std::endl;
        std::cout << std::endl;
        }
};

int main(){
    srand(time(0));

    //Creando objetos

    Jugador jugador;
    Entrenador entrenador;

    //Asignamos valores al jugador
    jugador.setNombre("Juventus");
    jugador.setPuntos(rand() % 51 + 50); //50 a 100
    jugador.golesAnotados = rand() % 31; 
    jugador.posicion = "Delantero";

    //Asignamos valores al entrenador
    entrenador.setNombre("Milan");
    entrenador.setPuntos(rand() % 51 + 50);
    entrenador.aniosExperiencia = rand() % 20 + 1;
    entrenador.equipoDirigido = "Milan";

    //Mostrar la información
    jugador.mostrarInfo();
    entrenador.mostrarInfo();

    //Comparación de puntos de entrenador vs jugador
    std::cout << "=== COMPARACION ===" << std::endl;

    if(jugador.getPuntos() > entrenador.getPuntos()){
        std::cout << "El equipo del jugador tiene mas puntos (" << jugador.getPuntos() << " vs " << entrenador.getPuntos() << ")" << std::endl;
    } else if(entrenador.getPuntos() > jugador.getPuntos()){
        std::cout << "El equipo del entrenador tiene mas puntos (" << entrenador.getPuntos() << " vs " << jugador.getPuntos() << ")" << std::endl;
    } else {
        std::cout << "Ambos equipos tienen los mismos puntos (" << jugador.getPuntos() << ")" << std::endl;
    }

    return 0;
}

