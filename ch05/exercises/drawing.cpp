#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void a() {
    for(unsigned int i = 1; i <= 10; i++) {
        for(unsigned int y = 1; y <= i; y++) {
            cout << "*";
        }
        cout << "\n";
    }
}

void b() {
    for(unsigned int i = 10; i > 0; i--) {
        for(unsigned int y = 1; y <= i; y++) {
            cout << "*";
        }
        cout << "\n";
    }
}

void c() {
    for(unsigned int i = 10; i > 0; i--) {
        unsigned int difference = 10 - i;
        string row;

        for(unsigned int x = 1; x <= difference; x++) {
            row = row + " ";
        }

        for(unsigned int y = 1; y <= i; y++) {
            row = row + "*";
        }

        cout << row << endl;
    }
}

void d() {
    for(unsigned int i = 1; i <= 10; i++) {
        unsigned int difference = 10 - i;
        string row;

        // Add blank spacing
        for(unsigned int x = 1; x <= difference; x++) {
            row = row + " ";
        }

        // Add asteriks
        for(unsigned int y = 1; y <= i; y++) {
            row = row + "*";
        }

        cout << row << endl;
    }
}

string diamond(unsigned int size) {

    string diamond;
    unsigned int max = size - size % 2;

    // Top side
    for(unsigned int i = 1; i <= max; i++) {
        if(i % 2 == 0) {
            unsigned int difference = i > max ? 0 : max - i;
            double spacing = difference == 0 ? 0 : ceil((double)difference / 2) + 1;

            // Spacing left
            for(unsigned int y = 1; y < static_cast<unsigned int>(spacing); y++) {
                diamond = diamond + " ";
            }

            for(unsigned int x = 1; x < i; x++) {
                diamond = diamond + "*";
            }

            // Spacing right
            for(unsigned int z = 1; z < static_cast<unsigned int>(spacing); z++) {
                diamond = diamond + " ";
            }

            diamond = diamond + "\n";
        }
    }

    // Bottom side
    for(unsigned int i = max; i > 0; i--) {
        if(i % 2 == 0) {
            unsigned int difference = i > max ? 0 : max - i;
            double spacing = difference == 0 ? 0 : ceil((double)difference / 2) + 1;

            // Spacing left
            for(unsigned int y = 1; y < static_cast<unsigned int>(spacing); y++) {
                diamond = diamond + " ";
            }

            for(unsigned int x = 1; x < i; x++) {
                diamond = diamond + "*";
            }

            // Spacing right
            for(unsigned int z = 1; z < static_cast<unsigned int>(spacing); z++) {
                diamond = diamond + " ";
            }

            diamond = diamond + "\n";
        }
    }

    return diamond;
}


int main() {
    // draw a
    //a();

    // draw b
    //b();

    // draw c
    //c();

    // draw d
    //d();

    cout << diamond(46);
}
