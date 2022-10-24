/*
 *  circle.h
 *  ENSF 614 Lab 5, Exercise B
 *  Class Header file for Square.
 *  Completed by: Hassaan Ahmed Zuberi
 *  Submitted on: Oct 24, 2022
 */

#include "shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle: public Shape
{
private:
    double radius;

public:
    Circle(double x, double y, double radius, const char *name);
    virtual double area() const;
    virtual double perimeter() const;
    void set_radius(double val);
    double get_radius() const;
    virtual void display() const;
    Circle(const Circle& source);
    Circle& operator =(const Circle& rhs);
};

#endif
