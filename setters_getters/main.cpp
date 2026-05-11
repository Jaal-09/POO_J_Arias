#include <iostream>

/**
 * @brief Crea una clase persona con altura y edad.
 * @param altura variable de tipo entero de valor 180
 * @param edad varible de tipo entero 
 * 
 */

class Persona{

    /**
     * @brief Set edad del objeto
     * 
     * @param edad siempre mayor a 0
     */

    private:
        const int altura = 180; //Valor constante.
        int edad; //Modificable desde su setter y getter

    public:

        void setEdad(int edad){
            if(edad >= 0){
                this->edad = edad;
            }else{
            std::cout << "Edad Invalida" << std::endl;
        }

        }
    
        int getEdad(){
            return this->edad;
        }

        int getAltura(){
            return this->altura;
        }

};

int main(){
    Persona pedro;

    pedro.setEdad(23);

    std:: cout << "La altura es: " << pedro.getAltura() << " La edad es:" << pedro.getEdad() << std::endl;


    return 0;
}