#include <iostream>
#include "Task9.h"

using namespace std;
using namespace Nemanova;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout.precision(4);

	Nemanova::f();
	cout << "�������� x = " << x << "; " << endl;
	cout << "�������� ������� ��� �������� x: f = " << result << "; " << endl;

	cout << "������� �:";
	cin >> x;
	Nemanova::f();
	cout << "�������� ������� ��� �������� x: f = " << result << "; " << endl;
}