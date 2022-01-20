#include <string>
#include <iostream>

using namespace std;

unsigned short personHeight;

unsigned short ReadPersonAge() 
{
	unsigned short personAge;
	cout << "������� �������: ";
	cin >> personAge;
	cout << endl;
	return personAge;
}

string ReadPersonName()
{
	string personName;
	cout << "������� ���: ";
	cin >> personName;
	cout << endl;
	return personName;
}

unsigned short ReadPersonHeight()
{
	cout << "������� ����: ";
	cin >> personHeight;
	cout << endl;
	return personHeight;
}

unsigned short ReadPersonWeight()
{
	unsigned short personWeight;
	cout << "������� ���: ";
	cin >> personWeight;
	cout << endl;
	return personWeight;
	}

void ReadPersonSalary(double *personSalary)
{
	cout << "������� ��������: ";
	cin >> *personSalary;
	cout << endl;
}

void ReadPersonData(string& personName, unsigned short& personAge, double& personSalary)
{
	personName = ReadPersonName();
	personAge = ReadPersonAge();
	ReadPersonSalary(&personSalary);
}

void ReadPersonData(string& personName, unsigned short& personAge, unsigned short& personHeight, unsigned short& personWeight)
{
	personName = ReadPersonName();
	personAge = ReadPersonAge();
	ReadPersonHeight();
	personHeight = personHeight;
	ReadPersonWeight();

}

void WritePersonData(unsigned short personAge, const string& personName = "", const string& personHeight = "", const string& personWeight = "", const string& personSalary = "")
{
	cout << "�������:"<<personAge << endl;
	cout << "���:" << personName << endl;
	cout << "����:" << personHeight << endl;
	cout << "���:" << personWeight << endl;
	cout << "��������:" << personSalary << "\n"<< endl;
}

int main()
{
	setlocale(LC_ALL, "russian");
	string personName;
	unsigned short personAge ;
	unsigned short personHeight;
	unsigned short personWeight;
	double personSalary;
		
	ReadPersonData(personName, personAge, personSalary);
	WritePersonData(personAge, personName, "", "", to_string(personSalary));

	ReadPersonData(personName, personAge, personHeight, personWeight);
	WritePersonData(personAge, personName, to_string(personHeight), to_string(personWeight), "");

	return 0;
}
