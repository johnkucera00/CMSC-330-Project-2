/*
* File: times.h
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ header file is meant to accompany module3.cpp and is 
* dedicated to evaluating subexpressions with the Multiplication operator.
*/

#ifndef TIMES_H
#define TIMES_H

class Times: public SubExpression
{
public:
    Times(Expression* left, Expression* right): 
        SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() * right->evaluate();
    }
};

#endif /* TIMES_H */
