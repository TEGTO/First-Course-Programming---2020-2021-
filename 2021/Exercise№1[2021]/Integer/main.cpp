#include <iostream>
using namespace std;
void task_1()
{
	float L = 50; // ��������� � ����������� 
	float a = L / 100; // ��������� � ������
	cout << a;
}
void task_2()
{
	float a = 2500; // ���������� ������ � �����
	float b = a / 1024; // ���������� ���������� � �����
	cout << b;

}
void task_3()
{
	int a = 123; // ������� ������� ������ ����� ������ ����� 
	int b = a % 10;
	int c = a % 121;
	cout << b << c;
}
void task_4()
{
	int a = 450; // ��������� ������� ������� ������ �����(�����, ��� �������� �����)
	int b = a / 100;
	cout << b;
}
void task_5()
{
	int N = 385; // � ������ ����� ������ ������
	int M = N / 60; // ��������� ������� � ������ (������ ������) 
	cout << M;
}
int main()
{
	setlocale(LC_ALL, "RUS");
	task_1();
	cout << endl;
	task_2();
	cout << endl;
	task_3();
	cout << endl;
	task_4();
	cout << endl;
	task_5();
	cout << endl;






	system("pause");
	return 0;
}