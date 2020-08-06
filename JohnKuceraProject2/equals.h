/*
* File: equals.h
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ header file is meant to accompany module3.cpp and is 
* dedicated to evaluating subexpressions with the Equality operator.
*/

#ifndef EQUALS_H
#define EQUALS_H

class Equals: public SubExpression
{
public:
    Equals(Expression* left, Expression* right): 
        SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() == right->evaluate();
    }
};

#endif /* EQUALS_H */
