#include "car.h"
#include <iostream>
#include "Rectangle.h"
#include "Student.h"
#include <memory>
using namespace std;

int main() {
    //car olio
    Car objCar;

    objCar.setBrand("Kia");
    objCar.setModel("Ceed");
    objCar.setYearModel(2020);

    //Car objCar2=Car("volvo","farmari",2005);
    objCar.printData();

    //Rectangle olio

    Rectangle objRectangle;
    Rectangle rectang(6.0, 4.0);

    cout <<"---------------------------------------"<<endl;
    cout<< " pinta-ala "<< rectang.getArea()<<endl;
    cout<< "ja ymparysmitta "<< rectang.getCircum()<<endl;

    //uudet lukemat
    rectang.setWidth(7.5);
    rectang.setHeight(8.0);

    cout <<"---------------------------------------"<<endl;
    cout<< "uusi pinta-ala "<< rectang.getArea()<<endl;
    cout<< "ja uusi ymparysmitta "<< rectang.getCircum()<<endl;

    // //kokeilen erityyliä mitä tapahtuu?
    // objRectangle.setWidth(7.5);
    // objRectangle.setHeight(8.0);

    // //uudet lukemat
    // cout<< "uusi pinta-ala "<< objRectangle.getArea()<<endl;
    // cout<< "ja uusi ymparysmitta "<< objRectangle.getCircum()<<endl;



    //luodaan Smart poiter
    unique_ptr<Student> student = make_unique<Student>();

    student->setName("Matti Meikäkäinen");
    student->setStudentNumber(15934);
    student->setAverage(9.5);


    cout <<"---------------------------------------"<<endl;
    cout<< "Opiskelijan nimi: "<<student->getName()<<endl;
    cout<< "Opiskelijan id: "<<student->getStudentNumber()<<endl;
    cout<< "Opiskelijan keskiarvo: "<<student->getAverage()<<endl;

    student->setName("Juuso Leskinen");
    student->setStudentNumber(54321);
    student->setAverage(9.2);
    cout <<"---------------------------------------"<<endl;
    cout << " Paivitetty nimi " << student->getName() <<endl;
    cout << " Paivitetty id " << student->getStudentNumber() <<endl;
    cout << " Paivitetty keskiarvo " << student->getAverage() <<endl;

    return 0;
}
