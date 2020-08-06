/*
* File: plus.h
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ header file is meant to accompany module3.cpp and is 
* dedicated to evaluating subexpressions with the Addition Operator.
*/

#ifndef PLUS_H
#define PLUS_H

class Plus: public SubExpression
{
public:
    Plus(Expression* left, Expression* right): 
        SubExpression(left, right)
    {
    }
    int evaluate()
    {
       return left->evaluate() + right->evaluate();
    }
};

#endif /* PLUS_H */
