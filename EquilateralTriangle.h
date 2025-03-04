#pragma once
#include "Figure.h"
#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double a, double A);
    void print();
};