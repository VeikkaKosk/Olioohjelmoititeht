#include <iostream>
#include "car.h"
using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Volvo");
    objCar.setModel("V70");

   // Tämä oli testinä minulle cout<< "Auto "<< objCar.getBrand()<< " "<< objCar.getModel()<< endl;

    objCar.setEngine();
    objCar.setWheels();
    objCar.printDetails();

    return 0;
}
