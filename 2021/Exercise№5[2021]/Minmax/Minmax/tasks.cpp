#include <iostream>
#include <cmath>
#include "tasks.h"
using namespace std;
/*���� ����� ����� N � ����� �� N �����. ����� ����������� � ���-��������� �� ��������� ������� ������ � ������� �� � ��������� �������*/
void task1()
{
	cout << "TASK 1" << endl;
	const int N = 7;
	double arr[N]{ 3,20,12,5,-1,50,21 };
	int min=0, max=0;
	for (int i = 0; i < N; i++)
	{
		if (arr[i]<min)
		{
			min = arr[i];

		}
		
		if (max < arr[i]) 
		{
			max = arr[i];
		}
		
		
	}
	cout << min << endl;
	cout << max << endl;
	system("pause");
}


/*���� ����� ����� N � ����� �� N ���������������, �������� ������ ��������� � ������ ����� (a, b). ����� ����������� ������� �����-��������� �� ������� ������.*/
void task2()
{
	cout << "TASK 2" << endl;
	const int N = 5;
	int z = 1 * 5;
	int x = 4 * 3;
	int c = 14 * 8;
	int b = 25 * 16;
	int h = 31 * 20;
	int arr[N]{ z,x,c,b,h };
	int min = N;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];

		}

		


	}
	cout << min << endl;
	system("pause");
}

/*���� ����� ����� N � ����� �� N �����. ����� ����� ������������ �������� �� ������� ������.*/
void task3()
{
	cout << "TASK 3" << endl;
	const int N = 7;
	double arr[N]{ 3,20,12,5,-1,50,21 };
	int min = 0;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];

		}
	}
	for (int k = 0; k < N; k++)

	{
		if (min == arr[k])
		{
			cout << k << endl;
			break;}
		}
	

}

/*���� ����� ����� N � ����� �� N ���������������, �������� ������ ��������� � ������ ����� (a, b). ����� ������������ �������� �����-��������� �� ������� ������.*/
void task4()
{


	cout << "TASK 4" << endl;
	const int N = 5;
	int z = 1 * 5;
	int x = 4 * 3;
	int c = 14 * 8;
	int b = 25 * 16;
	int h = 31 * 20;
	int arr[N]{ z,x,c,b,h };
	int max = N;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];

		}




	}
	cout << max << endl;
	system("pause");

}



/*���� ����� ����� N � ����� �� N ����� �����. ����� ������ ������� ������������ � ���������� ������������� �������� �� ������� ������ � ������� �� � ��������� �������.*/
void task5()
{
	
		cout << "TASK 5" << endl;
		const int N = 7;
		double arr[N]{ 3,20,12,5,-1,50,21 };
		int min = 0; int max = 0;
		for (int i = 0; i < N; i++)
		{
			if (arr[i] < min)
			{
				min = arr[i];

			}
		}
		for (int k = 0; k < N; k++)

		{
			if (min == arr[k])
			{
				cout << k << endl;
				break;
			}
		}
		for (int i = 0; i < N; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];

			}
		}
		for (int k = 0; k < N; k++)

		{
			if (max == arr[k])
			{
				cout <<endl<< k << endl;
				break;
			}
		}

}