#include <math.h>;
module BPZ1901.Nemanova.Lab3.Task2;

namespace RBPO::Lab3::Task2
{
    double f1(double x) {
        return (sqrt(pow((3 * x + 2), 2) - 24 * x)) / (3 * sqrt(x) - (2 / (sqrt(x))));
    }
    double f2(double x) {
        double res;
        if (x >= 1.1)
            res =9 - x;
        else
            res = sin(3 * x) / (pow(x, 4) + 1);
        return res;
    }
    double a(double n) {
        return pow(-1, n) * (1 - (n * n + 1) / (n * n + 3));
    }
    double f3(int n) {
        double sum = 0;
        int i = 0;
        while (n >= i) {
            sum+= a(i);
            i++;
        }
        return sum;
    }
    double f4(double eps) {
        double sum = 0;
        int i;
        while (abs(a(i) - a(i - 1)) > eps)
        {
            sum += a(i);
            i++;
        }
        return sum;
    }
}