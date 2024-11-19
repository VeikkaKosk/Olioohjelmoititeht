#include "dog.h"

Dog::Dog() {
    cout<< "Dog construcktor "<< endl;
}

Dog::~Dog()
{
    cout<< "Dog destrucktor "<< endl;
}

void Dog::callOut()
{
    cout<< "Koira haukkuu!! "<< endl;
}
