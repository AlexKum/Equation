#ifndef EQUATION_H
#define EQUATION_H

#include <cmath>
#include <ostream>

class Equation {

private:
    double X;
    double Y;
    double Z;
    double U;

public:
    Equation();
    Equation(double, double, double);
    void solve();
    void setData(double, double, double);
    friend std::ostream& operator<<(std::ostream& out, const Equation& com);

    void setX(double X);
    void setZ(double Z);
    void setY(double Y);
    double getX() const;
    double getY() const;
    double getZ() const;
    double getU() const;
};


#endif
