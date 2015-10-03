//
// Created by sergio on 10/2/15.
//

#ifndef TP1GENETICPROGRAMMING_EXPRESSIONPARSE_H
#define TP1GENETICPROGRAMMING_EXPRESSIONPARSE_H

#include <string>
#include "muparser/include/muParser.h"

class ExpressionParser
{
public:
    ExpressionParser(std::map<std::string ,double> variablesList):
            variablesList(variablesList)
    { }

    double parse()
    {
        for (auto key : variablesList)
        {
            parser.DefineVar(key.first, &key.second);
        }
        parser.SetExpr(expression);
        return parser.Eval();
    }

    void setExpression(std::string expression)
    {
        this->expression = expression;
    }
private:
    std::map<std::string, double> variablesList;
    mu::Parser parser;
    std::string expression;
};

#endif //TP1GENETICPROGRAMMING_EXPRESSIONPARSE_H
