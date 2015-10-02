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
    const char * getType();
    char* getValue();
    void setType(const char *);


private:
    const char *type;
    char* value;
};

class Terminal : public Operators
{
public:
    TerminalType getContent();

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
    char* getOperation();
    void setOperation(char*);
    OperatorFunction()
    {
        setType(OperatorsName::SOPERATOR_FUNCTION_TYPE);
    }

private:
    char* operation;

};

#endif //TP1GENETICPROGRAMMING_OPERATORS_H
