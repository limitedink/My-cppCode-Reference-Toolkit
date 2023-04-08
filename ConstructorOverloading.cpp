#include <iostream>

class Pizza{
        public:
            std::string topping1;
            std::string topping2;

        Pizza(){

        }
        Pizza(std::string topping1){
            this->topping1 = topping1;
        }
        Pizza(std::string topping1, std::string topping2){
            this->topping1 = topping1;
            this->topping2 = topping2;
        }
};

int main()
{
    // overloaded constructors = multiple constructors w/ same name but different
    //                          parameters allows for varying arguments
    //                          when instantiating an object.
    Pizza pizza1("Pepperoni");
    Pizza pizza2("Mushroom", "Olive");
    Pizza pizza3;

    std::cout << pizza1.topping1 << " Pizza" << '\n';
    std::cout << pizza2.topping1 << " & ";
    std::cout << pizza2.topping2 << " Pizza" << '\n';
    
    
    return 0;
}