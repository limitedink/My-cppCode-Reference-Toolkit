#include <iostream>



int main()
{
    // fill() = Fills a range of elements with a specified value
    //          fill(begin, end, value)
    const int SIZE = 99;
    //std::string foods[100];
    std::string foods[SIZE];

    //fill(foods, foods + 100, "pizza");
    //fill(foods, foods + (SIZE/2), "pizza");
    // first line is from 0 to SIZE/2 in this case 50 so 0-50
    //fill(foods + (SIZE/2), foods + SIZE, "cheeseburgers");
    //second line is from SIZE/2 (50) to foods + SIZE (100) so 50-100

    fill(foods, foods + (SIZE/3), "pizza"); //0-33
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "cheeseburgers"); //33-66
    fill(foods + (SIZE/3)*2, foods + SIZE, "pasta"); //66-99

    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}