#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int current;
    int previous;
    int highest;

    while((cin >> current) && current != EOF) {
        if(!previous) {
            previous = current;
            highest = current;
        }

        highest = current > previous ? current : previous;
        previous = current;
    }

    cout << "Highest integer: " << highest << endl;
}
