/*
* File: greater.h
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ header file is meant to accompany module3.cpp and is 
* dedicated to evaluating subexpressions with the Greater Than operator.
*/

#ifndef GREATER_H
#define GREATER_H

class Greater: public SubExpression
{
public:
    Greater(Expression* left, Expression* right): 
        SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() > right->evaluate();
    }
};

#endif /* GREATER_H */
