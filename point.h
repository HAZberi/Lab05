// point.h
// ENSF 614 Lab 5 Exercise A

#ifndef POINT_H
#define POINT_H

class Point
{
private:
    double x, y;
    int id;
    static int counter;

public:
    Point(double x, double y);
    void setx(double val);
    void sety(double val);
    double getx() const;
    double gety() const;
    int counter() const;
    double distance(Point &other);
    static double distance(Point &the_point, Point &other);
    void display() const;
};

#endif
