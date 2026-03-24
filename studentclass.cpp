#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    string major;
    int year;
    int id;

public:

    Student(string n, string m, int y, int i) {
        name = n;
        major = m;
        year = y;
        id = i;
    }
    

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Major: " << major << endl;
        cout << "Year: " << year << endl;
    }
};

