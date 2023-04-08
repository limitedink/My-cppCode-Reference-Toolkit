#include <iostream> 

double getTotal(double prices[], int size);

int main()
{
    double prices[] = {49.99, 19.99, 9.99, 4.99};
    int size = sizeof(prices)/sizeof(prices[0]); // or sizeof(double)
    double total = getTotal(prices, size);
//when we pass an array to a func^ you only need to pass the array name
// you dont need the square brackets. ^ dont forget to pass size as a 
// second argument too.

    std::cout << "$" << total;

    return 0;
}

//when a function receives an array it decays into a pointer.
//and the function no longer knows what the size of the array is.
// so we can pass that as an additional argument to let it know what the size is

double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        //total = total + prices[i];
        //or
        total += prices[i];  
    }
    return total;
}