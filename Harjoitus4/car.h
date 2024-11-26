#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
#include <iostream>

using namespace std;

class Car
{
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;
    string brand;

public:
    Car();
    Car(string &newBrand, string &newModel);

    void setEngine();
    void setWheels();

    string getBrand() const;
    void setBrand(const string &newBrand);

    string getModel() const;
    void setModel(const string &newModel);

    void printDetails();
};

#endif // CAR_H
