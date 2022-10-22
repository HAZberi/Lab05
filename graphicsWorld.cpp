/*
 *  point.cpp
 *  ENSF 614 Lab 5, Exercise A
 *  Class implemenatation for Point.
 *  Completed by: Hassaan Ahmed Zuberi
 *  Submitted on: Oct 22, 2022
 */

#include "graphicsWorld.h"
#include "point.h"
#include "shape.h"
#include "square.h"
#include <iostream>

using namespace std;

void GraphicsWorld::run()
{
#if 0 // Change 0 to 1 to test Point
    Point m(6, 8);
    Point n(6, 8);
    n.setx(9);
    cout << "\nExpected to dispaly the distance between m and n is: 3";
    cout << "\nThe distance between m and n is: " << m.distance(n);
    cout << "\nExpected second version of the distance function also print: 3";
    cout << "\nThe distance between m and n is again: " << Point::distance(m, n) << "\n";
#endif

#if 1 // Change 0 to 1 to test Square
cout << "\n\nTesting Functions in class Square:" <<endl;
Square s(5, 7, 12, "SQUARE - S");
s.display();
#endif
}

int main()
{
    GraphicsWorld app;
    app.run();
}
