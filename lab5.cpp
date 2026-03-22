/*
 * Ian Glattli
 * CPSC 1070 Lab section 003
 * 03/23/2026
 * Lab 5C -- 3E Ctrl,Alt,Elite
 * Description: A program that takes in multiple students name, major,
 * school year, and CUID. Then prints info into formatted list
*/
#include "defs.h"

int main() {
    //Vector/Variable Initialization
    vector<string> names;
    vector<string> majors;
    vector<year> years;
    vector<string> ids;
    int choice = 0;

    //Loop to keep program running
    while (choice != 3){
        //Interaction menu with choice input
        cout << "1. Add new student" << endl;
        cout << "2. Print class roll" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        //Choice 1
        if (choice == 1){
            //Temp variable initialization
            string inputName, inputMajor, inputID;
            int inputYear;


            //Information input interaction using getline
            cout << "Adding new student:" << endl;
            cin.ignore();
            cout << "- Enter student name: ";
            getline(cin, inputName);
            cout << "- Enter student major: ";
            getline(cin, inputMajor);
            cout << "- Enter year (1 for freshman, 2 for sophomore, etc): ";
            cin >> inputYear;
            cout << "- Enter CUID: ";
            cin >> inputID;
            cout << endl;

            //Input info pushback logic with year adjustment
            names.push_back(inputName);
            majors.push_back(inputMajor);
            years.push_back(static_cast<year>(inputYear - 1));
            ids.push_back(inputID);

        //Choice 2
        } else if (choice == 2){
            //PrintRoll function call
            printRoll(names, majors, years, ids);
        //Choice 3 (quit)
        } else if (choice == 3){

        } else {
        //Invalid input responce
        cout << "Invalid input! Please try again." << endl;
        }
    }

    return 0;
}
