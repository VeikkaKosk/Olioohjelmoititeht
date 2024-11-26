#include "wheel.h"

string Wheel::getType() const
{
    return type;
}

void Wheel::setType(const string &t)
{
    type = t;
}

int Wheel::getSize() const
{
    return size;
}

void Wheel::setSize(int s)
{
    size = s;
}

Wheel::Wheel() {
    cout<< "Wheel olio"<< endl;
}

Wheel::Wheel(int, string)
{
    cout<< "Wheel olio int string"<< endl;

}
