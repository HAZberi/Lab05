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
    double area() const;
    double perimeter() const;
    void display() const;
    void set_side_b();
    void get_side_b();
    Rectangle(const Rectangle& source);
    Rectangle& operator =(const Rectangle& rhs);
};

#endif