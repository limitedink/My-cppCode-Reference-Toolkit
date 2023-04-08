#include <iostream>


namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main() {

    /* Namespace = provides a solution for preventing name 
    conflicts in large projects. Each entity needs a unique name.
    A namespace allows for identically named entities
    as long as the namespaces are different.
    */
   using namespace second;

   int x = 0;

   std::cout << first::x;


    //"using namespace std;" is dangerous to naming conflicts
    //a safer method would be something like "using std::cout;"
    // and using "std::string;"
    return 0;
}