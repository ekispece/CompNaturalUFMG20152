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

private:
    ExecutionParameters() {}
    int individualTreeMaxSize = 7;
    int numberOfVariables = 1;
    double maxValueOfConstants = 5.0;
    int numberOfDecimalDigitsForDoubleRandom = 3;
};


#endif //TP1GENETICPROGRAMMING_EXECUTIONPARAMETERS_H
