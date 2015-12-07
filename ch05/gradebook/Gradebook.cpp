#include <iostream>
#include <sstream>
#include <cstdio>
#include "Gradebook.h"

using namespace std;

Gradebook::Gradebook(string name) : aCount(0), bCount(0), cCount(0), dCount(0), fCount(0) {
    setCourseName(name);
}

void Gradebook::setCourseName(string name) {
    if(name.size() <= 25) {
        courseName = name;
    } else {
        courseName = name.substr(0, 25);
        cerr << "Name \"" << name << "\" exceeds maximum length (25).\n"
            << "Limiting courseName to first 25 characters 25 characters.\n" << endl;
    }
}

string Gradebook::getCourseName() const {
    return courseName;
}

void Gradebook::displayMessage() const {
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
        << endl;
}

void Gradebook::inputGrades() {
    int grade;

    cout << "Enter the letter grades." << endl
        << "Enter the EOF character to end input." << endl;

    // CTRL + D to send EOF
    while((grade = cin.get()) != EOF) {

        switch(grade) {
            case 'A':
            case 'a':
                ++aCount;
                break;

            case 'B':
            case 'b':
                ++bCount;
                break;

            case 'C':
            case 'c':
                ++cCount;
                break;

            case 'D':
            case 'd':
                ++dCount;
                break;

            case 'F':
            case 'f':
                ++fCount;
                break;

            case '\n':
            case '\t':
            case ' ':
                break;

            default:
                cout << "Incorrect letter grade entered."
                    << "Enter a new grade." << endl;
                break;
        }
    }
}

void Gradebook::displayGradeReport() const {
    cout << "\n\nNumber of students who received letter grades:"
        << "\nA: " << aCount
        << "\nB: " << bCount
        << "\nC: " << cCount
        << "\nD: " << dCount
        << "\nF: " << fCount
        << endl;
}
