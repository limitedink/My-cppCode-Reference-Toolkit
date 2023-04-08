#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string colour;
};

//function declaration must come after the struct being passed in 
void printCar(Car &car);
void paintCar(Car &car, std::string colour);
int main()
{

    Car car1;
    Car car2;

    car1.model = "Z4";
    car1.year = 2002;
    car1.colour = "black";

    car2.model = "FPV F6";
    car2.year = 2008;
    car2.colour = "white";

    paintCar(car1, "White");
    paintCar(car2, "Black");
    printCar(car1);
    printCar(car2);

    return 0;
}

// structs are passed by value not ref
// if you need to access the original struct use address of (&) operator
// and be sure to change it within function declaration
void printCar(Car &car){
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.colour << '\n';
}

//to change one of the members 
void paintCar(Car &car, std::string colour){
    car.colour = colour;
}