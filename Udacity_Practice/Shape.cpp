#include "Shape.h"

double Shape::Area() {
    return (double) (length * width);
}

Shape::Shape(int l, int w) {
    length = l;
    width = w;
}

Shape::Shape() {
    length = 2;
    width = 2;
}

int Shape::operator + (Shape shapeIn) {
    return Area() + shapeIn.Area();
}

bool Shape::operator == (Shape shapeIn) {
    return length == shapeIn.length && width == shapeIn.width ? true : false;
}