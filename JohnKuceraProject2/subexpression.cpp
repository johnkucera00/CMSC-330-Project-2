/*
* File: subexpression.cpp
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ program is meant to accompany module3.cpp and is 
* dedicated to containing the member functions of the Subexpression class which
* interpret subexpressions.
*/

#include <iostream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "times.h"
#include "divide.h"
#include "conditional.h"
#include "not.h"
#include "greater.h"
#include "less.h"
#include "equals.h"
#include "and.h"
#include "or.h"

SubExpression::SubExpression(Expression* left)
{
    this->left = left;
}

SubExpression::SubExpression(Expression* left, Expression* right)
{
    this->left = left;
    this->right = right;
}

SubExpression::SubExpression(Expression* left, Expression* right, Expression* cond)
{
    this->left = left;
    this->right = right;
    this->cond = cond;
}

Expression* SubExpression::parse(stringstream& input)
{
    Expression* left;
    Expression* right;
    Expression* cond;
    char operation, paren, questionmark;
    
    left = Operand::parse(input);
    input >> operation;
    if (operation == ':') // ? Conditional
    {
        right = Operand::parse(input);
        input >> questionmark;
        cond = Operand::parse(input);
        input >> paren;
        return new Conditional(left, right, cond);
    }
    else if (operation == '!') // ! Not
    {
        input >> paren;
        return new Not(left);
    }
    else
    {
        right = Operand::parse(input);
        input >> paren;
    }

    switch (operation)
    {
        case '+':
            return new Plus(left, right);
        case '-':
            return new Minus(left, right);
        case '*':
            return new Times(left, right);
        case '/':
            return new Divide(left, right);
        case '>':
            return new Greater(left, right);
        case '<':
            return new Less(left, right);
        case '=':
            return new Equals(left, right);
        case '&':
            return new And(left, right);
        case '|':
            return new Or(left, right);
    }
    return 0;
}
