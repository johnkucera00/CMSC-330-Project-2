/*
* File: literal.h
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ header file is meant to accompany module3.cpp and is 
* dedicated to defining leaf nodes of the tree, specifically numbers [0-9]+.
*/

#ifndef LITERAL_H
#define LITERAL_H

class Literal: public Operand
{
public:
    Literal(int value)
    {
        this->value = value;
    }
    int evaluate()
    {
        return value;
    }
private:
    int value;
};

#endif /* LITERAL_H */
