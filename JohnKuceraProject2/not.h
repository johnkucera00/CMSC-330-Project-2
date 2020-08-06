/*
* File: not.h
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ header file is meant to accompany module3.cpp and is 
* dedicated to evaluating subexpressions with the Negation operator.
*/

#ifndef NOT_H
#define NOT_H

class Not: public SubExpression
{
public:
    Not(Expression* left): 
        SubExpression(left)
    {
    }
    int evaluate()
    {
        return !left->evaluate();
    }
};

#endif /* NOT_H */
