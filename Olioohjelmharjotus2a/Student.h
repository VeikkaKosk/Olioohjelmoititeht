#ifndef STUDENT_H
#define STUDENT_H

#endif // STUDENT_H
#include <iostream>
using namespace std;

class Student{
private:

    string name;
    int studentNumber;
    double average;

public:
    Student();
    double getAverage() const;
    void setAverage(double newAverage);
    int getStudentNumber() const;
    void setStudentNumber(int newStudentNumber);
    string getName() const;
    void setName(const string& name);
};
