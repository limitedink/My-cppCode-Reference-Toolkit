#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);


int main()
{
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "You have selected: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "CPU's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){
    char player;
    std::cout << "Rock-Paper-Scissors GAME\n";
    do{
        std::cout << "Choose one of the following. \n";
        std::cout << "****************************\n";
        std::cout << "'R/r' for ROCK\n";
        std::cout << "'P/p' for PAPER\n";
        std::cout << "'S/s' for SCISSORS\n";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's' && player != 'R' && player != 'P' && player != 'S');

    return player;
}

char getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p'; //don't need to add break because we're already
        case 3: return 's'; // breaking when we return.
    }
    
}

void showChoice(char choice){
    switch(choice){
        case 'r': std::cout << "ROCK\n";
                    break;
        case 'R': std::cout << "ROCK\n";
                    break;
        case 'p': std::cout << "PAPER\n";
                    break;
        case 'P': std::cout << "PAPER\n";
                    break;
        case 's': std::cout << "SCISSOR\n";
                    break;
        case 'S': std::cout << "SCISSORS\n";
                    break;
    }

}

void chooseWinner(char player, char computer){
    switch(player){
        case 'r': if(computer == 'r'){
                        std::cout << "It's a tie!\n";
                    }
                    else if(computer == 'p'){
                        std::cout << "You Lose.\n";
                    }
                    else{
                        std::cout << "You Win!";
                    }
                    break;
        case 'R': if(computer == 'r'){
                        std::cout << "It's a tie!\n";
                    }
                    else if(computer == 'p'){
                        std::cout << "You Lose.\n";
                    }
                    else{
                        std::cout << "You Win!";
                    }
                    break;
        case 'p': if(computer == 'p'){
                        std::cout << "It's a tie!\n";
                    }
                    else if(computer == 's'){
                        std::cout << "You Lose.\n";
                    }
                    else{
                        std::cout << "You Win!";
                    }
                    break;
        case 'P': if(computer == 'p'){
                        std::cout << "It's a tie!\n";
                    }
                    else if(computer == 's'){
                        std::cout << "You Lose.\n";
                    }
                    else{
                        std::cout << "You Win!";
                    }
                    break;
        case 's': if(computer == 's'){
                        std::cout << "It's a tie!\n";
                    }
                    else if(computer == 'r'){
                        std::cout << "You Lose.\n";
                    }
                    else{
                        std::cout << "You Win!";
                    }
                    break;
        case 'S': if(computer == 's'){
                        std::cout << "It's a tie!\n";
                    }
                    else if(computer == 'r'){
                        std::cout << "You Lose.\n";
                    }
                    else{
                        std::cout << "You Win!";
                    }
                    break;
    }
    
}
