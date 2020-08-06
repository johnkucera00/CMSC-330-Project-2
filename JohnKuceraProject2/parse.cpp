/*
* File: parse.cpp
* Author: John Kucera
* Date: May 6, 2020
* Purpose: This C++ program is meant to accompany module3.cpp and is 
* dedicated to holding the member function of parseName().
*/

#include <cctype>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "parse.h"

string parseName(stringstream& input)
{
    char alnum;
    string name = "";

    input >> ws;
    while (isalnum(input.peek()))
    {
        input >> alnum;
        name += alnum;
    }
    return name;
}
