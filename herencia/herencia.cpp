#include <iostream>

class Vehiculo{

    private:
        int Modelo;
    
    public:
        void setModelo(int m){
            m < 2000 || m > 2000 ? 2000 : Modelo = m;
        }

        void getModelo(){
            std::cout << "El vehiculo es modelo " << Modelo << std::endl;
        }
};

class Moto: public Vehiculo{
    public:
        void mostrarTipo(){
            std::cout << "Motocicleta" << std::endl;
        }
};

int main(){

    Moto obj;

    obj.setModelo(2025);

    obj.getModelo();
    obj.mostrarTipo();

    return 0;
}