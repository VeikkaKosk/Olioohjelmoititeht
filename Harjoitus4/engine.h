#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>

using namespace std;

class Engine
{
private:
    int horsepower;
    double displacement;
public:
    Engine();
    Engine(int hp, double dip);

    double getDisplacement() const;
    void setDisplacement(double dip);

    int getHorsepower() const;
    void setHorsepower(int hp);
};

#endif // ENGINE_H
