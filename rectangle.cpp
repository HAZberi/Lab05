/*
 *  rectangle.cpp
 *  ENSF 614 Lab 5, Exercise A
 *  Class implemenatation for Rectangle.
 *  Completed by: Hassaan Ahmed Zuberi
 *  Submitted on: Oct 22, 2022
 */

#include "rectangle.h"
#include "rectangle.h"
#include <cmath>
#include <iostream>

using namespace std;

Rectangle::Rectangle(double x1, double y1, double a, double b, const char *name) : Square(x1, y1, a, name)
{
    side_b = b;
}
void Rectangle::set_side_b(double val)
{
    side_b = val;
}
double Rectangle::get_side_b() const
{
    return side_b;
}
Rectangle::Rectangle(const Rectangle &source) : Square(source.getOrigin().getx(), source.getOrigin().gety(), source.get_side_a(), source.getName())
{
    side_b = source.get_side_b();
}
Rectangle &Rectangle::operator=(const Rectangle &rhs)
{
    if (this != &rhs)
    {
        setName(rhs.getName());
        setOrigin(rhs.getOrigin().getx(), rhs.getOrigin().gety());
        set_side_a(rhs.get_side_a());
        set_side_b(rhs.get_side_b());
    }

    return *this;
}

double Rectangle::area() const
{
    return (get_side_a() * side_b);
}

double Rectangle::perimeter() const
{
    return (2.00 * (get_side_a() + side_b));
}

void Rectangle::display() const
{
    cout.precision(2);
    cout << "\nRectangle Name: " << this->getName() << "\nX-coordinate: " << fixed << this->getOrigin().getx() << "\nY-coordinate: " << fixed << this->getOrigin().gety() << "\nSide a: " << this->get_side_a() << "\nSide b: " << this->get_side_b() << "\nArea: " << this->area() << "\nPerimeter: " << this->perimeter() << "\n";
}