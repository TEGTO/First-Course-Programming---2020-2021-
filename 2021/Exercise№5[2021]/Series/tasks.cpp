#include <iostream>
#include <cmath>
#include "tasks.h"
using namespace std;
/*���� ������ ������������ �����. ����� �� �����.*/
void task1()
{
	cout << "task1" << endl;
	int sum = 0;
	int count[10]{ 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		sum = sum + count[i];

	}
	cout << sum << endl;
	system("pause");
}


/*���� ������ ������������ �����. ����� �� ������������.*/
void task2()
{
	cout << "task2" << endl;

	int pro = 1;
	int count[10]{ 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		pro = pro * count[i];

	}
	cout << pro << endl;
	system("pause");
}

/*���� ������ ������������ �����. ����� �� ������� ��������������*/
void task3()

{
	cout << "task3" << endl;
	float pro;
	float a=0;
	float b = 0;
	int count[10]{ 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		
		b++;
		a = a + count[i];
		pro = a / b;

	}

	cout << pro << endl;
	system("pause");

}
	


/*���� ����� ����� N � ����� �� N ������������ �����. ������� �����
� ������������ ����� �� ������� ������.*/
void task4()
{
	cout << "task4" << endl;
	const int N = 10;
	int value[N];
	int sum=0, pro=1;
	for (int i = 0; i < N; i++)
	{
	
		value[i] = i+1;

	}
	for (int i = 0; i < N; i++)
	{
		sum = value[i] + sum;
	}
	for (int i = 0; i < N; i++)
	{
		pro = value[i] * pro;
	}

	cout << "����� =" << sum << endl<<"������������ =" << pro << endl;
	system("pause");
}



/*���� ����� ����� N � ����� �� N ����� �����. ������� � ��� �� ��-
����� ������ ���� �������� ����� �� ������� ������ � ���������� K �����
�����.*/
void task5()
{
	cout << "task5" << endl;
	const int N = 10;
	int value[N];
	for (int i = 0; i < N; i++)
	{

		value[i] = i + 1;

	}
int k = 0;
	for (int i = 0; i < N; i++)
	{
		
		if (value[i] %2 !=0)
		{
			continue;
		}
		else
		{
			k++;
			cout << value[i] << endl;
			
		}


	}
	cout << "k=" << k << endl;

}