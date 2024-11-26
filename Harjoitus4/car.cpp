#include "car.h"

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

void Car::printDetails()
{
    cout<< "Auto: "<< brand<< ", "<< model<< endl;
    cout<< "Moottori: "<< objEngine.getHorsepower()<< "hp,"<< objEngine.getDisplacement()<< "L"<< endl;
    cout<< "rengas 1 ="<< objWheel1.getSize()<< "tuumaa, "<< objWheel1.getType()<< endl;
    cout<< "rengas 2 ="<< objWheel2.getSize()<< "tuumaa, "<< objWheel2.getType()<< endl;
    cout<< "rengas 3 ="<< objWheel3.getSize()<< "tuumaa, "<< objWheel3.getType()<< endl;
    cout<< "rengas 4 ="<< objWheel4.getSize()<< "tuumaa, "<< objWheel4.getType()<< endl;
}

Car::Car()
{
    cout<< "car olio"<< endl;
}

Car::Car(string &newBrand, string &newModel)
{
    cout<< "car olio string string"<< endl;

}


void Car::setEngine()
{
    objEngine.setHorsepower(150);       //asetetaan moottorin valuet
    objEngine.setDisplacement(2.0);
}

void Car::setWheels()
{
    objWheel1.setType("kesarengas");
    objWheel1.setSize(17);

    objWheel2.setType("kesarengas");
    objWheel2.setSize(17);

    objWheel3.setType("kesarengas");
    objWheel3.setSize(17);

    objWheel4.setType("kesarengas");
    objWheel4.setSize(17);
}

