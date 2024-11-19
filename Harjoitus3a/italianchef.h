#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
using namespace std;
#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string nName);
    ~ItalianChef();
    void makePasta();
    string getName();
};

#endif // ITALIANCHEF_H
