//
// Created by sergio on 10/1/15.
//

#ifndef TP1GENETICPROGRAMMING_POPULATION_H
#define TP1GENETICPROGRAMMING_POPULATION_H

#include "Operators.h"
#include "BinaryTree.h"

class Individual
{
public:
    Individual();
    Individual(Individual&, Individual&);

    Tree &getGenotype()
    {
        return genotype;
    }

private:
    void populateNode(Node*);
    Tree genotype;
};

Operators generateRandomOperator();

Operators generateRandomTerminal();

Variable generateRandomVariable();

Constant generateRandomConstant();

Function generateRandomFunction();

#endif //TP1GENETICPROGRAMMING_POPULATION_H
