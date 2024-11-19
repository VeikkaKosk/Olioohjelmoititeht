#include "animal.h"
#include <iostream>

using namespace std;

Animal::Animal() {
    cout<< "Animal construcktor "<< endl;
}

Animal::~Animal()
{
    cout<< "Animal destrucktor "<< endl;
}

void Animal::callOut()
{
    cout<< "Elain aantelee "<< endl;
}
