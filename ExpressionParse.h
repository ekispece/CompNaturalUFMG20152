//
// Created by sergio on 10/2/15.
//

#ifndef TP1GENETICPROGRAMMING_EXPRESSIONPARSE_H
#define TP1GENETICPROGRAMMING_EXPRESSIONPARSE_H

#include <string>
#include "muparser/include/muParser.h"

mu::value_type protectedDiv(mu::value_type v1, mu::value_type v2);

class ExpressionParser
{
public:
    ExpressionParser()
    {
        parser.DefineOprt(_T("//"), protectedDiv, mu::prMUL_DIV);
    }

    double parse()
    {
        parser.SetExpr(expression);
        return parser.Eval();
    }

    void defineVars(mu::value_type &valueType)
    {
        parser.DefineVar(alphabet[currentLetter++], &valueType);
    }

    void clearVars()
    {
        currentLetter = 0;
        parser.ClearVar();
    }

    void setExpression(std::string expression)
    {
        this->expression = expression;
    }
private:
    std::string alphabet[26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    int currentLetter = 0;
    mu::Parser parser;
    std::string expression;
};

mu::value_type protectedDiv(mu::value_type v1, mu::value_type v2)
{
    if(v2 != 0)
        return v1/v2;
    else
        return 0; //Protected division, when division by 0 occurs, it instead returns 1. returning DBL_MAX can also work, but it would explode a lot of individuals fitness
}

#endif //TP1GENETICPROGRAMMING_EXPRESSIONPARSE_H
