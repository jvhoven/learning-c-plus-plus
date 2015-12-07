#include <iostream>
using namespace std;

int main() {

    string chart;
    unsigned int current;

    cout << "Fill in 5 integers: " << endl;

    for(unsigned int i = 1; i <= 5; i++) {
        cin >> current;

        for(unsigned int x = 1; x <= current; x++) {
            chart = chart + "*";
        }

        chart = chart + "\n";
    }

    cout << chart;
}
