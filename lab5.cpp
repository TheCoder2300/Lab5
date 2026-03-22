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

int main() {
    vector<string> names;
    vector<string> majors;
    vector<year> years;
    vector<string> ids;
    int choice = 0;
    while (choice != 3){
        cout << "1. Add new student" << endl;
        cout << "2. Print class roll" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        if (choice == 1){
            string inputName, inputMajor, inputID;
            int inputYear;

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


            names.push_back(inputName);
            majors.push_back(inputMajor);
            years.push_back(static_cast<year>(inputYear - 1));
            ids.push_back(inputID);


        } else if (choice == 2){
            printroll(names, majors, years, ids);
        } else if (choice == 3){

        } else {
        cout << "Invalid input! Please try again." << endl;
        }
    }

    return 0;
}
