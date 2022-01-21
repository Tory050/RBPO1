#include <iostream>
#include <math.h>

using namespace std;

void f(const double& x, double& f);

void main()
{
	setlocale(LC_ALL, "Russian");
	double x, F;
	cout.precision(4);

	x = 15;
	f(x, F);
	cout << "Заданный x = " << x << "; " << endl;
	cout << "Значение функции при заданном x: f = " << F << "; " << endl;

	cout << "Введите х:";
	cin >> x;
	f(x, F);
	cout << "Значение функции при введённом x: f = " << F << "; " << endl;
}

void f(const double& x, double& f)
{
	f = (sqrt(pow((3 * x + 2), 2) - 24 * x)) / (3 * sqrt(x) - (2 / sqrt(x)));
}