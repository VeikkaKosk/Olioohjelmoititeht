#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;
class Student
{
private:
    string fname;
    string lname;
    string email;
public:
    Student(string,string,string);
    string getFname() const;
    void setFname(const string &newFname);
    string getLname() const;
    void setLname(const string &newLname);
    string getEmail() const;
    void setEmail(const string &newEmail);
};

#endif // STUDENT_H
