#include "classb.h"

string ClassB::getInfo() const
{
    return info;
}

void ClassB::setInfo(const string &newInfo)
{
    info = newInfo;
}

ClassB::ClassB() {
    cout << "ClassB" << endl;
}
