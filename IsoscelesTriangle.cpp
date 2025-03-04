#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "IsoscelesTriangle.h"

// �������������� ����������� - ����������� � �������� ��� ������� � ��� ���� �����

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A) {
        name = "�������������� �����������";
    }
    void IsoscelesTriangle::print() {
        print_info();
    }