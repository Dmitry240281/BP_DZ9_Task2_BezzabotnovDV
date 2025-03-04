// Задача 2. Проект посложнее

#include "BP_DZ9_Task2_BezzabotnovDV.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    Triangle Tr(10, 20, 30, 40, 50, 60);
    Tr.print_info();
    RightTriangle Rt(10, 20, 30, 40, 50);
    Rt.print();
    IsoscelesTriangle It(10, 20, 30, 40);
    It.print();
    EquilateralTriangle Et(30, 60);
    Et.print();
    Quadrate Q(10, 20, 30, 40, 50, 60, 70, 80);
    Q.print_info();
    Rectangle Re(20, 30);
    Re.print();
    Square Sq(30);
    Sq.print();
    Parallelogram Pa(20, 30, 60, 120);
    Pa.print();
    Rhombus R(30, 70, 110);
    R.print();

    return EXIT_SUCCESS;
}
