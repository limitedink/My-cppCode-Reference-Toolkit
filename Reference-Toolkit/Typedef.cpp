#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//new id usually ends in _t for type.

//typedef std::string text_t;\
            or
using text_t = std::string;



int main() {

    /* typedef = reserved keyword used to create an 
                additional name (alias/nickname) for another data type.
                New identifier for an existing type
                Helps with readability and reduces typos
                Use when there is a clear benefit
                Largely been replaced with 'using' keyword
                (works better w/ templates)
                */
        //pairlist_t pairlist;
        text_t firstName = "CJ";

        std::cout << firstName << '\n';

    return 0;
}