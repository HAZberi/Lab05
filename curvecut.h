/*
 *  curvecut.h
 *  ENSF 614 Lab 5, Exercise B
 *  Class Header file for CurveCut.
 *  Completed by: Hassaan Ahmed Zuberi
 *  Submitted on: Oct 24, 2022
 */

#include "circle.h"
#include "rectangle.h"

#ifndef CURVECUT_H
#define CURVECUT_H

class CurveCut: public Circle, public Rectangle
{
public:
    CurveCut(double x, double y, double a, double b, double radius, const char *name);
    double area() const;
    double perimeter() const;
    void display() const;
    CurveCut(const CurveCut& source);
    CurveCut& operator =(const CurveCut& rhs);
};

#endif
