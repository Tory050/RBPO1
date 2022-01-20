#include <math.h>;
module BPZ1901.Nemanova.Lab3.Task4.f1;

double RBPO::Lab3::Task4::f1(double x) {
    return (sqrt(pow((3 * x + 2), 2) - 24 * x)) / (3 * sqrt(x) - (2 / (sqrt(x))));
}
