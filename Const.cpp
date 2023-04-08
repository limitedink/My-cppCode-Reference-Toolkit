#include <iostream>

int main(){
    // The const keyword specifies that a variable's value is constant
    // tells the compilier to prevent anything from modifying it
    // (read-only)
        const double PI = 3.14159; //name const's ALL CAPS 
        double radius = 10;
        double circumference = 2 * PI * radius;
        const int LIGHT_SPEED = 299692458;
        const int WIDTH = 1920;
        const int HEIGHT = 1080;
        const int SPEED_OF_SOUND = 343;

        std::cout << circumference << "cm";


    return 0;
}