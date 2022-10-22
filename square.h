// square.h
// ENSF 614 Lab 5 Exercise A
#include "shape.h"

#ifndef SQUARE_H
#define SQUARE_H

class Square: public Shape
{
private:
    double side_a;

public:
    Square(double x, double y, double sideA, const char *name);
    virtual double area() const;
    virtual double perimeter() const;
    void set_side_a(double val);
    double get_side_a() const;
    virtual void display() const;
    Square(const Square& source);
    Square& operator =(const Square& rhs);
};

#endif
