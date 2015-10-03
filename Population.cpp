//
// Created by sergio on 10/1/15.
//

#include <iostream>
#include <cmath>
#include "Population.h"
#include "ExecutionParameters.h"

Individual::Individual()
{
    Operators op = generateRandomOperator();

    Tree tree(op);
    Node* it = tree.getRoot();
    if (it->content.getType() == OperatorsName::STERMINAL_TYPE)
    {
        this->genotype = tree;
        return;
    }

    populateNode(it);

    genotype = tree;
}

void Individual::populateNode(Node * node)
{
    if (node->content.getType() == OperatorsName::STERMINAL_TYPE)
        return;
    Operators left, right;
    if (node->layer == ExecutionParameters::getInstance().getIndividualTreeMaxSize()-1)
    {
        Operators terminal = generateRandomTerminal();
        node->content = terminal;
        return;
    }
    left = generateRandomOperator();
    right = generateRandomOperator();
    node->insertChildren(left,right);
    populateNode(node->left);
    populateNode(node->right);
}

Operators generateRandomOperator()
{
    Operators op;
    int randomNumber = rand() % 3;
    switch (randomNumber)
    {
        case 0: op = generateRandomVariable();
            break;
        case 1: op = generateRandomConstant();
            break;
        case 2: op = generateRandomFunction();
            break;
    }
    return op;
}

Operators generateRandomTerminal()
{
    Operators op;
    int randomNumber = rand() % 2;
    switch (randomNumber)
    {
        case 0: op = generateRandomVariable();
            break;
        case 1: op = generateRandomConstant();
            break;
    }
    return op;
}

Variable generateRandomVariable()
{
    int varNumbers = ExecutionParameters::getInstance().getNumberOfVariables();
    int randomVariableValue = rand()%varNumbers+1;
    Variable variable(randomVariableValue);
    return variable;
}

Constant generateRandomConstant()
{
    double randomDouble;

    randomDouble = rand() % (int)(ExecutionParameters::getInstance().getMaxValueOfConstants()*pow(10.0,ExecutionParameters::getInstance().getNumberOfDecimalDigitsForDoubleRandom()));
    randomDouble = randomDouble / pow(10.0,ExecutionParameters::getInstance().getNumberOfDecimalDigitsForDoubleRandom());

    Constant constant(randomDouble);
    return constant;
}

Function generateRandomFunction()
{
    int randomFunctionNumber = rand() % OperatorsFunctionsName::totalFunctions;
    Function function(OperatorsFunctionsName::getFunctionsVector()[randomFunctionNumber]);
    return function;
}