#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(double a, double A) : Triangle(a, a, a, A, A, A) {
        name = "�������������� �����������";
    }
    void EquilateralTriangle::print() {
        print_info();
    }