#include "Equation.h"
#include <iostream>

int main() {

    Equation a;
    a.setX(-4.5);
    a.setY(0.75 * pow(10, -4));
    a.setZ(0.845 * pow(10, 2));
    a.solve();
    std::cout << a << std::endl;

    return 0;
}