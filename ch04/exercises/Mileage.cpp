#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int miles = 0;
    int gallons = 0;
    double mpg = 0.00;

    while(miles != -1) {
        cout << "Enter miles driven (-1 to quit): " << endl;
        cin >> miles;

        cout << "Enter gallons used: " << endl;
        cin >> gallons;

        mpg = static_cast<double>(miles / gallons);
        cout << setprecision(6) << fixed;
        cout << mpg << endl;
    }



}
