#include <iostream>
#include <iomanip>
#include "Gradebook.h"

using namespace std;

Gradebook::Gradebook(string name) {
    setCourseName(name);
}

void Gradebook::setCourseName(string name) {
    if(name.size() <= 25)
        m_courseName = name;
    else {
        m_courseName = name.substr(0, 25);
        cerr << "Name \"" << name << "\" exceeds maximum length(25).\n"
            << "Limiting courseName to first 25 characters.\n" << endl;
    }
}

string Gradebook::getCourseName() const {
    return m_courseName;
}

void Gradebook::displayMessage() const {
    cout << "Welcome to the grade book for \n" << getCourseName() << "!\n" << endl;
}

void Gradebook::determineClassAverage() const {
    int total = 0;
    unsigned int gradeCounter = 1;

    cout << "Enter grade or -1 to quit: ";
    int grade = 0;
    cin >> grade;

    while(grade != -1) {
        total = total + grade;
        gradeCounter = gradeCounter + 1;

        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }

    if(gradeCounter != 0) {
        double average = static_cast<double>(total) / gradeCounter;

        cout << "\nTotal of all grades entered is " << total << endl;
        cout << setprecision(2) << fixed;
        cout << "Class average is " << average << endl;
    } else {
        cout << "No grades where entered!" << endl;
    }
}
