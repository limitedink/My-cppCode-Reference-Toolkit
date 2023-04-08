#include <iostream>

int main()
{
    //array = a data structure that can hold multiple values
    //      values are accessed by an index number
    //      kind of like a variable that holds multiple values.
    
    // to change a var into an array add a set of square brackets after
    //the variable name, then place your values within a set of curly braces
    //separated by commas
    //arrays must be the same data type. e.g cant mix strings with ints

    std::string cars[] = {"BMW Z4","FPV F6","EVO","WRX","MALOO"};
    //can declare array later
    //like so:
    //cars[0] = "BMW Z3";
    //etc
    //just dont forget to declare array size

    std::cout << cars[0] << '\n';
    std::cout << cars[3] << '\n';
    std::cout << cars[2] << '\n';
    std::cout << cars[4] << '\n';
    std::cout << cars[1] << '\n';

    return 0;
}