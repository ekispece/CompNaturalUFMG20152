//
// Created by sergio on 10/2/15.
//

#ifndef TP1GENETICPROGRAMMING_EXECUTIONPARAMETERS_H
#define TP1GENETICPROGRAMMING_EXECUTIONPARAMETERS_H

class ExecutionParameters
{
public:

    static ExecutionParameters& getInstance()
    {
        static ExecutionParameters instance;
        return instance;
    }

    int getIndividualTreeMaxSize() const
    {
        return individualTreeMaxSize;
    }

    void setIndividualTreeMaxSize(int individualTreeMaxSize)
    {
        ExecutionParameters::individualTreeMaxSize = individualTreeMaxSize;
    }

    int getNumberOfVariables() const
    {
        return numberOfVariables;
    }

    void setNumberOfVariables(int numberOfVariables)
    {
        ExecutionParameters::numberOfVariables = numberOfVariables;
    }

    double getMaxValueOfConstants()
    {
        return maxValueOfConstants;
    }

    void setMaxValueOfConstants(double maxValueOfConstants)
    {
        ExecutionParameters::maxValueOfConstants = maxValueOfConstants;
    }

    int getNumberOfDecimalDigitsForDoubleRandom() const
    {
        return numberOfDecimalDigitsForDoubleRandom;
    }

    void setNumberOfDecimalDigitsForDoubleRandom(int numberOfDecimalDigitsForDoubleRandom)
    {
        ExecutionParameters::numberOfDecimalDigitsForDoubleRandom = numberOfDecimalDigitsForDoubleRandom;
    }

    int getMaxNumberOfIndividuals()
    {
        return maxNumberOfIndividuals;
    }

    void setMaxNumberOfIndividuals(int maxNumberOfIndividuals)
    {
        ExecutionParameters::maxNumberOfIndividuals = maxNumberOfIndividuals;
    }

    int getTournamentSize()
    {
        return tournamentSize;
    }

    void setTournamentSize(int tournamentSize)
    {
        ExecutionParameters::tournamentSize = tournamentSize;
    }

    double getCrossoverProbability()
    {
        return crossoverProbability;
    }

    void setCrossoverProbability(double crossoverProbability)
    {
        ExecutionParameters::crossoverProbability = crossoverProbability;
    }

    double getMutationProbability()
    {
        return mutationProbability;
    }

    void setMutationProbability(double mutationProbability)
    {
        ExecutionParameters::mutationProbability = mutationProbability;
    }

    int getMaxNumberOfGenerations()
    {
        return maxNumberOfGenerations;
    }

    void setMaxNumberOfGenerations(int maxNumberOfGenerations)
    {
        ExecutionParameters::maxNumberOfGenerations = maxNumberOfGenerations;
    }

private:
    ExecutionParameters() {}

    //Related to individuals
    int individualTreeMaxSize = 7;
    int maxNumberOfIndividuals = 30;

    //related to random BTree generation
    int numberOfVariables = 2;
    double maxValueOfConstants = 5.0;
    int numberOfDecimalDigitsForDoubleRandom = 3;

    //Related to selection
    int tournamentSize = 2;

    //Related to generations
    double crossoverProbability = 0.9;
    double mutationProbability = 0.05;
    int maxNumberOfGenerations = 30;
};


#endif //TP1GENETICPROGRAMMING_EXECUTIONPARAMETERS_H
