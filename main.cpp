#include <iostream>
#include <memory>
#include "Operators.h"
#include "BinaryTree.h"

using namespace std;

int main()
{
    auto seed = time(NULL);
    std::cout << "Hello, no seed was defined, so the program will use the default time(NULL) seed." << std::endl << "Your seed is : " + to_string(seed) << std::endl;
    srand(seed);

    Function mult(OperatorsFunctionsName::SMULT_FUNC_TYPE);
    Operators op = mult;
    Function log(OperatorsFunctionsName::SLOG_FUNC_TYPE);
    Tree<Operators> tree(op);

    auto root = tree.getRoot();

    Variable v1(1);
    op = v1;
    root->insertLeftChild(op);
    Number n1(3.2);
    Number n2(3.3);
    //root->insertLeftChild(*c1);
    //root->content = v1;


    std::cout << "Value of Constant : " << tree.getRoot()->content.getValue();
    std::cout << "Value of leftmost child : " << tree.getLeftmostChild()->content.getValue();


    //std::cout << "You created a variable of type " << t.getType() << " = " << t.getValue() << " or " << t.getValueAsCharConstant() << std::endl;

    return 0;
}