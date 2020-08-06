/*
* File: or.h
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ header file is meant to accompany module3.cpp and is 
* dedicated to evaluating subexpressions with the Or operator.
*/

#ifndef OR_H
#define OR_H

class Or: public SubExpression
{
public:
    Or(Expression* left, Expression* right): 
        SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() || right->evaluate();
    }
};

#endif /* OR_H */
