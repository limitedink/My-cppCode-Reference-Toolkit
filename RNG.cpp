#include <iostream>
#include <ctime>

int main()
{
    //pseudo-random = NOT truly random (but close)
    //if you need multiple rolls uncomment lines
    srand(time(NULL));

    int num1 = (rand() % 100) + 1;
    //int num2 = (rand() % 100) + 1;
    //int num3 = (rand() % 100) + 1;

    std::cout << num1 << '\n';
    //std::cout << num2 << '\n';
    //std::cout << num3 << '\n';

    return 0;
}