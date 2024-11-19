#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef chef("Chef Gordon Ramsay ");
    ItalianChef ichef("Italian chef Alfonso Mussoli ");
    chef.makeSalad();
    chef.makeSoup();
    ichef.makePasta();
    ichef.getName();



    return 0;
}
