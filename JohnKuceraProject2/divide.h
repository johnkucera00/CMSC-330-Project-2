/*
* File: divide.h
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ header file is meant to accompany module3.cpp and is 
* dedicated to evaluating subexpressions with the Division operator.
*/

#ifndef DIVIDE_H
#define DIVIDE_H

class Divide: public SubExpression
{
public:
    Divide(Expression* left, Expression* right): 
        SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() / right->evaluate();
    }
};

#endif /* DIVIDE_H */
