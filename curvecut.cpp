/*
 *  curvecut.cpp
 *  ENSF 614 Lab 5, Exercise B
 *  Class implemenatation for CurveCut.
 *  Completed by: Hassaan Ahmed Zuberi
 *  Submitted on: Oct 22, 2022
 */

#include "circle.h"
#include "rectangle.h"
#include "curvecut.h"
#include <cmath>
#include <iostream>

using namespace std;

CurveCut::CurveCut(double x1, double y1, double a, double b, double r, const char *name) : Circle(x1, y1, r, name), Rectangle(x1, y1, a, b, name), Shape(x1, y1, name){
    if(a > b){
        if(r > b){
            cout << "Radius " << r << " should be greater than " << b << "\n";
            exit(0); 
        }
    }else {
        if (r > a){
            cout << "Radius " << r << " should be greater than " << a << "\n";
            exit(0); 
        }
    }
}    

CurveCut::CurveCut(const CurveCut &source) : Circle(source.getOrigin().getx(), source.getOrigin().gety(), source.get_radius(), source.getName()), Rectangle(source.getOrigin().getx(), source.getOrigin().gety(), source.get_side_a(), source.get_side_b(), source.getName()), Shape(source.getOrigin().getx(), source.getOrigin().gety(), source.getName()){}

CurveCut &CurveCut::operator=(const CurveCut &rhs)
{
    if (this != &rhs)
    {
        this->setName(rhs.getName());
        this->setOrigin(rhs.getOrigin().getx(), rhs.getOrigin().gety());
        this->set_radius(rhs.get_radius());
        this->set_side_a(rhs.get_side_a());
        this->set_side_b(rhs.get_side_b());
    }

    return *this;
}

double CurveCut::area() const
{
    return (this->get_side_a() * this->get_side_b()) - ((3.14 * pow(this->get_radius(), 2)) / 4);
}

double CurveCut::perimeter() const
{
    return (2.00 * (this->get_side_a() + this->get_side_b())) - ((2.00 * (3.14 * this->get_radius()))/ 4);
}

void CurveCut::display() const
{
    cout.precision(2);
    cout << "\nCurveCut Name: " << this->getName() << "\nX-coordinate: " << fixed << this->getOrigin().getx() << "\nY-coordinate: " << fixed << this->getOrigin().gety() << "\nWidth: " << this->get_side_a() << "\nLength: " << this->get_side_b() << "\nRadius of cut: " << this->get_radius() << "\n";
}