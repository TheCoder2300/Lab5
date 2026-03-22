/*
 * Ian Glattli
 * CPSC 1070 Lab section 003
 * 02/23/2026
 * Lab 3C -- 3E Ctrl,Alt,Elite
 * Description: A list making program, gives the user the option
 * to take import a list, add people to a list, and print
 * a list all in alphabetical order
*/
#ifndef DEFS_H
#define DEFS_H
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

enum year {
    Freshman,
    Sophomore,
    Junior,
    Senior
};


const unsigned int width = 20;


void printroll(const vector<string>, 
                     vector<string>, 
                     vector<year>, 
                     vector<string>);

#endif