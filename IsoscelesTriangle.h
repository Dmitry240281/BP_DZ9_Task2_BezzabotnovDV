#pragma once
#include "Figure.h"
#include "Triangle.h"

// �������������� ����������� - ����������� � �������� ��� ������� � ��� ���� �����
class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double a, double b, double A, double B);
        void print();
};