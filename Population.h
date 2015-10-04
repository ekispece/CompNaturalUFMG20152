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
    void Copy(Individual&);

    Tree &getGenotype()
    {
        return genotype;
    }
    void setGenotype(Tree &tree)
    {
        this->genotype = tree;
    }

    double getFitnessScore();
    void setFitnessScore(double&);
    std::string getGenerationMethod();
    void setGenerationMethod(std::string);

private:
    std::string generationMethod;
    void populateNode(Node*);
    Tree genotype;
    double fitnessScore;
};

class IndividualsMetrics
{
public:
    IndividualsMetrics(std::vector<Individual> individuals, const double parentsAverageFitness);

    int getValidIndividuals() const
    {
        return validIndividuals;
    }

    int getRepeatedIndividuals() const
    {
        return repeatedIndividuals;
    }

    int getCrossoverIndividualsWithBetterFitnessThanParents() const
    {
        return crossoverIndividualsWithBetterFitnessThanParents;
    }

    double getAverageFitness() const
    {
        return averageFitness;
    }

private:
    int validIndividuals = 0 , repeatedIndividuals = 0 , crossoverIndividualsWithBetterFitnessThanParents = 0;
    double averageFitness = 0.0;
};


Operators generateRandomOperator();

Operators generateRandomTerminal();

Variable generateRandomVariable();

Constant generateRandomConstant();

Function generateRandomFunction();

#endif //TP1GENETICPROGRAMMING_POPULATION_H
