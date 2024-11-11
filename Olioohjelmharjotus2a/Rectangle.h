#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

class Rectangle{
private:

    double width;
    double height;

public:
    Rectangle();
    Rectangle(double w, double h);
    double getWidth() const;
    void setWidth(double w);
    double getHeight() const;
    void setHeight(double h);
    double getArea();
    double getCircum();
    ~Rectangle();
};
#endif // RECTANGLE_H
