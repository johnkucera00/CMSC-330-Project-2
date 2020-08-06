/*
* File: expression.h
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ header file is meant to accompany module3.cpp and is
* dedicated to being the root of the inheritance hierarchy and controlling 
* evaluate() with the virtual keyword.
*/

#ifndef EXPRESSION_H
#define EXPRESSION_H

class Expression
{
public: 
    virtual int evaluate() = 0;
};

#endif /* EXPRESSION_H */
