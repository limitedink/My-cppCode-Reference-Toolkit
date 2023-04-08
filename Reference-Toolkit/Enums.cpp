#include <iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, 
          thursday = 4, friday = 5, saturday = 6};
enum Flavour {vanilla, chocolate, mint, honeycomb, banana};
//if you don't assign a value it will implicitly assign starting at 0
enum Colour {Blue, Red, Yellow, Orange, Green, Black, White};

enum Planet {mercury = 4880, venus = 12104, earth = 12756,
             mars = 6794, jupiter = 142984, saturn = 108728,
             uranus = 51118, neptune = 49532, pluto = 2320};

int main() 
{
    // enums = a user-defined data type that consists of paired 
    //         named-integer constants.
    //         GREAT if you have a set of potential options

    Day today = saturday;

    //can use the associated values within the cases as seen below
    switch(today){
        case 0: std::cout << "It is Sunday!\n";
                       break;
        case 1: std::cout << "It is Monday!\n";
                       break;
        case 2: std::cout << "It is Tuesday!\n";
                       break;
        case 3: std::cout << "It is Wednesday!\n";
                       break;
        case thursday: std::cout << "It is Thursday!\n";
                       break;
        case friday: std::cout << "It is Friday!\n";
                       break;
        case saturday: std::cout << "It is Saturday!\n";
                       break;
    }

    return 0;
}