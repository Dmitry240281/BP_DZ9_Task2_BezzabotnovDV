#include <iostream>
#include "Figure.h"
#include "Quadrate.h"
#include "Parallelogram.h"

// �������������� - ������� ������� �����, ���� �� ����� 90 �������� �� ������� �����

Parallelogram::Parallelogram(double a, double b, double A, double B) : Quadrate(a, b, a, b, A, B, A, B) {
        name = "��������������";
    }
    void Parallelogram::print() {
        print_info();
    }