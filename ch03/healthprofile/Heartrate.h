#include <string>
#include <iostream>

#ifndef __HEARTRATE_INCLUDED__ 
#define __HEARTRATE_INCLUDED__

class Heartrate {
    int m_year;

public:
    Heartrate(int year) : m_year(year) {
    }

    int getAge() const {
        return 2015 - m_year;
    }

    int getMaximumHeartRate() {
        return 220 - getAge();
    }

    int getTargetHeartRate() {
        return getMaximumHeartRate() * 0.85;
    }

    void print() {
        std::cout << "\nYour maximum heartrate is " << getMaximumHeartRate()
            << " and your target heartrate is " << getTargetHeartRate() << std::endl;
    }
};

#endif