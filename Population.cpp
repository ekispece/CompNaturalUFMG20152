//
// Created by sergio on 10/1/15.
//

#include <iostream>
#include <cmath>
#include "Population.h"
#include "ExecutionParameters.h"

Individual::Individual():
fitnessScore(0)
{
    setGenerationMethod(IndividualsGenerationMethodNames::SRANDOM_METHOD_TYPE);
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

double Individual::getFitnessScore()
{
    return this->fitnessScore;
}

void Individual::setFitnessScore(double &fitnessScore)
{
    this->fitnessScore = fitnessScore;
}

void Individual::Copy(Individual & ind)
{
    this->fitnessScore = ind.getFitnessScore();
    this->genotype = ind.getGenotype();
}

void Individual::setGenerationMethod(std::string generationMethod)
{
    this->generationMethod = generationMethod;
}

std::string Individual::getGenerationMethod()
{
    return this->generationMethod;
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

IndividualsMetrics::IndividualsMetrics(std::vector<Individual> individuals, const double parentsAverageFitness)
{
    int currentIndividual = 0;
    for(auto individual : individuals)
    {
        if (std::isfinite(individual.getFitnessScore()))//once again I'm only interested in individuals with a valid fitness, individuals with invalid fitness would just make the average go crazy
        {
            validIndividuals++;
            averageFitness += individual.getFitnessScore();
            if (individual.getFitnessScore() > parentsAverageFitness && individual.getGenerationMethod() == IndividualsGenerationMethodNames::SCROSSOVER_METHOD_TYPE)
                crossoverIndividualsWithBetterFitnessThanParents++;
        }
        for (int i = currentIndividual+1 ; i < individuals.size(); i++)
        {
            if (individual.getGenotype().getRoot()->equals(individuals[i].getGenotype().getRoot()))
            {
                repeatedIndividuals++;
                break;
            }
        }
        currentIndividual++;
    }
    averageFitness /= validIndividuals;
}