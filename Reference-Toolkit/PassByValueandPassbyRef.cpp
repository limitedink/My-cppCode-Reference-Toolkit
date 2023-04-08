#include <iostream>

void swap(std::string &x, std::string &y);



int main()
{
    std::string x = "Coke";
    std::string y = "Water";
    std::string temp;

    //when passing variables to functions
    //pass by value - we're creating copies of the arguments.
    //pass by reference (&) - we're passing memory addresses to 
    //where the original x/y values are located

    swap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    return 0;
}

void swap(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}