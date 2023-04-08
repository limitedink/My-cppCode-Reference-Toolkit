#include <iostream>

int factorial(int n) {
  if(n == 0) {
    return 1;
  }
  else {
    return n * factorial(n - 1);
  }
}

int main() {
  int n, result;
  
  std::cout << "Enter a positive integer: ";
  std::cin >> n;
  
  if(n < 0) {
    std::cout << "Error: Invalid input!";
    return 1;
  }
  
  result = factorial(n);
  
  std::cout << n << "! = " << result;
  
  return 0;
}