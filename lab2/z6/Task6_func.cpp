#include <iostream>
#include <math.h>

using namespace std;

double f(double x)
{
	double f;
	f = (sqrt(pow((3 * x + 2), 2) - 24 * x)) / (3 * sqrt(x) - (2 / sqrt(x)));
	return f;
}