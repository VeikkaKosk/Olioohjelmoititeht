#include "car.h"

//Car konstruktori
Car::Car(string b, string m, int y) : brand(b), model(m), yearModel(y) {}

void Car::printData() const
{
    //ohjelma joka tulosataa auton tiedot
    cout<< "-----------------"<< endl;
    cout<< "|  Merkki  "<< brand<<"|"<< endl;
    cout<< "|  Malli   "<< model<< "|"<<endl;
    cout<< "|Vuosimalli "<< yearModel<<"|"<< endl;
    cout<< "-----------------"<< endl;
}
