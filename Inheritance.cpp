#include <iostream>

class Animal{
    public:
        bool alive = true;

    void eat(){
        std::cout << "This animal is eating\n";
    }
};

class Dog : public Animal{
    public:
        void bark(){
            std::cout << "The dog goes woof!\n";
        }
};
class Cat : public Animal{
    public:
        void meow(){
            std::cout << "The cat meows\n";
        }
        void purr(){
            std::cout << "The cat purrs\n";
        }
};
int main()
{
    // inheritance = A class can receive attributes and methods from
    //               another class. Children classes inherit from a 
    //               Parent class. Helps to reuse similar code found
    //               within multiple classes

    Dog dog;
    Cat cat;


    std::cout << dog.alive << '\n';
    std::cout << cat.alive << '\n';
    
    dog.eat();
    dog.bark();
    cat.meow();
    cat.eat();
    cat.purr();

    return 0;
}