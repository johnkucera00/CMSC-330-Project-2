/*
* File: minus.h
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ header file is meant to accompany module3.cpp and is 
* dedicated to evaluating subexpressions with the Subtraction Operator.
*/

#ifndef MINUS_H
#define MINUS_H

class Minus: public SubExpression
{
public:
    Minus(Expression* left, Expression* right): 
        SubExpression(left, right)
    {
    }
    int evaluate()
    {
       return left->evaluate() - right->evaluate();
    }
};

#endif /* MINUS_H */
