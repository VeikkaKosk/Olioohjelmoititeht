#include "chef.h"
#include <iostream>
using namespace std;

Chef::Chef(string chefName):name(chefName) {
    cout<< name<< "chef construktor "<< endl;
}

Chef::~Chef()
{
    cout<< name<< "chef destrucktor "<< endl;
}

void Chef::makeSalad()
{
    cout<< name<< "is making salad "<< endl;
}

void Chef::makeSoup()
{
    cout<< name<< "is making soup "<< endl;
}

