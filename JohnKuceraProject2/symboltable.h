/*
* File: symboltable.h
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ header file is meant to accompany module3.cpp and is 
* dedicated to define the symbol table, an unsorted listed, used for storing
* variables and values of the variables from the expressions read in.
*/

#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

class SymbolTable
{
public:
    SymbolTable() {}
    void insert(string variable, int value);
    int lookUp(string variable) const;
    
    void clearTable() 
    {
        elements.clear();
    }
private:
    struct Symbol
    {
        Symbol(string variable, int value)
        {
            this->variable = variable;
            this->value = value;
        }
        string variable;
        int value;
    };
    vector<Symbol> elements;
};

#endif /* SYMBOLTABLE_H */
