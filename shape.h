// shape.h
// ENSF 614 Lab 5 Exercise A
#include "point.h"

#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
private:
    Point origin;
    char *shapeName;

public:
    Shape(Point org, char *name);
    void set_x(double val);
    void set_y(double val);
    double getOrigin() const;
    void move (double dx, double dy);
    double distance(Shape &other);
    static double distance(Shape &the_point, Shape &other);
    void display() const;
    ~Shape();
};

#endif
