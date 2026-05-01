#include<iostream>
#include <string>


class Person {
    public:
        std::string name;
        int age;

        void display() const {
            std::cout << "Nombre: " << name << std::endl;
            std::cout << "Edad " << age << std::endl;
        }

};