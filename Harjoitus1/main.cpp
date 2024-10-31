#include <iomanip>
#include <iostream>
#include "myfunctions.h"
using namespace std;

int main()
{
    int a, b;
    int calcDiv(int a, int b);

    cout<<"anna kokonaisluku a: "<<endl;
    cin>>a;
    cout<<"anna kokonaisluku b: "<<endl;
    cin>>b;

    int summa = retSum(a, b);
    float osamaara = retDiv(a, b);

    cout<<"summa: "<<summa<<endl;
    cout<<"osamaara: "<<fixed<<setprecision(2)<<osamaara<<endl;

    return 0;
}
