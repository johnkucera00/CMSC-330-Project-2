/*
* File: module3.cpp
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ program is meant to read in arithmetic expressions from a
* file and encode them as binary trees. After the expressions are read in, the
* variable assignments are read in and the variables and their values of the
* variables are placed into the symbol table. Finally, the expressions are
* evaluated recursively. module3.cpp is dedicated to reading in the input file,
* calling on included methods to evaluate the expressions, and printing out
* the resultant values in the console.
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "symboltable.h"
#include "parse.h"

SymbolTable symbolTable;

void parseAssignments(stringstream& input);
const int MAX_LENGTH = 100;

int main()
{
    Expression* expression;
    char paren, comma, line[MAX_LENGTH];
    ifstream filein("Tests.txt");
    while (true)
    {
        filein.getline(line, MAX_LENGTH);
        if (!filein)
        {
            break;
        }
        stringstream input(line, ios_base::in);
        input >> paren;
        cout << line << endl;
        expression = SubExpression::parse(input);
        input >> comma;
        parseAssignments(input);
        cout << "\tValue = " << expression->evaluate() << endl;
        symbolTable.clearTable();
    }
    return 0;
}

void parseAssignments(stringstream& input)
{
    char assignop, delimiter;
    string variable;
    int value;
    do
    {
        variable = parseName(input);
        input >> ws >> assignop >> value >> delimiter;
        symbolTable.insert(variable, value);
    }
    while (delimiter == ',');
}
