#include <iostream>

int main()
{
    // type conversion = conversion of a value of one data type
    // to another
    //              Implicit = automatic
    //              Explicit = Precede value with new data type (int) x

    double x = (int) 3.14; //explicit conversion turns into int

    std::cout << x << '\n';
    std::cout << (char) 100 << '\n'; //displays ASCII char with value "100"

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100; //int division

    std::cout << score << "%";

    return 0;
}