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
    Shape(double x, double y, const char *name);
    const Point& getOrigin() const;
    void setOrigin(double x, double y);
    const char* getName() const;
    void move (double dx, double dy);
    double distance(Shape &other);
    static double distance(Shape &the_shape, Shape &other);
    virtual void display() const;
    Shape(const Shape& source);
    Shape& operator =(const Shape& rhs);
    virtual ~Shape();
};

#endif
