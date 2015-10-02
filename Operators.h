//
// Created by sergio on 10/1/15.
//

#ifndef TP1GENETICPROGRAMMING_OPERATORS_H
#define TP1GENETICPROGRAMMING_OPERATORS_H

#include "TypesDefinition.h"
#include "Terminals.h"

class Operators
{
public:
    const char* getType();
    const char* getValue();
    void setValue(const char*);
    void setType(const char*);
    virtual TerminalType getContent();
    virtual const char* getOperation();


private:
    const char*type;
    const char*value;
};

class Terminal : public Operators
{
public:
    TerminalType getContent();
    void setContent(TerminalType);

    Terminal()
    {
        setType(OperatorsName::STERMINAL_TYPE);
    }

private:
    TerminalType content;

};

class OperatorFunction : public Operators
{
public:
    const char* getOperation();
    void setOperation(const char*);
    OperatorFunction()
    {
        setType(OperatorsName::SOPERATOR_FUNCTION_TYPE);
    }

private:
    const char*operation;

};

#endif //TP1GENETICPROGRAMMING_OPERATORS_H
