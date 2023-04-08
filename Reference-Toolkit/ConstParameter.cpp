#include <iostream>
void printInfo(const std::string name, const int age);

int main()
{
    // const parameter = parameter that is effectively read-only
    //                   code is more secure & conveys intent
    //                   useful for references and pointers.
    //                   so nobody can change the value at that reference
    //                   or nobody can change the address where a pointer
    //                   is pointing to.

    std::string name = "CJ";
    int age = 24;
    printInfo(name, age);

    



    return 0;
}
// const is like read-only
// code will display error showing that name/age const var tried to be modified
void printInfo(const std::string name, const int age){
    name = " ";
    age = 0;
    std::cout << "Name: " << name << '\n';
    std::cout << "Age: " << age << '\n';
}