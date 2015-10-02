//
// Created by sergio on 10/1/15.
//

#ifndef TP1GENETICPROGRAMMING_OPERATORS_H
#define TP1GENETICPROGRAMMING_OPERATORS_H

#include "TypesDefinition.h"
#include "Terminals.h"
#include <string>

class Operators
{
public:
    Operators(){};
    const char* getType();
    const char* getValue();
    void setValue(const char*);
    void setType(const char*);
    virtual const char* getOperation();
    virtual const char getValueAsCharVariable();
    virtual const char* getTerminalType();


private:
    const char*type;
    const char*value;
};

class Variable : public Operators
{
public:
    Variable(const int value)
    {
        this->intValue = value;
        setType(TerminalsName::SVARIABLE_TYPE);
        setValue(std::to_string(this->intValue).c_str());
    }
    void setIntValue(int);
    const char getValueAsCharVariable();

private:
    int intValue;
};

/*class Constant : public Operators
{
public:
    Constant(double value)
    {
        this->constantValue = value;
        setType(TerminalsName::SCONSTANT_TYPE);
        setValue(std::to_string(this->constantValue).c_str());
    }
    void setConstantValue(double);

private:
    double constantValue;
};*/

class Function : public Operators
{
public:
    const char* getOperation();
    void setOperation(const char*);
    Function(const char * op)
    {
        this->operation = op;
        setType(OperatorsName::SOPERATOR_FUNCTION_TYPE);
        setValue(this->operation);
    }

private:
    const char*operation;
};

class Number : public Operators
{
public:
    Number(double value) :
            numberValue(value),
            terminalType(TerminalsName::SCONSTANT_TYPE)
    {
        setType(OperatorsName::STERMINAL_TYPE);
        setValue(std::to_string(this->numberValue).c_str());
    }
    const char* getTerminalType();

private:
    double numberValue;
    const char* terminalType;
};

#endif //TP1GENETICPROGRAMMING_OPERATORS_H
