#include <iostream>

int main()
{
    //if statements - do something IF a condition is true.
    //                if not, then don't do it.

    int age;
    
    std::cout << "Enter your Age. ";
    std::cin >> age;

    if (age >=100){
        std::cout << "You made it to 100! Impressive";
    }
    else if(age == 69){
        std::cout << "Nice.";
    }
    else if(age >= 18){
        std::cout << "Welcome to the site!";
    }
    else if(age <=0){
        std::cout << "You haven't been born yet!";
    }
    else if (age <=2){
        std::cout << "How are you typing?!";
    }
    else if(age <=17){
        std::cout << "You are not old enough to enter.";
    }
    
    
    


    return 0;
}