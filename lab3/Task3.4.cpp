#include <math.h>;
module BPZ1901.Nemanova.Lab3.Task3;

double RBPO::Lab3::Task3::f4(double eps) {
    double sum = 0;
    int i;
    do
    {
        sum += a(i);
        i++;
    } while (abs(a(i) - a(i - 1)) > eps);
    return sum;
}
