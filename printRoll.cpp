/*
 * Ian Glattli
 * CPSC 1070 Lab section 003
 * 03/23/2026
 * Lab 5C -- 3E Ctrl,Alt,Elite
 * Description: A program that takes in multiple students name, major,
 * school year, and CUID. Then prints info into formatted list
*/
#include "defs.h"

//Printroll function intake vector formats
void printRoll(const vector<string> names,
               const vector<string> majors,
               const vector<year> years,
               const vector<string> ids) {

    //Checks if name vector is empty using bool
    if (names.empty()){
        cout << "Class Roll is empty." << endl;
        return;
    }

    //Begins printing roll
    cout<<"Class Roll:" << endl;

    //For loop to keep names printing, size_t used to keep number positive
    for (size_t i = 0; i < names.size(); i++) {

        //String assignment using vector data
        string currentyear;
        if (years[i] == Freshman) currentyear = "Freshman";
        else if (years[i] == Sophomore) currentyear = "Sophomore";
        else if (years[i] == Junior) currentyear = "Junior";
        else if (years[i] == Senior) currentyear = "Senior";

        //Information printing using width adjustment
        cout << left << setw(width) << names[i]
             << setw(width) << majors[i]
             << setw(width) << currentyear
             << setw(width) << ids[i] << endl;
    }
    //Newline
    cout << endl;
}
