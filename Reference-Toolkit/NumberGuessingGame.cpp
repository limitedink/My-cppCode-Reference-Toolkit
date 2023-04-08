#include <iostream>

int main()
{
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 10) + 1;

    std::cout << "****** NUMBER GUESSING GAME *****\n";

    do{
        std::cout << "Enter a guess between (1-10): ";
        std::cin >> guess;
        tries++;

        if(guess > num) {
            std::cout << "Too high!\n";
        }
        else if(guess < num){
            std::cout << "Too low!\n";
        }
        else{
            std::cout << "You guessed the number!" << "\n" << "# of tries: " << tries << '\n';
        }
    }while(guess != num);

    std::cout << "*********************************\n";

    return 0;
}