#include <iostream>

int main()
{
    // sizeof() = determines the size in bytes of a:
    //            variable, data type, class, objects, etc.
    double ATAR = 99.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";

    return 0;
}