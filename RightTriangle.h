#pragma once
#include "Figure.h"
#include "Triangle.h"

// ������������� ����������� - ����������� � �������� ���� ���� = 90
class RightTriangle : public Triangle {
public:
    RightTriangle(double a, double b, double c, double A, double B, double C=90);
    void print();
};