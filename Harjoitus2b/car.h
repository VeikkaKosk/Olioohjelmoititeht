#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;
class Car {

private:

    string brand;
    string model;
    int yearModel;

public:

    Car(string b, string m, int y);     //car muuttujat
    void printData() const;             //datan printtaus functio

};

#endif // CAR_H
