#include <iostream>

int main()
{
    //how to iterate over an array using a forLoop.
    //std::string students[] = {"Spongebob", "Patrick", "Squidward"};
    char numbers[] = {'1','2','3'};

    for(int i = 0; i < sizeof(numbers)/sizeof(char); i++){
        std::cout << numbers[i] << '\n';
    }


    return 0;
}