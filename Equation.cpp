#include "Equation.h"
#include <iostream>

Equation::Equation(){

}

Equation::Equation(double x, double y, double z) :
            X(x), Y(y), Z(z) {

}

void Equation::solve() {
    double x = X;
    double y = Y;
    double z = Z;

    U = ( (pow(sqrt(8.0 + pow(fabs(x - y), 2.0) + 1.0), 1.0 / 3.0)) /
            (pow(x, 2.0) + pow(y, 2.0) + 2.0) ) - ( (pow(2.718, fabs(x - y))) * (pow((pow(tan(z), 2.0) + 1.0), x)) );
}

void Equation::setData(double x, double y, double z) {
    X = x;
    Y = y;
    Z = z;
}

void Equation::setX(double X) {
    Equation::X = X;
}

double Equation::getX() const {
    return X;
}

void Equation::setY(double Y) {
    Equation::Y = Y;
}

double Equation::getY() const {
    return Y;
}

void Equation::setZ(double Z) {
    Equation::Z = Z;
}

double Equation::getZ() const {
    return Z;
}

double Equation::getU() const {
    return U;
}

std::ostream&  operator<<(std::ostream& out, const Equation& obj) {
    std::cout << "X =\t" << obj.getX() << "\nY =\t" << obj.getY() << "\nZ =\t" << obj.getZ() << "\nU =\t" << obj.getU() << std::endl;
    return out;
}