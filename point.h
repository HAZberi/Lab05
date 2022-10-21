// point.h
// ENSF 614 Lab 5 Exercise A


#ifndef POINT_H
#define POINT_H

class Point {
    private:
        double x, y;
        int id;
        static int counter;
    public:
        Point(double x, double y);
        void set_x(double val);
        void set_y(double val);
        double get_x() const;
        double get_y() const;
        int counter() const;
        double distance(Point& other);
        static double distance(Point& the_point, Point& other);
        void display() const;
};

#endif
