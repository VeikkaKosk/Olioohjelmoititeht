#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef
{
protected:
    string name;    //chef name
public:
    Chef(string chefName);
    ~Chef();
    void makeSalad();
    void makeSoup();
};

#endif // CHEF_H
