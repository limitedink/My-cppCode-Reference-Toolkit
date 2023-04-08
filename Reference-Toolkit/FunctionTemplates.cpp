#include <iostream>

template <typename T, typename U>
//the cookie cutter shape
//return type could be T, U or auto
auto max(T x, U y){
    return (x > y) ? x : y;
}

int main()
{
    // function template = describes what a function looks like.
    //                     Can be used to generate as many overloaded functions
    //                     as needed, each using different data types.
    //                     Ex. "It's like a cookie cutter"                     
    // common naming convention is T

    //the dough
    std::cout << max(1.1, 2.1) << '\n';

    return 0;
}