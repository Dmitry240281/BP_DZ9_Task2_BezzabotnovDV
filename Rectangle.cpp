#include <iostream>
#include "Figure.h"
#include "Quadrate.h"
#include "Rectangle.h"

// ������������� (������� ������� �����, ���� = 90)

Rectangle::Rectangle(double a, double b, double A) : Quadrate(a, b, a, b, A, A, A, A) {
        name = "�������������";
    }
    void Rectangle::print() {
        print_info();
    }