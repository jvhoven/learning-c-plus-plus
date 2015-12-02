#include <iostream>
#include <string>

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

    while(gradeCounter <= 10) {
        cout << "Enter grade: ";
        int grade = 0;
        cin >> grade;
        total = total + grade;
        gradeCounter = gradeCounter + 1;
    }

    int average = total / 10;

    cout << "\nTotal of all 10 grades is " << total << endl;
    cout << "Class average is " << average << endl;
}
