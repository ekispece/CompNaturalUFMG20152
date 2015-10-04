#include <iostream>
#include <memory>
#include "Operators.h"
#include "BinaryTree.h"
#include "ExpressionParse.h"
#include "Population.h"
#include "FileParser.h"
#include "ExecutionParameters.h"

int main()
{
    /**
     * Seeding part 1443936225
     */
    auto seed = time(NULL);
    std::cout << "Hello, no seed was defined, so the program will use the default time(NULL) seed." << std::endl <<
    "Your seed is : " + std::to_string(seed) << std::endl;
    srand(seed);

    /**
     * File Opening and reading part
     */
    std::string fileName = "/home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/tests/SR_div.txt";
    FileParser fileParser(fileName);
    fileParser.getNumberOfVariables();
    std::vector<std::string> file = fileParser.getVectorOfTextFile();

    for (int generation = 0 ; generation < ExecutionParameters::getInstance().getMaxNumberOfGenerations(); generation++)
    {
        /**
         * Individual creation
         */
        std::vector<Individual> individualsList;
        for (int i = 0; i < ExecutionParameters::getInstance().getMaxNumberOfIndividuals(); i++)
        {
            Individual individual;
            individualsList.push_back(individual);
        }

        /**
         * Evaluation part
         */
        ExpressionParser expressionParser; //expressionParser

        Individual bestIndividual, worstIndividual;
        bool noBestIndividual = true;

        std::vector<Individual> updatedIndividualList;
        for (Individual individual : individualsList)
        {
            //std::cout << individual.getGenotype().getMathematicalExpression() << std::endl; debug cout
            expressionParser.setExpression(individual.getGenotype().getMathematicalExpression());

            for (auto line : file)
            {
                if (line == "")
                    continue;

                double variableValues[ExecutionParameters::getInstance().getNumberOfVariables()];
                double functionValue;
                /**
                 * Transform into a function
                 */
                std::istringstream lineStream(line);
                for (int i = 0; i < ExecutionParameters::getInstance().getNumberOfVariables(); i++)
                {
                    lineStream >> variableValues[i];
                    expressionParser.defineVars(variableValues[i]);
                }
                lineStream >> functionValue;
                /**
                 *
                 */

                double resultForIndividual = expressionParser.parse();
                double individualFitnessScore;
                //std::cout << "Results for A = " << variableValues[0] << " :\n\tind: " << resultForIndividual << "\nfun: " << functionValue << std::endl; debug cout

                if (!std::isnan(resultForIndividual)) //check whether it has a valid result
                {
                    /**
                     * The fitness score should be calculated here
                     */
                    double differenceOfFunctionValueAndIndividual = std::fabs(resultForIndividual - functionValue);
                    individualFitnessScore = individual.getFitnessScore() + differenceOfFunctionValueAndIndividual;
                    individual.setFitnessScore(individualFitnessScore);
                }
                else
                {
                    individualFitnessScore = std::nan("");
                    individual.setFitnessScore(
                            individualFitnessScore); //Setting individuals with invalid score to NaN so they won't appear in the worst individuals
                    //One case in which we don't want those individuals is for example the function x^x which can happen, and x can take negative values
                    expressionParser.clearVars();
                    updatedIndividualList.push_back(individual);
                    break;
                }
                expressionParser.clearVars();
            }
            if (noBestIndividual && std::isfinite(individual.getFitnessScore()))
            {
                bestIndividual.Copy(individual);
                worstIndividual.Copy(individual);
                noBestIndividual = false;
            }
            if (bestIndividual.getFitnessScore() > individual.getFitnessScore() &&
                std::isfinite(individual.getFitnessScore()))
                bestIndividual.Copy(individual);
            if (worstIndividual.getFitnessScore() < individual.getFitnessScore() &&
                std::isfinite(individual.getFitnessScore()))
                worstIndividual.Copy(individual);
            updatedIndividualList.push_back(individual);
        }
        individualsList.clear();
        individualsList = updatedIndividualList;

        IndividualsMetrics individualsMetrics(individualsList, 0.0);

        std::cout << "#################\n\tGeneration " << generation << std::endl;
        std::cout << "The best individual was : " << bestIndividual.getGenotype().getMathematicalExpression() <<
        " with a fitness score of : " << bestIndividual.getFitnessScore() << std::endl;
        std::cout << "The worst individual was : " << worstIndividual.getGenotype().getMathematicalExpression() <<
        " with a fitness score of : " << worstIndividual.getFitnessScore() << std::endl;
        std::cout << "The average fitness of this generation was : " << individualsMetrics.getAverageFitness() <<
        std::endl;
        std::cout << "The number of repeated individuals on this generation was : " <<
        individualsMetrics.getRepeatedIndividuals() << std::endl;
        std::cout << "There were " << individualsMetrics.getCrossoverIndividualsWithBetterFitnessThanParents() <<
        " individuals generated by crossover better than parents" << std::endl;
    }
    return 0;
}