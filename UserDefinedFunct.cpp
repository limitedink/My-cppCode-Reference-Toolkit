#include <iostream>

//void happyBirthday();
//if you have a function declaration up here you'll have to add a parameter aswell
void happyBirthday(std::string name, int age);
int main()
{
    //function = a block of reusable code.
    //a function is like a house and doesn't know whats going on in other houses(functions)
    //but can be made aware through arguments and parameters
    std::string name;
    int age;
    happyBirthday(name, age); //when you send data to a function its called an argument

    return 0;
}
// the receiving func needs a matching set of parameters. (first data type, then parameter name)
void happyBirthday(std::string name, int age){ 
    //std::string name;
    std::cout << "Enter your name birthday boy/girl!: \n";
    std::cin >> name;

    std::cout << "Enter your age birthday boy/girl!: \n";
    std::cin >> age;

    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday dear " << name << '\n';
    std::cout << "Happy birthday to you!\n";

    std::cout << "You are " << age << " years old!\n";
}