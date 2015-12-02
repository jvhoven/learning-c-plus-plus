#include <string>

#ifndef GRADEBOOK_H
#define GRADEBOOK_H

class Gradebook {
    std::string m_courseName;

public:
    Gradebook(std::string name);
    std::string getCourseName() const;
    void setCourseName(std::string courseName);
    void displayMessage() const;
    void determineClassAverage() const;
};

#endif
