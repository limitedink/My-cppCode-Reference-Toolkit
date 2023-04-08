#include <iostream>

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string colour;

        void accelerate(){
            std::cout << "You step on the gas!\n";
        }
        void brake(){
            std::cout << "You step on the brakes!\n";
        }

};

int main()
{
    Car car1;

    car1.make = "BMW";
    car1.model = "Z4";
    car1.year = 2002;
    car1.colour = "black";

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.colour << '\n';

    car1.accelerate();
    car1.brake();

    return 0;
}