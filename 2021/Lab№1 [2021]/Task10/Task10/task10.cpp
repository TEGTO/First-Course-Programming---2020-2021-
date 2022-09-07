#include <iostream>
#include "tasks.h"
#include <math.h>
#include <cmath>
#include  <stdlib.h> 
using namespace std;
/*��������� �� � ������� ����� ������ ���������. */
int CommonDivisior(int x,int y) // � ������� �������� ��������� ����� �������� ������ ���� 1, ��� ��� �������� �� ����������
{
	while (x != y) 
	{
		if (x > y) 
		{
			x = x - y;
		}
		else 
		{
			y = y - x;
		}
	}
	return x;
}


void SimpleNumbers(int &b,int &N) //���������� ��� ����� ������� �������� 
{
	int i = 2;
	
	for (; i < *(&N); i++)
	{
		if ((CommonDivisior(*(&N), i)) == 1)
		{
			
			break;
		}


	}
	
	*(&b) = i;



}

int CheckOnSimplecity(int& N)//�������� ����� �� N �������� (���� �������, �� �� ��������)
{
	for (int i = 2; i < *(&N); i++)
	{
		if (*(&N)%i ==0 && i!= N)
		{
			return 0;
			break;
		}

		
	}
	return -1;

}

int Mod(int b, int n, int N) // ��-�� ������������� �������������� ���������� � ������� ������� ����������
{
	int res = 1;

		while (n > 0)
		{
			if (n & 1)
			{
				res = (res * b) % N;
			}
			n /= 2;
			b = (b * b) % N;
		}

	return res;
}







int task10()
{
	int N;
	cout << "������� ����� N �� �������� (N>0)" << endl;
	cin >> N;

	

	int b= 0;
	int* pb = &b;
	int* pN = &N;
	if ((CheckOnSimplecity(*pN)) == -1 )
	{
		cout << "����� " << N << " �� �������� ������ ���������. " << endl;
		return 0;

	}
	SimpleNumbers(*pb, *pN);



	
	
	if ((Mod(b, (N - 1), N)) == 1 )//��������� Mod ������ ���� 1, ����� ��� ����� ��������� 
	{
		cout << "����� " << N << " �������� ������ ���������. " << endl;

	}
	
	
	else
	{
		cout << "����� " << N << " �� �������� ������ ���������. " << endl;

	}
	return 0;
}