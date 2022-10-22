/*
 *  point.cpp
 *  ENSF 614 Lab 5, Exercise A
 *  Class implemenatation for Point.
 *  Completed by: Hassaan Ahmed Zuberi
 *  Submitted on: Oct 22, 2022
 */

#include "graphicsWorld.h"
#include "point.h"
#include <iostream>

using namespace std;

void GraphicsWorld::run(){
    #if 1 // Change 0 to 1 to test Point
    Point m (6,8);
    Point n (6,8);
    n.setx(9);
    cout << "\nExpected to dispaly the distance between m and n is: 3";
    cout << "\nThe distance between m and n is: " << m.distance(n);
    cout << "\nExpected second version of the distance function also print: 3";
    cout << "\nThe distance between m and n is again: "
    << Point::distance(m, n);
    #endif
}

int main(){
    GraphicsWorld app;
    app.run();
}
