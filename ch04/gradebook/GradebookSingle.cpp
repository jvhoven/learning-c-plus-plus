#include <iostream>
using namespace std;

int main() {
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int studentCounter = 1;

    while(studentCounter <= 10) {
        cout << "Enter result (1 = pass, 2 = fail): ";
        int result = 0;
        cin >> result;

        if(result == 1) {
            passes = passes + 1;
        } else {
            failures = failures + 1;
        }

        studentCounter = studentCounter + 1;
    }

    cout << "Passed " << passes << "\nFailed " << failures << endl;

    if(passes > 8) {
        cout << "Bonus to instructor!" << endl;
    }
}
