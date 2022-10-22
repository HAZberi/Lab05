/*
 *  point.cpp
 *  ENSF 614 Lab 5, Exercise A
 *  Class implemenatation for Point.
 *  Completed by: Hassaan Ahmed Zuberi
 *  Submitted on: Oct 22, 2022
 */

#include "point.h"
#include <cmath>
#include <iostream>

using namespace std;

int Point::count = 0;

Point::Point(double x, double y)
{
    x = x;
    y = y;
    count++;
    id = 100 + count;
}

Point::Point(const Point &source)
{
    x = source.x;
    y = source.x;
    id = source.id;
}

Point &Point::operator=(const Point &rhs)
{
    if (this != &rhs)
    {
        x = rhs.x;
        y = rhs.y;
        id = rhs.id;
    }

    return *this;
}

void Point::setx(double val)
{
    x = val;
}
void Point::sety(double val)
{
    y = val;
}
double Point::getx() const
{
    return x;
}
double Point::gety() const
{
    return y;
}
int Point::counter(){
    return count;
}
double Point::distance(Point &other){
    return sqrt(pow(other.getx() - other.getx(), 2) + pow(x - y, 2));
}
double Point::distance(Point &the_point, Point &other){
    return sqrt(pow(other.getx() - other.getx(), 2) + pow(the_point.x - the_point.y, 2));
}
void Point::display() const{
    cout.precision(2);
    cout << "Point " << id << "\nX-coordinate: " << fixed << x << "\nY-coordinate: " << fixed << y;
}

