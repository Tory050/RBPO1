#include <math.h>;
module BPZ1901.Nemanova.Lab3.Task1;

namespace RBPO::Lab3::Task1
{
    double f1(double x) {
        return (sqrt(pow((3 * x + 2), 2) - 24 * x)) / (3*sqrt(x)-(2/(sqrt(x))));
    }
    double f2(double x) {
        return ((x >= 1.1) ? (9 - x) : sin(3 * x) / (pow(x,4) + 1));
    }
    double a(double n) {
        return pow(-1, n) * (1-(n*n + 1) / (n * n  + 3));
    }
    double f3(int n) {
        double sum = 0;
        for (int i = 0; i <= n; ++i) {
            sum += a(i);
        }
        return sum;
    }
    double f4(double eps) {
        int i;
        for (i = 0; abs(a(i) - a(i - 1)) < eps; ++i) {}
        return a(i);
    }
}