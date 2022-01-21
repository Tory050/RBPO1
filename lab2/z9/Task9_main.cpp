#include <iostream>
#include "Task9.h"

using namespace std;
using namespace Nemanova;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout.precision(4);

	Nemanova::f();
	cout << "Заданный x = " << x << "; " << endl;
	cout << "Значение функции при заданном x: f = " << result << "; " << endl;

	cout << "Введите х:";
	cin >> x;
	Nemanova::f();
	cout << "Значение функции при введённом x: f = " << result << "; " << endl;
}