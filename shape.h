/*
 *  shape.h
 *  ENSF 614 Lab 5, Exercise A
 *  Class Header file for Shape.
 *  Completed by: Hassaan Ahmed Zuberi
 *  Submitted on: Oct 22, 2022
 */

#include "point.h"

#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
private:
    Point origin;
    char *shapeName;

public:
    Shape(double x, double y, const char *name);
    const Point &getOrigin() const;
    void setOrigin(double x, double y);
    const char *getName() const;
    void setName(const char *name);
    void move(double dx, double dy);
    double distance(Shape &other);
    static double distance(Shape &the_shape, Shape &other);
    virtual void display() const;
    Shape(const Shape &source);
    Shape &operator=(const Shape &rhs);
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual ~Shape();
};

#endif
