//
// Created by jeffrey on 2-12-15.
//
#include <iostream>
#include "Heartrate.h"
#include "Date.h"

#ifndef __HEALTHPROFILE_INCLUDED__ 
#define __HEALTHPROFILE_INCLUDED__

class HealthProfile {
    Heartrate *m_heartrate;
    std::string m_firstName;
    std::string m_lastName;
    Date m_birthDate;
    int m_weight;
    int m_height;

public:
    HealthProfile(std::string firstName, std::string lastName, Date birthDate, int weight, int height)
            : m_firstName(firstName), m_lastName(lastName), m_birthDate(birthDate), m_weight(weight), m_height(height) {
        m_heartrate = new Heartrate(m_birthDate.getYear());
    }

    void getHeartRate() {
        m_heartrate->print();
    }

    void print() {
        std::cout << "\n" << m_firstName << " " << m_lastName << " born on "
        << m_birthDate.getDay() << "-" << m_birthDate.getMonth() << "-" << m_birthDate.getYear()
        << " and is " << m_heartrate->getAge() << " years old." << std::endl;

        m_heartrate->print();
        delete m_heartrate;
    }
};

#endif

