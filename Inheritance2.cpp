#include <iostream>

class Shape{
    public:
        double area;
        double volume;
};
class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};
class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4 / 3.0) * 3.14159 * (radius * radius * radius);
    }
};


int main()
{
    Cube cube(10);
    Sphere sphere(5);
    std::cout << "Cube's Area: " << cube.area << "cm\n";
    std::cout << "Cube's Volume: " << cube.volume << "cm\n";
    std::cout << "Sphere's Area: " << sphere.area << "cm\n";
    std::cout << "Sphere's Volume: " << sphere.volume << "cm\n";
    return 0;
}