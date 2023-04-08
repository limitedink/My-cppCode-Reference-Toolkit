#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1: std::cout << "You got a RARE SWORD!\n";
            break;
        case 2: std::cout << "You found some Trash.!\n";
            break;
        case 3: std::cout << "You got an EPIC WAND\n";
            break;
        case 4: std::cout << "You got a MAGIC Shield!\n";
            break;
        case 5: std::cout << "You got a LEGENDARY Chestpiece!\n";
            break;
    }

    return 0;
}