/*
* File: operand.h
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ header file is meant to accompany module3.cpp and is 
* dedicated to defining leaf nodes of the arithmetic expression tree. It
* contains the parse() method.
*/

#ifndef OPERAND_H
#define OPERAND_H

class Operand: public Expression
{
public:
    static Expression* parse(stringstream& input);
};

#endif /* OPERAND_H */
