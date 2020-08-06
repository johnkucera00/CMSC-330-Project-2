/*
* File: conditional.h
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ header file is meant to accompany module3.cpp and is 
* dedicated to evaluating subexpressions with the Conditional operator.
*/

#ifndef CONDITIONAL_H
#define CONDITIONAL_H

class Conditional: public SubExpression
{
public:
    Conditional(Expression* left, Expression* right, Expression* cond): 
        SubExpression(left, right, cond)
    {
    }
    int evaluate()
    {
        if (cond->evaluate()) 
        {
            return left->evaluate();
        }
        return right->evaluate();
    }
};

#endif /* CONDITIONAL_H */
