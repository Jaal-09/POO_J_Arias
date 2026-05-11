#include <iostream>

class Animal{
    public:
        virtual void makeSound(){
            std::cout << "Sonido generico\n";
        }
};

class Dog: public Animal{
    public:
        void makeSound() override{
            std::cout << "Ladrido\n";
        }
};

class Cat: public Animal{
     public:
        void makeSound() override{
            std::cout << "Maullidos\n";
        }
};

int main(){

    Animal * miPerro = new Dog();
    miPerro->makeSound();

    Animal * miGato = new Cat();
    miGato->makeSound();

    return 0;
}