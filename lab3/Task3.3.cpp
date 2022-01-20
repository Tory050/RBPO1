#include <math.h>;
module BPZ1901.Nemanova.Lab3.Task3;

double RBPO::Lab3::Task3::f3(int n) {
        double sum = 0;
        int i = 0;
        do
        {
            sum += a(i);
            i++;
        } while (i <= n);
        return sum;
 }