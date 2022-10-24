/*
 *  rectangle.h
 *  ENSF 614 Lab 5, Exercise A
 *  Class Header file for Rectangle.
 *  Completed by: Hassaan Ahmed Zuberi
 *  Submitted on: Oct 22, 2022
 */

#include "square.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle: public Square
{
private:
    double side_b;

public:
    Rectangle(double x1, double y1, double a, double b, const char *name);
    virtual double area() const;
    virtual double perimeter() const;
    virtual void display() const;
    void set_side_b(double val);
    double get_side_b() const;
    Rectangle(const Rectangle& source);
    Rectangle& operator =(const Rectangle& rhs);
};

#endif