#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"

// ������������� ����������� - ����������� � �������� ���� ���� = 90
RightTriangle::RightTriangle(double a, double b, double c, double A, double B, double C) : Triangle(a, b, c, A, B, C) {
        name = "������������� �����������";
    }
    void RightTriangle::print() {
        print_info();
    }
