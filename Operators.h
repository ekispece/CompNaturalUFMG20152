//
// Created by sergio on 10/1/15.
//

#ifndef TP1GENETICPROGRAMMING_OPERATORS_H
#define TP1GENETICPROGRAMMING_OPERATORS_H

#include "TypesDefinition.h"
#include "Terminals.h"
#include <string>
#include <cstring>

class Operators
{
public:
    Operators(){};
    std::string getType();
    std::string getValue();
    void setValue(std::string);
    void setValue(double);
    void setType(std::string);
    virtual std::string getOperation();
    virtual std::string getTerminalType();


private:
    std::string type;
    std::string value;
};

class Function : public Operators
{
public:
    std::string getOperation();
    void setOperation(std::string);
    Function(std::string  op)
    {
        this->operation = op;
        setType(OperatorsName::SOPERATOR_FUNCTION_TYPE);
        setValue(this->operation);
    }

private:
    std::string operation;
};

class Constant : public Operators
{
public:
    double getConstant();
    std::string getTerminalType();
    Constant(double constant) :
            constant(constant),
            terminalType(TerminalsName::SCONSTANT_TYPE)
    {
        setType(OperatorsName::STERMINAL_TYPE);
        setValue(constant);
    }

private:
    double constant;
    std::string terminalType;
};

class Variable : public Operators
{
public:
    Variable(int variableIntValue) :
            variableIntValue(variableIntValue),
            terminalType(TerminalsName::SVARIABLE_TYPE)
    {
        setType(OperatorsName::STERMINAL_TYPE);
        char c1 = (variableIntValue + 64);
        char* val = (char *) malloc(2);
        val[0] = c1;
        val[1] = '\0';
        setValue(val);
    }

private:
    int variableIntValue;
    std::string terminalType;
};

#endif //TP1GENETICPROGRAMMING_OPERATORS_H
