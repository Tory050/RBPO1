#include <string>
#include <iostream>

using namespace std;

unsigned short personHeight;

unsigned short ReadPersonAge() 
{
	unsigned short personAge;
	cout << "Введите возраст: ";
	cin >> personAge;
	cout << endl;
	return personAge;
}

string ReadPersonName()
{
	string personName;
	cout << "Введите имя: ";
	cin >> personName;
	cout << endl;
	return personName;
}

unsigned short ReadPersonHeight()
{
	cout << "Введите рост: ";
	cin >> personHeight;
	cout << endl;
	return personHeight;
}

unsigned short ReadPersonWeight()
{
	unsigned short personWeight;
	cout << "Введите вес: ";
	cin >> personWeight;
	cout << endl;
	return personWeight;
	}

void ReadPersonSalary(double *personSalary)
{
	cout << "Введите зарплату: ";
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
	cout << "Возраст:"<<personAge << endl;
	cout << "Имя:" << personName << endl;
	cout << "Рост:" << personHeight << endl;
	cout << "Вес:" << personWeight << endl;
	cout << "Зарплата:" << personSalary << "\n"<< endl;
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
