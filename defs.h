/*
 * Ian Glattli
 * CPSC 1070 Lab section 003
 * 03/23/2026
 * Lab 5C -- 3E Ctrl,Alt,Elite
 * Description: A program that takes in multiple students name, major,
 * school year, and CUID. Then prints info into formatted list
*/
#ifndef DEFS_H
#define DEFS_H

//Needed modules import
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

//Enumeration based on school years
//Takes 1,2,3,4 input and assigns to object
enum year {
    Freshman,
    Sophomore,
    Junior,
    Senior
};

//Constant column width for formatting output
const unsigned int width = 20;

//PrintRoll prototype with vectors
void printRoll(const vector<string>, 
                     vector<string>, 
                     vector<year>, 
                     vector<string>);

#endif