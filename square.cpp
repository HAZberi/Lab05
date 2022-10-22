/*
 *  square.cpp
 *  ENSF 614 Lab 5, Exercise A
 *  Class implemenatation for Square.
 *  Completed by: Hassaan Ahmed Zuberi
 *  Submitted on: Oct 22, 2022
 */

#include "square.h"
#include "shape.h"
#include <cmath>
#include <iostream>

using namespace std;

Square::Square(double x1, double y1, double a, const char *name) : Shape(x1, y1, name)
{
    side_a = a;
}
void Square::set_side_a(double val)
{
    side_a = val;
}
double Square::get_side_a() const
{
    return side_a;
}
Square::Square(const Square &source) : Shape(source.getOrigin().getx(), source.getOrigin().gety(), source.getName())
{
    side_a = source.get_side_a();
}
Square &Square::operator=(const Square &rhs)
{
    if (this != &rhs)
    {
        setOrigin(rhs.getOrigin().getx(), rhs.getOrigin().gety());
        set_side_a(rhs.get_side_a());
    }

    return *this;
}

double Square::area() const
{
    return pow(side_a, 2);
}

double Square::perimeter() const
{
    return (4.00 * get_side_a());
}

void Square::display() const
{
    cout.precision(2);
    cout << "Square Name: " << this->getName() << "\nX-coordinate: " << fixed << this->getOrigin().getx() << "\nY-coordinate: " << fixed << this->getOrigin().gety() << "\nSide a:" << side_a << "\nArea: " << this->area() << "\nPerimeter: " << this->perimeter() << "\n";
}