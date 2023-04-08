#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void cpuMove(char *spaces, char cpu);
bool checkWinner(char *spaces, char player, char cpu);
bool checkTie(char *spaces);


int main()
{
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' ' };
    char player;
    char cpu;
    bool running = true;

    std::cout << "Do you want to play as X or O?: " << '\n';
    std::cin >> player;

    if(player == 'x'){
        cpu = 'o';
    }
    else if(player == 'o'){
        cpu = 'x';
    }
     else if(player == 'X'){
        cpu = 'o';
    }
    else{
        cpu = 'x';
    }

    drawBoard(spaces);
    //remember when we pass in an array to a function it decays to a pointer.

    while(running){
        if (player == 'o' || player == 'O') {
        cpuMove(spaces, cpu);
        drawBoard(spaces);
        if(checkWinner(spaces, player, cpu)){
            running = false;
            break;
        }
        else if (checkTie(spaces)){
            running = false;
            break;
        }
        }

        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player, cpu)){
        running = false;
        break;
        }
        else if (checkTie(spaces)){
        running = false;
        break;
        }

        if (player != 'o' && player != 'O') {
        cpuMove(spaces, cpu);
        drawBoard(spaces);
        if(checkWinner(spaces, player, cpu)){
            running = false;
            break;
        }
        else if (checkTie(spaces)){
            running = false;
            break;
        }
        }
    }
    std::cout << '\n'<< "Thanks for playing!\n";
    return 0;
}

void drawBoard(char *spaces){
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] <<"  |  "<< spaces[2] <<"   " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] <<"  |  "<< spaces[5] <<"   " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] <<"  |  "<< spaces[8] <<"   " << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << '\n';
}

void playerMove(char *spaces, char player){
    int number;
    do{
        std::cout << "Enter a spot to place a marker (1-9)";
        std::cin >> number;
        number--;
        if(spaces[number] == ' '){
           spaces[number] = player;
           break;
        }

    }while(!number > 0 | !number < 8);
}

void cpuMove(char *spaces, char cpu){
    int number;
    srand(time(0));

    while(true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = cpu;
            break;
        }
        
    }
}

bool checkWinner(char *spaces, char player, char cpu){

    if((spaces[0] == spaces[1]) && (spaces [1] == spaces[2]) && (spaces[0] != ' ') ){
        spaces[0] == player ? std::cout << "GG You win!" : std::cout <<"GG YOU LOSE!";
        
    }
    else if((spaces[0] == spaces[4]) && (spaces [4] == spaces[8]) && (spaces[0] != ' ') ){
        spaces[0] == player ? std::cout << "GG You win!" : std::cout << "GG YOU LOSE!";
        
    }
    else if((spaces[0] == spaces[3]) && (spaces [3] == spaces[6]) && (spaces[0] != ' ') ){
        spaces[0] == player ? std::cout << "GG You win!" : std::cout << "GGYOU LOSE!";
        
    }
    else if((spaces[6] == spaces[7]) && (spaces [7] == spaces[8]) && (spaces[6] != ' ') ){
        spaces[6] == player ? std::cout << "GG You win!" : std::cout << "GG YOU LOSE!";
        
    }    
    else if((spaces[2] == spaces[5]) && (spaces [5] == spaces[8]) && (spaces[2] != ' ') ){
        spaces[2] == player ? std::cout << "GG You win!" : std::cout << "GGYOU LOSE!";
        
    }        
    else if((spaces[3] == spaces[4]) && (spaces [4] == spaces[5]) && (spaces[3] != ' ') ){
        spaces[3] == player ? std::cout << "GG You win!" : std::cout << "GGYOU LOSE!";
        
    }    
    else if((spaces[2] == spaces[6]) && (spaces [6] == spaces[4]) && (spaces[2] != ' ') ){
        spaces[2] == player ? std::cout << "GG You win!" : std::cout << "GGYOU LOSE!";
        
    }    
    else if((spaces[1] == spaces[4]) && (spaces [4] == spaces[7]) && (spaces[1] != ' ') ){
        spaces[1] == player ? std::cout << "GG You win!" : std::cout << "GGYOU LOSE!";
        
    }    
    else{
        return false;
    }    
    return true;
}

bool checkTie(char *spaces){
    
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    std::cout << "Its a TIE!\n";
    return true;
}
