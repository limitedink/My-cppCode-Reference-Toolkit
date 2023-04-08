#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    //if(name.empty()){
    //  std::cout << "You didn't enter your name";
    // }

    //.empty(); checks a string if its empty
    //.length(); returns the value of the characters in a string.
    //.clear(); removes value of string
    //.append("@gmail.com"); 

    //std::cout << name.at(0 is the first character); returns char at value
    //.insert(0, "@"); inserts at first value
    //.find(' '); finds where character within quotes is found in string
    //.erase(0, 3);

    if(name.length() > 12){
        std::cout "Your name can't be over 12 characters long.";
    }
    else{
        std::cout << "Welcome" << name;
    }

    return 0;
}