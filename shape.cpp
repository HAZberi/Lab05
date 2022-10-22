/*
 *  shape.cpp
 *  ENSF 614 Lab 5, Exercise A
 *  Class implemenatation for Shape.
 *  Completed by: Hassaan Ahmed Zuberi
 *  Submitted on: Oct 22, 2022
 */

#include "shape.h"
#include <cmath>
#include <iostream>

using namespace std;

Shape::Shape(double x1, double y1, const char *name) : origin(x1, y1)
{
    shapeName = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

const Point &Shape::getOrigin() const
{
    return origin;
}

const char *Shape::getName() const
{
    return shapeName;
}

void Shape::setName(const char* name){
    strcpy(shapeName, name);
}

void Shape::setOrigin(double x, double y)
{
    origin = Point(x, y);
}

Shape::Shape(const Shape &source) : origin(source.getOrigin())
{
    shapeName = new char[strlen(source.getName()) + 1];
    strcpy(shapeName, source.getName());
}

Shape &Shape::operator=(const Shape &rhs)
{
    if (this != &rhs)
    {
        origin = rhs.getOrigin();
        strcpy(shapeName, rhs.getName());
    }

    return *this;
}

void Shape::move(double dx, double dy)
{
    origin.setx(origin.getx() + dx);
    origin.sety(origin.gety() + dy);
}

double Shape::distance(Shape &other)
{
    return sqrt(pow(origin.getx() - other.getOrigin().getx(), 2) + pow(origin.gety() - other.getOrigin().gety(), 2));
}
double Shape::distance(Shape &the_shape, Shape &other)
{
    return sqrt(pow(the_shape.getOrigin().getx() - other.getOrigin().getx(), 2) + pow(the_shape.getOrigin().gety() - other.getOrigin().gety(), 2));
}
void Shape::display() const
{
    cout.precision(2);
    cout << "\nShape Name: " << shapeName << "\nX-coordinate: " << fixed << origin.getx() << "\nY-coordinate: " << fixed << origin.gety();
}

Shape::~Shape()
{
    delete shapeName;
}
