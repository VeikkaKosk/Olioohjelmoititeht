#include "car.h"
#include <iostream>

Car::Car()
{
    cout<<"car olio luotiin"<<endl;
}

void Car::printData() const
{
    cout << "Merkki "<<getBrand()<<" malli "<<getModel()<<" Vuosi "<<getYearModel()<<endl;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}
