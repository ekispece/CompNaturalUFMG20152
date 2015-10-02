#include <iostream>
#include "Terminals.h"
#include "tree.hh"
#include "Operators.h"

using namespace std;

int main()
{
    auto seed = time(NULL);
    std::cout << "Hello, no seed was defined, so the program will use the default time(NULL) seed." << std::endl << "Your seed is : " + to_string(seed) << std::endl;
    srand(seed);

    tree<Operators> t;

    //std::cout << "You created a variable of type " << t.getType() << " = " << t.getValue() << " or " << t.getValueAsCharConstant() << std::endl;

    return 0;
}