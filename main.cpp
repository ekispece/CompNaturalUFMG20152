#include <iostream>
#include "Operators.h"
#include "BinaryTree.h"

using namespace std;

int main()
{
    auto seed = time(NULL);
    std::cout << "Hello, no seed was defined, so the program will use the default time(NULL) seed." << std::endl << "Your seed is : " + to_string(seed) << std::endl;
    srand(seed);

    Operators op1;
    OperatorFunction f1;
    f1.setOperation(OperatorsFunctionsName::SMULT_FUNC_TYPE);
    op1 = f1;
    Terminal t1;
    Terminal t2;
    Variable v1;
    v1.setValue(2);
    Variable v2;
    v1.setValue(3);
    t1.setContent(v1);
    t2.setContent(v2);

    Tree<Operators> tree(op1);
    Node<Operators>* root = tree.getRoot();
    root->insertChilds(new Node<Operators>(t1), new Node<Operators>(t2));

    Node<Operators>* leftmostChild = tree.getLeftmostChild();

    std::cout << "Value of tree : " << root->left->content.getContent().getValue();


    //std::cout << "You created a variable of type " << t.getType() << " = " << t.getValue() << " or " << t.getValueAsCharConstant() << std::endl;

    return 0;
}