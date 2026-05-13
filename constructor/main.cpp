#include <iostream>

class Persona{
    private:
        int edad;
        float altura;
        char sexo;
        std::string nombre;
    
    public:
        Persona(){
            this->edad = 20;
            this->altura = 1.75;
            this->sexo = 'M';
            this->nombre = "Luis";
        }

        //Constructor con edad por definicion de usuario
        Persona(int edad){
            this->edad = edad;
        }

        Persona(int edad, float altura){
            this->edad = edad;
            this->altura = altura;
        }

        Persona(int edad, float altura, char sexo, std::string nombre){
            this->edad = edad;
            this->altura = altura;
            this->sexo = sexo;
            this->nombre = nombre;
        }

        // void contar(){
        //     std::cout << "Ejecucion infinita" << std::endl;
        //     contar(); //Recursion infinita
        // }

        int getEdad(){
            return this->edad;
        }

        int getAltura(){
            return this->altura;
        }

        int geSexo(){
            return this->sexo;
        }

        // int geNombre(){
        //     return this->nombre;
        // }

        ~Persona(){
            
        }


};


int main(){

    int *datos = new int[1000];

    Persona Juan;

    Juan.getEdad();


    Persona Maria(38);

    Persona Jose(27, 1.68, 'M',"Marcos");

    Persona Pedro(29, 176);


    std::cout << "La edad de Maria es: " << Maria.getEdad() << std::endl;

    std::cout << "La edad de Jose es: " << Jose.getEdad() << std::endl;

    std::cout << "La altura de Jose es: " << Pedro.getAltura() << std::endl;

    
    delete datos;



    return 0;
}