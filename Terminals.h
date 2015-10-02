//
// Created by sergio on 10/1/15.
//

#ifndef TP1GENETICPROGRAMMING_TERMINALS_H
#define TP1GENETICPROGRAMMING_TERMINALS_H


#include "TypesDefinition.h"

class TerminalType
{
public:
    const char * getType();
    int getValue();
    void setValue(int);
    void setType(const char* type);
    virtual char getValueAsCharConstant();
    TerminalType(){};

private:
    int value;
    const char* type;
};

class Number : public TerminalType
{
public:
    Number()
    {
        setType(TerminalsName::SNUMBER_TYPE);
    }
};

class Variable : public TerminalType
{
public:
    char getValueAsCharConstant();

    Variable()
    {
        setType(TerminalsName::SVARIABLE_TYPE);
    }
};


#endif //TP1GENETICPROGRAMMING_TERMINALS_H
