#include <iostream>

int main()
{
    // && = check if two conditions are true
    // || check if at least one of two conditions is true
    // ! = reverses the logical state of its operand (not)
    
    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "The temperature is good!";
    }
    else{
        std::cout << "The temperature is bad";
    }
    



    return 0;
}