#include "Student.h"
#include <iostream>



int Student::getStudentNumber() const
{
    return studentNumber;
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

string Student::getName() const
{
    return name;
}

void Student::setName(const string& name)
{
    this->name = name;
}

Student::Student()
{
    cout<<"olio luotu"<<endl;
}

double Student::getAverage() const
{
    return average;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}
