#include "aggregationa.h"

AggregationA::AggregationA(ClassB &b):refB(b)
{
}

string AggregationA::getBinfo()
{
    return refB.getInfo();
}

void AggregationA::setBinfo(string value)
{
    refB.setInfo(value);
}
