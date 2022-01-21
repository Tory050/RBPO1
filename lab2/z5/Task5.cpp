#include <iostream>
#include <math.h>

using namespace std;

double x;
double result;
void f();

void main()
{
	setlocale(LC_ALL, "Russian");
	cout.precision(4);

	x = 15;
	f();
	cout << "Заданный x = " << x << "; " << endl;
	cout << "Значение функции при заданном x: f = " << result << "; " << endl;

	cout << "Введите х:";
	cin >> x;
	f();
	cout << "Значение функции при введённом x: f = " << result << "; " << endl;
}

void f()
{
	result = (sqrt(pow((3 * x + 2), 2) - 24 * x)) / (3 * sqrt(x) - (2 / sqrt(x)));
}