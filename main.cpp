#include <iostream>
#include <memory>
#include "Operators.h"
#include "BinaryTree.h"
#include "ExpressionParse.h"
#include "Population.h"

int main()
{
    auto seed = time(NULL);
    std::cout << "Hello, no seed was defined, so the program will use the default time(NULL) seed." << std::endl << "Your seed is : " + std::to_string(seed) << std::endl;
    srand(seed);

    std::vector<Individual> individualsList;
    for(int i = 0 ; i < 30 ; i++)
    {
        Individual individual;
        individualsList.push_back(individual);
    }

    std::map<std::string, double> variables;
    variables["A"] = 2.9;
    variables["B"] = 3.1;
    ExpressionParser parse(variables);

    for (Individual individual : individualsList)
    {
        parse.setExpression(individual.getGenotype().getMathematicalExpression());
        double result = parse.parse();
        if(!std::isnan(result))
        {

            std::cout << individual.getGenotype().getMathematicalExpression() << " = " << result << std::endl;
        }
    }

    return 0;
}