#include <iostream>

int main()
{
    //switch = alternative to using many "else if" statements
    //         compare one value against matching cases

    int month;
    std::cout << "Enter your Birthday Month (1-12): ";
    std::cin >> month;

    switch(month)
    {
        case 1:
            std::cout << "January huh? You're a summer baby.";
           break;
        case 2 : 
            std::cout << "February huh? You're a summer baby.";
            break;
        case 3 : 
            std::cout << "March huh? Autumn now we're talkin'";
            break;
        case 4 : 
            std::cout << "April huh? Autumn now we're talkin'";
            break;
        case 5 : 
            std::cout << "May huh? Autumn now we're talkin'";
            break;
        case 6 : 
            std::cout << "June huh? BRR a Winter baby, how COOL!";
            break;
        case 7 : 
            std::cout << "July huh? BRR a Winter baby, how COOL!";
            break;
        case 8 : 
            std::cout << "August BRR a Winter baby, how COOL!";
            break;
        case 9 : 
            std::cout << "September huh? Spring what a wonderful time of year!";
            break;
        case 10 : 
            std::cout << "October huh? Spring what a wonderful time of year!";
            break;
        case 11 : 
            std::cout << "November? Valentines baby huh? Spring what a wonderful time of year!";
            break;
        case 12 : 
            std::cout << "December huh? You're a CHRISTMAS baby.";
            break;
        default:
        std::cout << "Please enter in only numbers (1-12).";
    }




    return 0;
}