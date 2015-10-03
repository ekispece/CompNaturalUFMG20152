//
// Created by sergio on 10/1/15.
//

#ifndef TP1GENETICPROGRAMMING_TYPESDEFINITION_H
#define TP1GENETICPROGRAMMING_TYPESDEFINITION_H

#include <vector>

class OperatorsName
{
public:
    static constexpr const char* STERMINAL_TYPE = "terminal";
    static constexpr const char* SOPERATOR_FUNCTION_TYPE = "operator";
};

class TerminalsName
{
public:
    static constexpr const char* SVARIABLE_TYPE = "variable";
    static constexpr const char* SCONSTANT_TYPE = "number";
};

class OperatorsFunctionsName
{
public:
    static const int totalFunctions = 5;
    static constexpr const char* SMULT_FUNC_TYPE = "*";
    static constexpr const char* SSUM_FUNC_TYPE = "+";
    static constexpr const char* SSUB_FUNC_TYPE = "-";
    static constexpr const char* SDIV_FUNC_TYPE = "/";
    static constexpr const char* SNPOW_FUNC_TYPE = "^";
    static std::vector<const char*> getFunctionsVector()
    {
        std::vector<const char*> v;
        v.push_back("*");
        v.push_back("+");
        v.push_back("-");
        v.push_back("/");
        v.push_back("^");
        return v;
    }
};

#endif //TP1GENETICPROGRAMMING_TYPESDEFINITION_H
