#include <iostream>
#include <cmath>
using namespace std;
//���� ����� ����� K � N (N > 0). ������� N ��� ����� K.
void task1()
{
	cout << "task1" << endl;
	int K = 10, N = 5;
	for (int i = 0; i < N; i++)
	{
		cout << K << endl;

	}
	system("pause");
}

/*���� ��� ����� ����� A � B(A < B).������� � ������� ����������� ���
����� �����, ������������� ����� A � B(������� ���� ����� A � B),
� ����� ���������� N ���� �����.*/
void task2()
{
	cout << "task2" << endl;
	int A=3, B=10;
	int N = 0;
	for (A; A <= B; A++)
	{
		
		N++;
		cout << A << endl;
	}
	cout << "N= " << N << endl << endl;
}


/*���� ������������ ����� � ���� 1 �� ������.������� ��������� 0.1,
0.2, �, 1 �� ������.*/
void task3()
{
	cout << "task3" << endl;

	double price = 1.2;
	for (int i = 1; i <= 10; i++)
	{
	
		
		cout << (price / 10) * i << endl;
		

	}
	system("pause");
}
/*���� ������������ ����� A � ����� ����� N (> 0). ��������� ����
����, ������� ��� ����� ������� ����� A �� 1 �� N.*/
void task4()
{
	cout << "task4" << endl;
	double A = 0.4;
	int N = 8;
	for (int i = 1; i <= N; i++)
	{
		cout << pow(A, i) << endl;

	}
	system("pause");
}


/*���� ����� ����� N (> 0). ����� ������������
N! = 1�2���N
(N����������). ����� �������� �������������� ������������, �����-
���� ��� ������������ � ������� ������������ ���������� � �������
��� ��� ������������ �����.*/
void task5()
{
	cout << "task5" << endl;
	int N;
	cout << "Enter N" << endl;
	cin >> N;
	double p = 1;
	for (int i = 1; i < N; i++)
	{
		
		p = i * p;
	}
	cout << p << endl;
	system("pause");
}