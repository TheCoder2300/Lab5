/*
 * Ian Glattli
 * CPSC 1070 Lab section 003
 * 02/23/2026
 * Lab 3C -- 3E Ctrl,Alt,Elite
 * Description: A list making program, gives the user the option
 * to take import a list, add people to a list, and print
 * a list all in alphabetical order
*/
#include "defs.h"

void printroll(const vector<string> names,
               const vector<string> majors,
               const vector<year> years,
               const vector<string> ids) {


    if (names.empty()){
        cout << "Class Roll is empty" << endl;
        return;
    }

    cout<<"Class Roll:" << endl;

    for (int i = 0; i < names.size(); i++) {
        string currentyear;

        if (years[i] == Freshman) currentyear = "Freshman";
        else if (years[i] == Sophomore) currentyear = "Sophomore";
        else if (years[i] == Junior) currentyear = "Junior";
        else if (years[i] == Senior) currentyear = "Senior";


        cout << left << setw(width) << names[i]
             << setw(width) << majors[i]
             << setw(width) << currentyear
             << setw(width) << ids[i] << endl;
    }
    cout << endl;
}
