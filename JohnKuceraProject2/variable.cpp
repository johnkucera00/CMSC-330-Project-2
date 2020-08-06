/*
* File: variable.cpp
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ program is meant to accompany module3.cpp and is 
* dedicated to holding the member function evaluate() of class Variable.
*/

#include <strstream>
#include <vector>
using namespace std;

#include "expression.h"
#include "operand.h"
#include "variable.h"
#include "symboltable.h"

extern SymbolTable symbolTable;

int Variable::evaluate()
{
    return symbolTable.lookUp(name);
}
