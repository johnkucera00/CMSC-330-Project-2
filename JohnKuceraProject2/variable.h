/*
* File: variable.h
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ header file is meant to accompany module3.cpp and is 
* dedicated to defining leaf nodes fo the tree that contain variables.
*/

#ifndef VARIABLE_H
#define VARIABLE_H

class Variable: public Operand
{
public:
    Variable(string name)
    {
        this->name = name;
    }
    int evaluate();
private:
    string name;
};

#endif /* VARIABLE_H */
