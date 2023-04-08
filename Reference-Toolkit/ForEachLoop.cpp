#include <iostream>

int main()
{
    //foreach loop = loop that eases the traversal over an 
    //               iterable data set
    //theres less syntax than a typical for loop but its less flexible.

    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    int grades[] = {99, 21, 69, 420, 777};

   // instead of for(int i = 0; i < sizeof(students)/ sizeof(students[0]); i++){
   //     std::cout << students[i] << '\n';

    for(std::string student : students){
        std::cout << student << '\n';
    }

    // for every v element v in array
    for(int grades : grades){
        std::cout << grades << '\n';
    }

    return 0;
}