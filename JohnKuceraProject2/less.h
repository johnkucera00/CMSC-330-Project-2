/*
* File: less.h
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ header file is meant to accompany module3.cpp and is 
* dedicated to evaluating subexpressions with the Less Than operator.
*/

#ifndef LESS_H
#define LESS_H

class Less: public SubExpression
{
public:
    Less(Expression* left, Expression* right): 
        SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() < right->evaluate();
    }
};

#endif /* LESS_H */
