#include <string>

#ifndef GRADEBOOK_H
#define GRADEBOOK_H

class Gradebook {
public:
    explicit Gradebook(std::string);
    void setCourseName(std::string);
    std::string getCourseName() const;
    void displayMessage() const;
    void inputGrades();
    void displayGradeReport() const;

private:
    std::string courseName;
    unsigned int aCount;
    unsigned int bCount;
    unsigned int cCount;
    unsigned int dCount;
    unsigned int fCount;
};

#endif
