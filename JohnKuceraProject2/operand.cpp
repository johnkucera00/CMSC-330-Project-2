/*
* File: operand.cpp
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ program is meant to accompany module3.cpp and is 
* dedicated to holding the member function, parse(), of the Operand class.
*/

#include <cctype>
#include <iostream>
#include <list>
#include <string>
#include <sstream>

using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "variable.h"
#include "literal.h"
#include "parse.h"

Expression* Operand::parse(stringstream& input)
{
    char paren;
    int value;

    input >> ws;
    if (isdigit(input.peek()))
    {
        input >> value;
        Expression* literal = new Literal(value);
        return literal;
    }
    if (input.peek() == '(')
    {
        input >> paren;
        return SubExpression::parse(input);
    }
    else
        return new Variable(parseName(input));
    return 0;
}
