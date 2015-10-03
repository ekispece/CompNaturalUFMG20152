//
// Created by sergio on 10/1/15.
//

#include "Operators.h"

std::string Operators::getType() { return this->type; }
std::string Operators::getValue() { return this->value; }
void Operators::setValue(std::string value) { this->value = value;}
void Operators::setType(std::string type) { this->type = type; }
std::string Operators::getOperation(){};
std::string Operators::getTerminalType() { }
void Operators::setValue(double value) { char* c; const char *cp = std::to_string(value).c_str(); strncpy(c, cp , sizeof(cp)); c[7]='\0'; ; this->value = c; }

std::string Function::getOperation() { return this->operation; }
void Function::setOperation(std::string operation) { this->operation = operation; setValue(operation); }

double Constant::getConstant() { return this->constant; }
std::string Constant::getTerminalType() { return this->terminalType; }