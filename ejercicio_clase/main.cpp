#include<iostream>
#include <string>

class Car {
    public:
        int speed;

        void accelerate(){
            speed += 10;
            std::cout << "Speed: " << speed << std::endl; 
        }
};