#include <math.h>;
module BPZ1901.Nemanova.Lab3.Task4.f2;

double RBPO::Lab3::Task4::f2(double x) {
    double res;
    if (x >= 1.1)
        res = 9 - x;
    else
        res = sin(3 * x) / (pow(x, 4) + 1);
    return res;
}