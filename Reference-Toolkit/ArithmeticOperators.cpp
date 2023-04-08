#include <iostream>

int main()
{
    // arithmetic operators = returns the result of a specific
    //                        arithmetic operation (+-*/)
    int students = 20;

    //students = students + 1;
    students+=1;
    //students++;  increment function increases by 1 
    //useful in loops

    int remainder = students % 2; //% modulus function useful for seeing if number is odd/even % 2
    std::cout << students;

    return 0;
}