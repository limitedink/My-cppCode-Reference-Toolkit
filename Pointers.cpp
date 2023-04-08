#include <iostream>



int main()
{
    //pointers = variable that stores a memory address of another variable
    //           sometimes it's easier to work with an address
    //      & address-of operator
    //      * dereference operator

    std::string name = "CJ";
    int age = 24;
    std::string freePizzas[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5",};

    // datatype > *p(name) = &(name);
    std::string  *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;
    //arrays don't need & 
    //common naming convention for pointers is p then variable name.

    //std::cout << pName;
    //contains a memory address as its value.
    std::cout << *pName <<'\n';
    std::cout << *pAge <<'\n';
    std::cout << *pFreePizzas <<'\n';
    // to access the value at this address you would use the dereference operator.


    return 0;
}