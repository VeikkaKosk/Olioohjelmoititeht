#include "aggregationa.h"
#include "assosiationa.h"
#include "classb.h"

#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 10;

    cout << "a:n arvo: " << a << " ja osoite " << &a << endl;
    cout << "b:n arvo: " << b << " ja osoite " << &b << endl;

    int *myPointer = &a;
    cout << "osoittimen osoite on: " << myPointer << endl;
    cout << "osoittimen muistipaikka: " << *myPointer << endl;

    myPointer = &b;

    cout << "osoittimen osoite on: " << myPointer << endl;
    cout << "osoittimen muistipaikka: " << *myPointer << endl;

    int &refA = a;
    cout << "ref osoittaa osote: " << &refA << endl;
    cout << "ref arvo on: " << refA << endl;

    //Ero on että muttujan arvo jos siihen muuttujaan lisää "&muuttuja" & eteen niin silloin se osoittaa osoitetta esim 0x2ef53ffc9c
    //Mutta jos siinä ei ole edessä & silloin "muuttuja" antaa muuttujanj arvon esim 10

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;


    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB = objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;
    return 0;
}
