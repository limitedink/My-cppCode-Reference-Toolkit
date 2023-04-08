#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double ATAR;

    Student(std::string name, int age, double ATAR){
        this->name = name;
        this->age = age;
        this->ATAR = ATAR;
    }
     //can also be written as:
    /*
    Student(std::string x, int y, double z){
        name = x;
        age = y;
        ATAR = z;
    }
   */
};

int main()
{
    // constructor = special method that is automatically called when 
    //               an object is instantiated useful for assigning values 
    //               to attributes as arguments.
    Student student1("Spongebob", 14, 45);
    Student student2("Patrick", 13, 21);
    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.ATAR << '\n';

    return 0;
}