#include <iostream>
#include "Figure.h"
#include "Quadrate.h"
#include "Rhombus.h"

//����(��� ������� �����, ���� A, C � B, D ������� �����).

Rhombus::Rhombus(double a, double A, double B) : Quadrate(a, a, a, a, A, B, A, B) {
        name = "����";
    }
    void Rhombus::print() {
        print_info();
    }