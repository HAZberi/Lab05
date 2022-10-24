/*
 *  circle.cpp
 *  ENSF 614 Lab 5, Exercise A
 *  Class implemenatation for Circle.
 *  Completed by: Hassaan Ahmed Zuberi
 *  Submitted on: Oct 22, 2022
 */

#include "circle.h"
#include "shape.h"
#include <cmath>
#include <iostream>

using namespace std;

Circle::Circle(double x1, double y1, double r, const char *name) : Shape(x1, y1, name)
{
    radius = r;
}
void Circle::set_radius(double val)
{
    radius = val;
}
double Circle::get_radius() const
{
    return radius;
}
Circle::Circle(const Circle &source) : Shape(source.getOrigin().getx(), source.getOrigin().gety(), source.getName())
{
    radius = source.get_radius();
}
Circle &Circle::operator=(const Circle &rhs)
{
    if (this != &rhs)
    {
        setName(rhs.getName());
        setOrigin(rhs.getOrigin().getx(), rhs.getOrigin().gety());
        set_radius(rhs.get_radius());
    }

    return *this;
}

double Circle::area() const
{
    return (3.14 * pow(radius, 2));
}

double Circle::perimeter() const
{
    return (2.00 * (3.14 * radius));
}

void Circle::display() const
{
    cout.precision(2);
    cout << "\nCircle Name: " << this->getName() << "\nX-coordinate: " << fixed << this->getOrigin().getx() << "\nY-coordinate: " << fixed << this->getOrigin().gety() << "\nRadius: " << radius << "\nArea: " << this->area() << "\nPerimeter: " << this->perimeter() << "\n";
}