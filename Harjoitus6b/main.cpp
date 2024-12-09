#include "exampleclass.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ExampleClass objExampleClass;
    objExampleClass.startToWait();
    return a.exec();
}
