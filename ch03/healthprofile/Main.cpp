#include <iostream>
#include "HealthProfile.h"
#include "Input.h"

int main() {
	std::vector<std::string> names = Input::getName();
    Date date = Input::getBirthDate();
    int weight = Input::getWeight();
    int height = Input::getHeight();

    HealthProfile *healthProfile1 = new HealthProfile(names.at(0), names.at(1), date, weight, height);
    healthProfile1->print();
}
