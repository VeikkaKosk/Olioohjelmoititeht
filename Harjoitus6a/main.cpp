#include "myclass.h"
#include <QCoreApplication>
#include <iostream>

using namespace std;

int main()
{
    MyClass objMyclass;

    objMyclass.raiseMySignal();

    cout << "END" << endl;
    return 0;
}
