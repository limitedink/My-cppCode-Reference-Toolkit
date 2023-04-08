#include <iostream>

int main() {
  double num1, num2, result;
  char op;
  
  std::cout << "Enter first number: ";
  std::cin >> num1;
  
  std::cout << "Enter second number: ";
  std::cin >> num2;
  
  std::cout << "Enter operator (+, -, *, /): ";
  std::cin >> op;
  
  switch(op) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      std::cout << "Invalid operator!";
      return 1;
  }
  
  std::cout << num1 << " " << op << " " << num2 << " = " << result;
  
  return 0;
}