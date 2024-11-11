#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

double Rectangle::getHeight() const
{
    return height;
}

void Rectangle::setHeight(double h)
{
    height = h;
}

double Rectangle::getArea()
{
    return width * height;
}

double Rectangle::getCircum()
{
    return 2 * (width + height);
}

Rectangle::~Rectangle()
{
    cout<<"Rectangle olio tuhottiin"<<endl;

}

Rectangle::Rectangle()
{
    cout<<"Rectangle olio luotiin"<<endl;
}

double Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setWidth(double w)
{
    width = w;
}
