#include <iomanip>
#include <iostream>
using namespace std;

int calcSum(int a, int b)
{
    cout << "Summa: " << a+b <<endl;    //yhteenlasku a+b summa
}

int calcDiv(int a, int b)
{
    if(b != 0){
        double osamaara = static_cast<double>(a) / b;
        cout<<"osamaara"<<fixed<<setprecision(2)<<osamaara<<endl;
    } else {
        cout << "virhe nollalla ei voi jakaa"<<endl;
    }
}

int retSum(int a, int b)
{
    return a + b;
}

float retDiv(int a, int b)
{
    if(b != 0) {
        return static_cast<float>(a) / b;
    } else {
        cout<<"virhe nollalla ei voi jakaa"<<endl;
    }
}
