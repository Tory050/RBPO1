#include <iostream>

using namespace std;

extern double x;
extern double result;

void f();

void main()
{
	setlocale(LC_ALL, "Russian");
	cout.precision(4);

	f();
	cout << "�������� x = " << x << "; " << endl;
	cout << "�������� ������� ��� �������� x: f = " << result << "; " << endl;

	cout << "������� �:";
	cin >> x;
	f();
	cout << "�������� ������� ��� �������� x: f = " << result << "; " << endl;
}