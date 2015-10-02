//
// Created by sergio on 10/1/15.
//

#include "Operators.h"

const char * Operators::getType() { return this->type; }
char* Operators::getValue() { return this->value; }
void Operators::setType(const char * type) { this->type = type; }

TerminalType Terminal::getContent() { return this->content; }

char* OperatorFunction::getOperation() { return this->operation; }
void OperatorFunction::setOperation(char * operation) { this->operation = operation; }