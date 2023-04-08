#include <iostream>

void walk(int steps, int currentStep);
//void walk(int steps);
int main()
{
    // recursion = a programming technique where a function
    //             invokes itself from within
    //             break a complex concept into a repeatable single steps

    // many problems can be approached (iteratively or recursively)
    // advantages = less code and its cleaner, useful for sorting and 
    //              searching algorithms.
    
    // disadvantages = uses more memory, slower

    walk(10, 1);
    return 0;
}

//iterative
//void walk(int steps){
//    for(int i = 0; i < steps; i++){
//       std::cout << "You take step #" << i + 1 << '\n' ;
//    }
//}

//recursive
void walk(int steps, int currentStep){
    if(currentStep <= steps){
        std::cout << "You take step #" << currentStep << '\n' ;
        walk(steps, currentStep + 1);
    }
}