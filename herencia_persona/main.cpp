#include <iostream>
#include <cstdlib>
#include <string>

class Persona{

    private: //Atributos
        std::string nombre;
        int edad;

    public:
        Persona(std::string, int);

        void mostrarPersona();
};

class Alumno : public Persona{
    
    private: //Atributos
        std::string codigoAlumno;
        float notaFinal;

    public: //Metodos
        Alumno(std::string, int,std::string, float); //Constructor

        void mostrarAlumno();
};

//Constructor clase persona
Persona::Persona(std::string nom, int e){
    nombre = nom;
    edad = e;
}

void Persona::mostrarPersona(){
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
}

//Constructor clase Alumno
Alumno::Alumno(std::string nom, int e, std::string codigo, float notaF) 
    : Persona(nom, e) { 
    codigoAlumno = codigo;
    notaFinal = notaF;
}

void Alumno::mostrarAlumno(){
    mostrarPersona();
    std::cout << "Codigo Alumno: " << codigoAlumno << std::endl;
    std::cout << "Nota Fnal: " << notaFinal << std::endl;
}

int main(){

    Alumno alumno1("Juan", 23, "1234567897", 4.2);
    alumno1.mostrarAlumno();

    return 0;
}