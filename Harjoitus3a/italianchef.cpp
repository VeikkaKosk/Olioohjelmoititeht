#include "italianchef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(string nName): Chef(nName) {
    cout<< name<< "Italian chef construcktor "<< endl;
}

ItalianChef::~ItalianChef()
{
    cout<< name<< "Italian chef Destructor "<< endl;
}

void ItalianChef::makePasta()
{
    cout<< "is making pasta "<< endl;
}

string ItalianChef::getName()
{
    return name;
}
