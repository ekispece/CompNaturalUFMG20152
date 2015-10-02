//
// Created by sergio on 10/1/15.
//

#include "Operators.h"

const char* Operators::getType() { return this->type; }
const char* Operators::getValue() { return this->value; }
void Operators::setValue(const char* value) { this->value = value;}
void Operators::setType(const char* type) { this->type = type; }
const char* Operators::getOperation(){};
const char Operators::getValueAsCharVariable() { }
const char* Operators::getTerminalType() { }

const char*Function::getOperation() { return this->operation; }
void Function::setOperation(const char* operation) { this->operation = operation; setValue(operation); }

void Variable::setIntValue(int value) { this->intValue = value; }
const char Variable::getValueAsCharVariable()
{
    const char c = (char) this->intValue + 64;
    return c;
}

//void Constant::setConstantValue(double value) { this->constantValue = value; }

const char* Number::getTerminalType() { return terminalType; }