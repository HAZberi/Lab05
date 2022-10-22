// rectangle.h
// ENSF 614 Lab 5 Exercise A
#include "square.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle: public Square
{
private:
    double side_b;

public:
    Rectangle(double x1, double y1, double a, double b, const char *name);
    double area() const;
    double perimeter() const;
    void display() const;
    void set_side_b(double val);
    double get_side_b() const;
    Rectangle(const Rectangle& source);
    Rectangle& operator =(const Rectangle& rhs);
};

#endif