#include <iostream>

struct student{
    std::string name;
    double ATAR;
    bool enrolled = true;
};

int main()
{
    // struct = A structure that groups related variables under one name
    //          structs can contain many different data types (string, int, double, bool, etc.)
    //          variables in a struct are known as "members"
    //          members can be accessed with . "Class Member Access Operator"

    student student1;
    student student2;
    student1.name = "Spongebob";
    student1.ATAR = 22.5;
    

    student2.name = "Patrick";
    student2.ATAR = 21;
    student2.enrolled = false;

    std::cout << student1.name << '\n';
    std::cout << student1.ATAR << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.ATAR << '\n';
    std::cout << student2.enrolled << '\n';

    return 0;
}

