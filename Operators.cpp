//
// Created by sergio on 10/1/15.
//

#include "Operators.h"

const char* Operators::getType() { return this->type; }
const char* Operators::getValue() { return this->value; }
void Operators::setValue(const char* value) { this->value = value;}
void Operators::setType(const char* type) { this->type = type; }
TerminalType Operators::getContent(){};
const char* Operators::getOperation(){};

TerminalType Terminal::getContent() { return this->content; }
void Terminal::setContent(TerminalType content) { this->content = content; }

const char* OperatorFunction::getOperation() { return this->operation; }
void OperatorFunction::setOperation(const char* operation) { this->operation = operation; setValue(operation); }