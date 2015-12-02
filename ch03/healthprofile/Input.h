//
// Created by jeffrey on 2-12-15.
//
#include <iostream>
#include <string>
#include <vector>
#include "Date.h"

#ifndef __INPUT_INCLUDED__
#define __INPUT_INCLUDED__

class Input {
public:
    /*
    * Prompt the user to fill in his birthday
    * with format DD-MM-YY
    */
    static Date getBirthDate() {
        int day = 0;
        int month = 0;
        int year = 0;

        std::cout << "Fill in your birthdate' day, month and year: ";
        std::cin >> day >> month >> year;

        Date date;
        date.day(day).month(month).year(year);

        return date;
    }

    /*
     * Prompt the user to fill in his first and last -name
     *
     * @return std::vector<std::string> First and last -name
     */
    static std::vector<std::string> getName() {
        std::vector<std::string> names(2);

        std::cout << "Fill in your firstname: " << std::endl;
        std::getline(std::cin, names[0]);
        std::cout << "Fill in your lastname: " << std::endl;
        std::getline(std::cin, names[1]);

        return names;
    }

    static int getWeight() {
        int weight;

        std::cout << "Fill in your weight: " << std::endl;
        std::cin >> weight;

        return weight;
    }

    static int getHeight() {
        int height;

        std::cout << "Fill in your height: " << std::endl;
        std::cin >> height;

        return height;
    }
};

#endif
