#include <iostream> 
#include <conio.h>
import BPZ1901.Nemanova.Lab3.Task1;
import BPZ1901.Nemanova.Lab3.Task2;
import BPZ1901.Nemanova.Lab3.Task3;
import BPZ1901.Nemanova.Lab3.Task4;
import BPZ1901.Nemanova.Lab3.Task5;

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	std::cout << "����:\n1 - ������� 1\n2 - ������� 2\n3 - ������� 3\n4 - ������� 4\n5 - ������� 5" << std::endl;
	do
	{
		switch (_getch())
		{
		case '1':
		{
			std::cout << "������ 1" << std::endl;
			double r1 = RBPO::Lab3::Task1::f1(3);
			double r21 = RBPO::Lab3::Task1::f2(8);
			double r22 = RBPO::Lab3::Task1::f2(10);
			double r3 = RBPO::Lab3::Task1::f3(6);
			double r4 = RBPO::Lab3::Task1::f4(0.01);
			std::cout << "������� f1: " << r1 << std::endl;
			std::cout << "������� f2 ��� x <= 9: " << r21 << std::endl;
			std::cout << "������� f2 ��� x > 9: " << r22 << std::endl;
			std::cout << "������� f3: " << r3 << std::endl;
			std::cout << "������� f4: " << r4 << std::endl;
			std::cout << std::endl;
			break;
		}
		case '2':
		{
			std::cout << "������ 2" << std::endl;
			double r1 = RBPO::Lab3::Task2::f1(3);
			double r21 = RBPO::Lab3::Task2::f2(8);
			double r22 = RBPO::Lab3::Task2::f2(10);
			double r3 = RBPO::Lab3::Task2::f3(6);
			double r4 = RBPO::Lab3::Task2::f4(0.01);
			std::cout << "������� f1: " << r1 << std::endl;
			std::cout << "������� f2 ��� x <= 9: " << r21 << std::endl;
			std::cout << "������� f2 ��� x > 9: " << r22 << std::endl;
			std::cout << "������� f3: " << r3 << std::endl;
			std::cout << "������� f4: " << r4 << std::endl;
			std::cout << std::endl;
			break;
		}
		case '3':
		{
			std::cout << "������ 3" << std::endl;
			double r1 = RBPO::Lab3::Task3::f1(3);
			double r21 = RBPO::Lab3::Task3::f2(8);
			double r22 = RBPO::Lab3::Task3::f2(10);
			double r3 = RBPO::Lab3::Task3::f3(6);
			double r4 = RBPO::Lab3::Task3::f4(0.01);
			std::cout << "������� f1: " << r1 << std::endl;
			std::cout << "������� f2 ��� x <= 9: " << r21 << std::endl;
			std::cout << "������� f2 ��� x > 9: " << r22 << std::endl;
			std::cout << "������� f3: " << r3 << std::endl;
			std::cout << "������� f4: " << r4 << std::endl;
			std::cout << std::endl;
			break;
		}
		case '4':
		{
			std::cout << "������ 4" << std::endl;
			double r1 = RBPO::Lab3::Task4::f1(3);
			double r21 = RBPO::Lab3::Task4::f2(8);
			double r22 = RBPO::Lab3::Task4::f2(10);
			double r3 = RBPO::Lab3::Task4::f3(6);
			double r4 = RBPO::Lab3::Task4::f4(0.01);
			std::cout << "������� f1: " << r1 << std::endl;
			std::cout << "������� f2 ��� x <= 9: " << r21 << std::endl;
			std::cout << "������� f2 ��� x > 9: " << r22 << std::endl;
			std::cout << "������� f3: " << r3 << std::endl;
			std::cout << "������� f4: " << r4 << std::endl;
			std::cout << std::endl;
			break;
		}
		case '5':
		{
			std::cout << "������ 5" << std::endl;
			double r1 = RBPO::Lab3::Task5::f1(3);
			double r21 = RBPO::Lab3::Task5::f2(8);
			double r22 = RBPO::Lab3::Task5::f2(10);
			double r3 = RBPO::Lab3::Task5::f3(6);
			double r4 = RBPO::Lab3::Task5::f4(0.01);
			std::cout << "������� f1: " << r1 << std::endl;
			std::cout << "������� f2 ��� x <= 9: " << r21 << std::endl;
			std::cout << "������� f2 ��� x > 9: " << r22 << std::endl;
			std::cout << "������� f3: " << r3 << std::endl;
			std::cout << "������� f4: " << r4 << std::endl;
			std::cout << std::endl;
			break;
		}
		case 'q':
		case 'Q':
			goto exit;
		default:
			std::cout << "����������� �������" << std::endl;
			break;
		}
		system("pause");
	} while (true);
exit: return 0;

}