/*
* File: and.h
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ header file is meant to accompany module3.cpp and is 
* dedicated to evaluating subexpressions with the And operator.
*/

#ifndef AND_H
#define AND_H

class And: public SubExpression
{
public:
    And(Expression* left, Expression* right): 
        SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() && right->evaluate();
    }
};

#endif /* AND_H */
