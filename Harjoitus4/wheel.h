#ifndef WHEEL_H
#define WHEEL_H
#include <iostream>

using namespace std;

class Wheel
{
private:
    int size;
    string type;
public:
    Wheel();
    Wheel(int s, string t);

    string getType() const;
    void setType(const string &t);

    int getSize() const;
    void setSize(int s);
};

#endif // WHEEL_H
