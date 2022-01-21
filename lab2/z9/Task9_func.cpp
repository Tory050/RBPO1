#include "Task9.h"

using namespace Nemanova;

double Nemanova::x = 15;
double Nemanova::result;

void Nemanova::f()
{
	result = (sqrt(pow((3 * x + 2), 2) - 24 * x)) / (3 * sqrt(x) - (2 / sqrt(x)));
}