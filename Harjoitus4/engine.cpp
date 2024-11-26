#include "engine.h"

double Engine::getDisplacement() const
{
    return displacement;
}

void Engine::setDisplacement(double dip)
{
    displacement = dip;
}

int Engine::getHorsepower() const
{
    return horsepower;
}

void Engine::setHorsepower(int hp)
{
    horsepower = hp;
}

Engine::Engine() : horsepower(0), displacement(0.0) {
    cout<< "engine olio"<< endl;
}

Engine::Engine(int hp, double dip) : horsepower(hp), displacement(dip)
{
    cout<< "engine olio int double"<< endl;
}
