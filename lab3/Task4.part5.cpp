#include <math.h>;
module BPZ1901.Nemanova.Lab3.Task4.a;

double RBPO::Lab3::Task4::a(double n) {
    return pow(-1, n) * (1 - (n * n + 1) / (n * n + 3));
}