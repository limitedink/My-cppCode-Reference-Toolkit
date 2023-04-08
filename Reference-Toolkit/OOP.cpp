#include <iostream>

class Human{
    public:
            //attributes
           std::string name;
           std::string occupation;
           int age;

           //methods
           void eat(){
            std::cout << "This person is eating\n";
           }
           void drink(){
            std::cout << "This person is drinking\n";
           }
           void sleep(){
            std::cout << "This person is sleeping\n";
           }
           void coding(){
            std::cout << "This person is coding\n";
           }
}; //dont forget a semicolon at the end of a class

int main()
{
    // object = A collection of attributes(characteristics of an object) 
    //          and methods(functions an object can perform)

    //          They can have characteristics and could perform actions
    //          Can be used to mimic real world items (ex. Phone, Book, Cat)
    //          Created from a class which acts as a "blue-prints"

    Human human1;
    Human human2;

    human1.name = "CJ";
    human1.occupation = "student";
    human1.age = 24;

    human2.name = "Faith";
    human2.occupation = "student";
    human2.age = 24;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.coding();

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    human2.eat();
    human2.sleep();

    return 0;
}