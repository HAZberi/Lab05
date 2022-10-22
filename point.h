/*
 *  point.h
 *  ENSF 614 Lab 5, Exercise A
 *  Class Header file for Point.
 *  Completed by: Hassaan Ahmed Zuberi
 *  Submitted on: Oct 22, 2022
 */

#ifndef POINT_H
#define POINT_H

class Point
{
private:
    double x, y;
    int id;
    static int count;

public:
    Point(double x, double y);
    void setx(double val);
    void sety(double val);
    double getx() const;
    double gety() const;
    static int counter();
    double distance(Point &other);
    static double distance(Point &the_point, Point &other);
    void display() const;
    Point(const Point& source);
    Point& operator =(const Point& rhs);
};

#endif
