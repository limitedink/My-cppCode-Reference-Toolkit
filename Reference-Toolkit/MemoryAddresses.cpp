#include <iostream>

int main()
{
    // memory address = a location in memory where data is stored
    // a memory address can be accessed with & (address-of operator)

    // an example hexadecimal address: 0xd5165ffc70
    // take "d5165ffc70" and you can convert to decimal address

    std::string name = "CJ";
    int age = 24;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';
    


    return 0;
}