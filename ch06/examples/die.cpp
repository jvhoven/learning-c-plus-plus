#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
    unsigned int seed = 0;

    cout << "Enter seed: ";
    cin >> seed;
    srand(seed);

    for(unsigned int counter = 1; counter <= 10; ++counter) {
        cout << setw(10) << (1 + rand() % 6);

        if(counter % 5 == 0) {
            cout << endl;
        }
    }
}
