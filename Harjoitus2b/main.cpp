#include <iostream>
#include "car.h"
#include <vector>
using namespace std;

int main()
{
    vector<Car> carList;

    cout<<"Tassa on auto oliot"<<endl;

    //luodaan cars oliot
    Car car1("Kia","Ceed", 2017);
    Car car2("Volvo", "V70", 2020);
    Car car3("Toyota", "Corolla", 2010);

    //pusketaan auton tiedot vektoriin
    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    //tulostetaan listan Toinen auto
    carList[1].printData();
    
    //tulostetaan autojen tiedot (printData)
    for(int x = 0; x <= 2; x++){
        carList[x].printData();
    }

    return 0;
}
