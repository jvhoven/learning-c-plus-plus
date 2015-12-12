#include <iostream>
#include "maximum.h"
using namespace std;

int main() {
    int int1, int2, int3;

    cout << "Input three integer values: ";
    cin >> int1 >> int2 >> int3;

    cout << "The maximum integer value is: "
        << maximum(int1, int2, int3) << endl;

    double double1, double2, double3;

    cout << "Input three double values: ";
    cin >> double1 >> double2 >> double3;

    cout << "The maximum double value is: "
        << maximum(double1, double2, double3) << endl;

    char char1, char2, char3;

    cout << "Input three strings: ";
    cin >> char1 >> char2 >> char3;

    cout << "The maximum char value is: "
        << maximum(char1, char2, char3) << endl;
}
