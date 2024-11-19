#include "animal.h"
#include "dog.h"
#include <iostream>

using namespace std;

int main()
{
    Animal animal;
    Dog dog;
    animal.callOut();
    dog.callOut();

    return 0;
}
