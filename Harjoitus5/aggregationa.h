#ifndef AGGREGATIONA_H
#define AGGREGATIONA_H
#include "classb.h"

#include <iostream>

using namespace std;

class AggregationA
{
private:
    ClassB &refB;
public:
    AggregationA(ClassB& b);
    string getBinfo();
    void setBinfo(string);
};

#endif // AGGREGATIONA_H
