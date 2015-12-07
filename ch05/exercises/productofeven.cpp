#include <iostream>

using namespace std;

int main() {
    for(unsigned int i = 0; i < 15; ++i) {
        if(i % 2 == 0) {
            cout << i * 2 << endl;
        }
    }
}
