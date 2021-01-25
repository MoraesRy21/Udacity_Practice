#pragma once

class Shape {
private:
    int length = 0;     // Length of a box
    int width = 0;

public:
    Shape();
    Shape(int l, int w);

public:
    double Area();
    int operator + (Shape shape);
    bool operator == (Shape shapeIn);
};