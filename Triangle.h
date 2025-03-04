#pragma once
#include "Figure.h"

class Triangle : public Figure {
protected:
    double a{}, b{}, c{}; // Стороны
    double A{}, B{}, C{}; // Углы
public:
    Triangle(double a, double b, double c, double A, double B, double C);
    void print_info();
};

