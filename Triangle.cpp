#include <iostream>
#include "Figure.h"
#include "Triangle.h"


Triangle::Triangle(double a, double b, double c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
        name = "�����������";
    }
    void Triangle::print_info() {
        F_print(name);
        std::cout << "�������: " << "a=" << a << ' ' << "b=" << b << ' ' << "c=" << c << std::endl;
        std::cout << "����: " << "A=" << A << ' ' << "B=" << B << ' ' << "C=" << C << std::endl;
        std::cout << std::endl;
    }