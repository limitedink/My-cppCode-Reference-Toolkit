#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
    std::string name;
    int age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin, name); //getline > cin for anything with spaces
    //std::cin >> name;
    // add ">> std::ws" after getline(std::cin (add HERE), name)
    // if you want to reorder questions

    std::cout << "Hello " << name << "!" << "\n";

    std::cout << "How old are you " << name << "? ";
    std::cin >> age;
    std::cout << age << "!" << "\n" << "How youthful!";

    return 0;
}