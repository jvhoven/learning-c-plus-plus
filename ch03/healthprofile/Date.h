#include <iostream>
#include <string>

#ifndef __DATE_INCLUDED__
#define __DATE_INCLUDED__

class Date {
public:
    Date &day(int const day) {
        this->m_day = day;
        return *this;
    }

    Date &month(int const month) {
        if(month > 12 && month < 1) {
            std::cout << "Invalid input given for setting month()" << "\n" << month
            << "Should be between 1 and 12" << std::endl;
        } else {
            this->m_month = month;
        }
        return *this;
    }

    Date &year(int const year) {
        this->m_year = year;
        return *this;
    }

    int getYear() const {
        return m_year;
    }

    int getDay() const {
        return m_day;
    }

    int getMonth() const {
        return m_month;
    }

    void displayDate() {
        std::cout << m_day << "/" << m_month << "/" << m_year << std::endl;
    }

private:
    int m_day;
    int m_month;
    int m_year;
};

#endif
