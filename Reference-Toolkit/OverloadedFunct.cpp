#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main()
{
    bakePizza("Pepperoni");
    bakePizza("Pineapple", "Mushroom");

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}

//function name + parameters is known as a function signature
//functions can share the same name so long as they have different parameters.
//(a different signature)
void bakePizza(std::string topping1){ 
    std::cout << "Here is your " << topping1 << " pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2){ 
    std::cout << "Here is your " << topping1 << " & " << topping2 << " pizza!\n";
}