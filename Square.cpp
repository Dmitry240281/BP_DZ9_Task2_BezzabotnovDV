#include <iostream>
#include "Figure.h"
#include "Quadrate.h"
#include "Square.h"

// ������� - ��� ������� �����, ��� ���� �� 90 ��������
Square::Square(double a, double A) : Quadrate(a, a, a, a, A, A, A, A) {
        name = "�������";
    }
    void Square::print() {
        print_info();
    }