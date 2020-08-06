/*
* File: subexpression.h
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ header file is meant to accompany module3.cpp and is 
* dedicated to defining the node of the binary arithmetic expression tree.
*/

#ifndef SUBEXPRESSION_H
#define SUBEXPRESSION_H

class SubExpression: public Expression
{
public:
    SubExpression(Expression* left);
    SubExpression(Expression* left, Expression* right);
    SubExpression(Expression* left, Expression* right, Expression* cond);
    static Expression* parse(stringstream& input);
protected: 
    Expression* left;
    Expression* right;
    Expression* cond;
};    

#endif /* SUBEXPRESSION_H */
